//jafor ur done for the day

#include <iostream>

void print_pattern(int n) {
  
    for (int i = 0; i < n; i++) {
        
        for (int j = n - i - 1; j > 0; j--) {
            std::cout << " ";
        }

       
        for (int j = 0; j < 2 * i + 1; j++) {
            if (i % 2 == 0) {
                std::cout << ">";
            } else {
                std::cout << "<";
            }
        }

        std::cout << std::endl;  
    }

    for (int i = n - 2; i >= 0; i--) {
        
        for (int j = n - i - 1; j > 0; j--) {
            std::cout << " ";
        }

        for (int j = 0; j < 2 * i + 1; j++) {
            if (i % 2 == 0) {
                std::cout << ">";
            } else {
                std::cout << "<";
            }
        }

        std::cout << std::endl;  
    }
}

int main() {
    int n;
    std::cin >> n;

    print_pattern(n);

    return 0;
}
