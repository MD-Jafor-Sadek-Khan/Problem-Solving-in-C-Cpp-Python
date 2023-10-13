#include<bits/stdc++.h>

using namespace std;

class cuboid{
private:



public:
    int length,width,height;
    int getVol()
    {
        return length*width*height;

    }

    int getSurfaceArea()
    {
         return 2*length*width+2*length*height+2*height*width;
    }

    cuboid()
    {
        length=0;
        width=0;
        height=0;
    }

    cuboid(int length,int height,int width)
    {
        this->length=length;
        this->width=width;
        this->height=height;
    }

    void getinfo(int i)
    {
        cout<<"object "<<i<<" = "<<length<<" "<<height<<" "<<width<<" "<<endl;
    }

    bool operator < (cuboid s)
    {
        return getSurfaceArea() < s.getSurfaceArea();
    }


};

  bool comp(cuboid s, cuboid b)
    {
        return b.getVol() > s.getVol();
    }

int main()
{
    cuboid l (2, 2, 2);

    l.getVol();

    vector<cuboid> k;

    for(int i=0;i<5;i++)
    {
        k.push_back(cuboid(2+i,3-i,8+i));
    }




    sort(k.begin(),k.end(),comp);

     for(int i=0;i<k.size();i++)
    {
        cout<<endl<<"Volume ";
        cout<<k[i].getVol();
        cout<<endl;
        k[i].getinfo(i);

    }


    sort(k.begin(),k.end());
    cout<<endl;
    for(int i=0;i<k.size();i++)
    {
        cout<<"surface area "<<k[i].getSurfaceArea()<<endl;

        k[i].getinfo(i);
        cout<<endl;
    }

}
