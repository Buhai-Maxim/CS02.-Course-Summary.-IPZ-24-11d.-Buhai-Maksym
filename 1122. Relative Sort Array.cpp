#include <vector>
#include <map>

class Solution {
public:
    std::vector<int> relativeSortArray(std::vector<int>& arr1, std::vector<int>& arr2) {
        int count[1001] = {0};
        for (int x : arr1) {
            count[x]++;
        }

        std::vector<int> result;
        
        for (int x : arr2) {
            while (count[x] > 0) {
                result.push_back(x);
                count[x]--;
            }
        }

        
        for (int i = 0; i <= 1000; i++) {
            while (count[i] > 0) {
                result.push_back(i);
                count[i]--;
            }
        }

        return result;
    }
};