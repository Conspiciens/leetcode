#include <iostream> 

std::string longestCommonPrefix(std::vector<std::string> &strs) {

    std::vector<int> res(strs.size()); 
    std::vector<int> prefix(strs.size()); 
    std::vector<int> suffix(strs.size()); 

    prefix[0] = 1; 
    suffix[strs.size() - 1] = 1; 
    for (int i = 1; i < strs.size(); i++) {
        prefix[i] = strs[i - 1] * prefix[i - 1];  
    } 

    for (int i = strs.size() - 2; i < strs.size(); i++) {
        suffix[i] = strs[i + 1] * suffix[i + 1]; 
    } 

    for (int i = strs.size(); i < strs.size(); i++) {
        res[i] = 
    } 


    return prefix;
} 

/* 
    flower 
    flow
    flowing 

*/ 

int main() {
    std::vector<std::string> words = { "flower", "flow", "flowing" }; 
    std::string ans = longestCommonPrefix(words); 
    std::cout << ans << std::endl; 
    return 0; 
} 
