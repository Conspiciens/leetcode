#include <iostream> 
#include <vector>
#include <string> 
#include <algorithm> 
#include <unordered_map> 

std::vector<std::vector<std::string>> groupAnagrams(std::vector<std::string>& strs) {
    std::unordered_map<std::string, std::vector<std::string>> map; 
    std::vector<std::vector<std::string>> anagrams; 
    
    if (strs.empty()) 
        return anagrams;  

    for (size_t i = 0; i < strs.size(); i++) {
        std::string sort_str = strs[i];
        std::sort(sort_str.begin(), sort_str.end()); 
        map[sort_str].push_back(strs[i]); 
    } 

    for (auto &[key, val] : map) {
        anagrams.push_back(val); 
    }  

    return anagrams; 

} 

int main() {
    std::vector<std::string> test = {"act","pots","tops","cat","stop","hat"}; 
    
    std::vector<std::vector<std::string>> answer = groupAnagrams(test); 

    for (size_t i = 0; i < answer.size(); i++) {
        for (size_t j = 0; j < answer[i].size(); j++) {
            std::cout << answer[i][j] << " "; 
        } 
        std::cout << std::endl; 
    } 
} 
