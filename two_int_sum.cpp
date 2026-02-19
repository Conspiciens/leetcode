#include <iostream> 

std::vector<int> twoSum(std::vector<int>& nums, int target) {

    int end = nums.size() - 1; 
    int begin = 0; 

    while (begin <= end) {
        if (nums[begin] + nums[end] == target) {
            int num1 = nums[begin]; 
            int num2 = nums[end]; 

            nums.clear();
            nums.push_back(num1); 
            nums.push_back(num2); 
            break; 
        } else if (nums[begin] + nums[end] > target) {
            end--; 
        } else if (nums[begin] + nums[end] < target) {
            begin++; 
        }  
    } 

    return nums; 
} 

/* 

[1, 2, 3, 4] 

 1 + 3 = 4 
 1 + 2 = 3 

*/ 

int main() {
    std::vector<int> test = {-1, 1, 3, 4, 5}; 
    int target = 3; 

    std::vector<int> ans = twoSum(test, target); 
    for (auto num : ans) {
        std::cout << num << " " << std::endl; 
    } 
} 
