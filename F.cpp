#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
 
 
int main () {
 
    int t;
    std::cin >> t;
 
    while (t--) {
        std::vector<int> a;
        std::vector<int> b;
        std::vector<int> ans;
 
        int n, m;
        std::cin >> n >> m;
 
        int temp;
 
 
        for (int i = 0; i < n; i++) {
            std::cin >> temp;
            a.emplace_back(temp);
        }
 
        for (int i = 0; i < m; i++) {
            std::cin >> temp;
            b.emplace_back(temp);
        }
 
        for (auto valueToFind : a) {
            for(auto tmp : b) {
                if (tmp == valueToFind && ans.empty()) {
                    ans.emplace_back(tmp);
                    break;
                }
            }
        }
 
        if (ans.empty() == 1) {
            std::cout << "NO" << std::endl;
        } else {
            std::cout << "YES" << std::endl;
 
            std::cout << ans.size() << " ";
            for(auto kf : ans) {
                std::cout << kf << " ";
            }
        }
        
    }
    
 
    return 0;
}
