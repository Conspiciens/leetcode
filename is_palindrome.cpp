#include <iostream> 


bool is_palindrome(std::string s) {
    int begin = 0; 
    int end = s.size() - 1;
    bool is_palin = true; 

    while (begin <= end) {
        if (!isalpha(s[begin]) && !isdigit(s[begin])) {
            begin++; 
            continue; 
        } 
        if (!isalpha(s[end]) && !isdigit(s[end])) {
            end--; 
            continue; 
        } 
        
        if (std::tolower(s[begin]) != std::tolower(s[end])) { 
            is_palin = false; 
            break; 
        } 

        begin++; 
        end--; 
    }     

    return is_palin; 
} 



int main() {
     std::string s = "Was it a car or a cat I saw?";

     bool ans = is_palindrome(s); 
     std::cout << ans << std::endl; 
} 
