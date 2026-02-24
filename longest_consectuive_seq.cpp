#include <iostream> 
#include <vector>
#include <limits>


int longestCon(std::vector<int>& nums) {
    std::unordered_map<int, int> map; 
    int result = 0; 


    for (auto num : nums) {
        if (!map[num]) {
            map[num] = map[num - 1] + map[num + 1]  + 1; 
            map[num - map[num - 1]] = map[num];  
            map[num + map[num - 1]] = map[num]; 

            result = max(result, map[num]); 
        } 
    } 
    
   return result;  
} 

