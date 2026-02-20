#include <iostream> 
#include <vector>
#include <algorithm> 
#include <unordered_map>

std::vector<std::vector<int>> threeSum(std::vector<int>& nums) {
    std::vector<std::vector<int>> ans; 

    std::sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size(); i++) {
        if (i > 0 && nums[i] == nums[i -1]) 
            continue;
        
        int begin = i + 1; 
        int end = nums.size() - 1;  
        while (begin < end) {
            if (begin == i) {
                begin++;  
                continue; 
            } else if (end == i) {
                end--; 
                continue;
            }

            if ((nums[i] + nums[begin] + nums[end]) == 0) {
                std::vector<int> sol = {nums[i], nums[begin], nums[end]}; 
                ans.push_back(sol); 
                begin++; 

                while (nums[begin] == nums[begin-1] && begin < end) {
                    begin++; 
                }  
            } else if ((nums[i] + nums[begin] + nums[end]) > 0) {
                end--; 
            } else if ((nums[i] + nums[begin] + nums[end]) < 0) {
                begin++; 
            }  
        } 
    } 

    return ans; 
                

} 

int main() {
    std::vector<int> nums = {-1,0,1,2,-1,-4};
    /* Sorted: [-4, -1, -1, 0, 1, 2]  */  
    
    std::vector<std::vector<int>> ans = threeSum(nums); 

    for (auto vec : ans) {
        for (auto num : vec) {
            std::cout << num << " "; 
        } 
        std::cout << std::endl; 
    } 

} 
