const load = async (searchText, isShowAll) => {
    const res = await fetch(`https://openapi.programming-hero.com/api/phones?search=${searchText}`);
    const data = await res.json();
    const phone = data.data;
    console.log(phone)

    loadPhones(phone, isShowAll)
    

}


const loadPhones = (data, isShowAll) => 
{
    const showAllContainer = document.getElementById("show-all-container");
    if(data.length != 0)
  {
    noDataAvailable(false)
    if(data.length > 12 && !isShowAll)
    {
      showAllContainer.classList.remove("hidden");
    }
    else
    {
      showAllContainer.classList.add("hidden");

    }
  }
  else
  {
    noDataAvailable(true)
    showAllContainer.classList.add("hidden");

  }

    if(!isShowAll)
    {
      data = data.slice(0,12)

    }

    const phonelistDiv = document.getElementById("phone-list");
    phonelistDiv.innerHTML= ""
    data.forEach(element => {
      const phoneDiv = document.createElement("div");
        
       phoneDiv.classList = "card bg-gray-100 shadow-xl"
        phoneDiv.innerHTML = `
        <figure class="pt-4" ><img src="${element.image}" alt="Phones" /></figure>
        <div class="card-body">
          <h2 class="card-title">${element.phone_name}</h2>
          <p>If a dog chews shoes whose shoes does he choose?</p>
          <div class="card-actions justify-center pt-2">
            <button class="btn btn-primary" onclick="showDetails('${element.slug}')">Show Details</button>
          </div>
        </div>
        
        `
        phonelistDiv.appendChild(phoneDiv)
    });
    toggleSpinner(false)

}


const search = (isShowAll) =>
{
    const searchField = document.getElementById("inputField");
    const searchText = searchField.value
    toggleSpinner(true);
    load(searchText, isShowAll);
    
}

const toggleSpinner = (state) =>
{
  const spinnerState = document.getElementById("loadingSpinner");
  if(state === true)
  {
    spinnerState.classList.remove("hidden");
  }
  else
  {
    spinnerState.classList.add("hidden");
  }
}


const showAll = () =>
{ 

  const isShowAll = true;
  search(isShowAll);

}


const showDetails = async (slug) =>
{

    const res = await fetch(`https://openapi.programming-hero.com/api/phone/${slug}`)
    const data = await res.json();
    const phone = data.data;
    showDetailsModal(phone);

}

const showDetailsModal = (data) =>
{

  console.log(data)
  const name = document.getElementById("show-details-name");
  name.innerText = data.name
  const image = document.getElementById("single-phone-image");
  image.setAttribute("src",`${data.image}`)
  const body = document.getElementById("show-details-body");
  body.innerHTML= `
  <p><strong>Storage: </strong>${data?.mainFeatures?.storage}</p>
  <p><strong>Display Size: </strong>${data?.mainFeatures?.displaySize}</p>
  <p><strong>Chipset: </strong>${data?.mainFeatures?.chipSet}</p>
  <p><strong>Memory: </strong>${data?.mainFeatures?.memory}</p>
  <p><strong>Slug: </strong>${data?.slug}</p>
  <p><strong>Release Date: </strong>${data?.releaseDate}</p>
  <p><strong>Brand: </strong>${data?.brand}</p>
  <p><strong>GPS: </strong>${(data?.others?.GPS)?(data?.others?.GPS):"None"}</p>
  
  `
  show_all_modal.showModal()
}


const noDataAvailable = (state) =>
{
  const noData = document.getElementById("no-data-container");

  if(state)
  {
    noData.classList.remove("hidden")
  }
  else
  {
    noData.classList.add("hidden")
  }
}
