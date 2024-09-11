#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
 
 
int main () {
 
    int t;
    std::cin >> t;
 
    while (t--) {
        int n;
        std::cin >> n;
 
        std::vector<int> a;
 
        int odd = 0, even = 0;
        int temp;
        for (int i = 0; i < n; i++) {
            std::cin >> temp;
            a.emplace_back(temp);
 
            if(i % 2 == 0) {
                if (temp % 2 != 0) {even++;}
            } else {
                if(temp % 2 == 0) {odd++;}
            }
        }
 
        if (even != odd) {std::cout << -1 <<std::endl;}
        else {std::cout << odd << std::endl;}
    }
    
 
    return 0;
}
