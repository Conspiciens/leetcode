#include <iostream> 

void two_pointers(std::string str) {
    size_t right = str.size() - 1; 
    size_t left = 0; 

    while (right > left) {

        std::swap(str[left], str[right]); 
    
        right--;
        left++; 
    } 

    std::cout << str << "\n"; 
} 


int main() {
    std::string test_string = "Hello World"; 

    // test_string = std::string(test_string.rbegin(), test_string.rend()); 

    std::cout << test_string << "\n"; 

    two_pointers(test_string); 

    return 0; 
} 
