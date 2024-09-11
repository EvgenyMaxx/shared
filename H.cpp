#include <iostream>
#include <vector>
#include <algorithm>


bool NOD (int a, int b) {
    while (a > 0 && b > 0) {
        if (a > b) {a %= b;}
        else {b %= a;}
    }

    return (a+b) == 1;
}
 
int main() {
    int t;
    std::cin >> t;

    while (t--) {
        std::vector <int> num;
        std::vector <int> ans;

        int n;
        std::cin >> n;

        int temp;
        for (int i = 0; i < n; i++) {
            std::cin >> temp;
            num.emplace_back(temp);
        }

        for (int i = 0; i < num.size(); i++) {
            for (int k = i + 1; k < num.size(); k++) {
                if (NOD(num[i], num[k]) == true) {
                    ans.emplace_back(i + k);
                }
            }
        }

        sort(ans.rbegin(), ans.rend());
        std::cout << ans[0] << std::endl;
    }
}
