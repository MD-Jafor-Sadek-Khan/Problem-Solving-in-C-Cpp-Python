#include<iostream>
#include<vector>

int middleBlockFinder(std::vector<int>& ref_tunnelNumberArray, int numTunnel )
{
    int totalSum = 0;
    int leftValue= 0;
    
    //Calculate the total sum of all the blocks
    for(int i= 0; i<numTunnel; i++)
    {
        totalSum += ref_tunnelNumberArray[i];
        
    }

    for(int i= 0; i<numTunnel; i++)
    {
        totalSum-= ref_tunnelNumberArray[i];
    //Compare then Calculate the leftValue before substracting it from totalSum
    if(totalSum==leftValue)
    {
        return i;
    }
    
    leftValue += ref_tunnelNumberArray[i];
    
    }
    
    return -1;
}



int main()
{
    //Taking input of the test cases
    int numTestCases;
    std::cin>>numTestCases;
    for(int i=0; i<numTestCases; i++)
    {
        //Taking the input of the number of Tunnels
        int numTunnels;
        std::cin>>numTunnels;
        
        //Taking Tunnels array inside vector as input
        std::vector<int>tunnelNumbersarray(numTunnels);
        
        for(int i=0; i<numTunnels; i++)
        {
            std::cin>>tunnelNumbersarray[i];
        }
        
        // Calling function to calculate the middle position
        int middleBlock=middleBlockFinder(tunnelNumbersarray , numTunnels);
        std::cout<<middleBlock<<std::endl;
    }
}