#include <iostream> 
#include <queue> 
#include <unordered_map> 
#include <algorithm> 
#include <utility> 

std::vector<int> TopKFrequent(std::vector<int>& nums, int k) {
    std::unordered_map<int, int> map; 

    for (size_t i = 0; i < nums.size(); i++) {
        if (map.contains(nums[i])) {
            map[nums[i]]++; 
            continue;
        } 
        map[nums[i]] = 0;
    } 

    std::vector<std::pair<int, int>> data; 
    for (const auto& [key, value] : map) {
        data.push_back(make_pair(key, value));  
    } 

    std::sort(data.begin(), data.end(), [](const std::pair<int, int> &a, const std::pair<int, int> &b) {
        return a.second > b.second;
    }); 
    

    std::vector<int> ans; 
    for (auto cur_pair : data) {
        if (k > 0) {
            ans.push_back(cur_pair.first);  
            k--; 
            continue; 
        } 
        break; 
    } 

    return ans; 
} 


/* 

 1, 1, 2, 5, 1, 5, 6 

 1, 1, 1, 2, 5, 5, 6

 [1, 2] 
 [1, 5] 
 [1, 5] 
*/ 

int main() {
    return 0; 
} 
