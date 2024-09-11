#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
 
std::vector<int> ans;
 
int main () {
    int n;
    std::cin >> n;
 
    std::string name_1, name_2;
    std::cin >> name_1;
 
    if (n == 1) {std::cout << name_1 <<std::endl;}
    else {
        int c_1 = 1, c_2 = 0;
 
        std::string temp;
        for (int i = 0; i < n - 1; i++) {
            std::cin >> temp;
 
            if (temp == name_1) {c_1++;}
            else {
                name_2 = temp; 
                c_2++;
            }
        }
 
        if (c_1 > c_2) {std::cout << name_1 <<std::endl;}
        else {std::cout << name_2 << std::endl;}
    }
 
 
    return 0;
}
