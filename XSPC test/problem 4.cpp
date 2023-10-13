 // jafor u idiot!!! focus!!! time has to be shorter. trying a serise formula
#include <iostream>

int main() {
    int T;
    std::cin >> T; 

    for (int i = 0; i < T; ++i) {
        int L, R;
        std::cin >> L >> R;  
        
        long long sum_of_range=0;
        int n=0;
        float temp=0;
        if (R > L) {
             n = (R - L) + 1;  
             temp=(float)n/2;
            sum_of_range = temp * (L + R);   
        }
        else
        {
             n = (L - R) + 1;  
             temp=(float)n/2;
            sum_of_range = temp * (L + R);
        }
        
          
        
        std::cout << sum_of_range << std::endl;
    }

    return 0;
}