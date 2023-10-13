const loadCategories = async (type, sort = false) => {
    const res = await fetch(`https://openapi.programming-hero.com/api/videos/categories`);
    const data = await res.json();
    categories = data?.data;
    const searchCategory = categories.filter(n => n.category === type)
    load(searchCategory[0]?.category_id, sort)

}


const load = async (category, sort) => {

    const res = await fetch(`https://openapi.programming-hero.com/api/videos/category/${category}`);
    const data = await res.json();
    const video = data.data;

    document.getElementById("category-info").innerText = category

    if (sort === true) {
        video.sort((a, b) => {
            const A = parseFloat(a.others.views)
            const B = parseFloat(b.others.views)
            return B - A
        })
    }
    loadData(video);
}


const loadData = (data) => {
    const videCardContainer = document.getElementById("video-card-container");
    videCardContainer.innerHTML = ""

    if (data.length > 0) {
        videCardContainer.classList = ("grid sm:grid-cols-1 md:grid-cols-2 lg:grid-cols-4 gap-5")
        data.forEach(element => {
            const timeInSeconds = element?.others?.posted_date;

            const years = Math.floor(timeInSeconds / (60 * 60 * 24 * 365));
            const days = Math.floor((timeInSeconds % (60 * 60 * 24 * 365)) / (60 * 60 * 24));
            const hours = Math.floor((timeInSeconds % (60 * 60 * 24)) / (60 * 60));
            const minutes = Math.floor((timeInSeconds % (60 * 60)) / 60);

            console.log(`${years ? `${years}year` : ""} ${days ? `${days}days` : ""} ${hours ? `${hours}hours` : ""} ${minutes ? `${minutes}minutes` : ""} ago`);

            const div = document.createElement("div");
            div.innerHTML = `
    
            <div class="card card-compact w-auto h-80  bg-base-100 shadow-xl mt-10">
            <figure class="relative w-full h-64 bg-black flex items-center justify-center">
                <img src="${element?.thumbnail || "Not Available"}" alt="Picture" class="object-contain h-full w-full"/>
                <div class="absolute right-2 bottom-2">
                    ${element?.others?.posted_date ? `<p class="bg-black text-sm text-white px-2 py-1 rounded">${`${years ? `${years}years` : ""} ${days ? `${days}days` : ""} ${hours ? `${hours}hrs` : ""} ${minutes ? `${minutes}mins` : ""} ago`}</p>` : ""}
                      
                    
                </div>    
            </figure>
            <div class="card-body flex justify-start align-top flex-row">
                <div>
                    <img src="${element?.authors[0]?.profile_picture}" class="w-10 h-10 rounded-full" alt="Profile Image"/>
                </div>
                <div>
                    <h2 class="card-title text-lg">${element?.title || "Not Available"}</h2>
    
                    <p>
                        ${element?.authors[0]?.profile_name}
                        ${element?.authors[0]?.verified ? '<i class="fa-solid fa-circle-check" style="color: #055df5;"></i>' : ""}
    
                    </p>
    
                    <p>
                        ${element?.others?.views} views
    
                    </p>
                </div>
    
            </div>
          </div>
    
            `
            videCardContainer.appendChild(div)
        });

    }
    else {
        const div = document.createElement("div");
        div.classList = ("text-center mt-16")

        div.innerHTML = `
        <img src="assets/Icon.png" class="mx-auto"/>
        <p class="text-3xl font-bold">No Videos Found</p>
        
        `
        videCardContainer.classList = ""
        videCardContainer.appendChild(div)

    }


}

const sortByView = () => {
    const category = document.getElementById("category-info").innerText
    load(category, true)
}

loadCategories("All")