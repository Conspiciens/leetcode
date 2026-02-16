#include <iostream> 
#include <unordered_map> 


int longest_consecutive(std::vector<int> &nums) {
    std::vector<int> nums;
    std::unordered_map<int, vector<int>> consecutive_nums; 
    std::unordered_map<int, bool> freq; 

    for (int i = 0; i < nums.size(); i++) {
        freq[nums[i]] = true; 

        if (freq[nums[i] - 1] == true) 
            freq
    } 

} 

/* 

2 
20 
4 
10 
3 

*/ 

int main() {
    std::vector<int> nums = {2,20,4,10,3,4,5}; 

    int num = longest_consecutive(nums); 

    std::cout << "Answer: " << num << std::endl;
    return 0; 
} 
