#include <iostream> 
#include <vector>
#include <utility> 

std::vector<int> productExceptSelf(std::vector<int>& nums) {

    int len_nums = nums.size(); 
    std::vector<int> prefix(len_nums); 
    std::vector<int> suffix(len_nums); 
    std::vector<int> res(len_nums); 

    prefix[0] = 1; 
    suffix[len_nums - 1] = 1; 
    for (int i = 1; i < nums.size(); i++) {
        prefix[i] = nums[i - 1] * prefix[i - 1]; 
    } 


    for (int i = n - 2; i >= 0; i--) {
        suffix[i] = nums[i + 1] * suffix[i + 1]; 
    } 


    for (int i = 0; i < len_nums; i++) {
        res[i] = prefix[i] * suffix[i]; 
    } 


    return res; 

}

/* 

1,2, 3,4

[1, 2] = 2 
[3, 4] = 12 



2 * 3 * 4 = 24
1 * 3 * 4 = 12
1 * 2 * 4 = 8
1 * 2 * 3 = 6  
24 


*/ 

int main() {
    std::vector<int> test = {1,2,3,4}; 

    std::vector<int> ans = productExceptSelf(test); 

    std::cout << ans << std::endl; 

    return 0; 
} 
