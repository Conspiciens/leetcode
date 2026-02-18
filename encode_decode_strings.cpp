#include <iostream> 
#include <string>
#include <vector>

std::string encode(std::vector<std::string> &strs) {
    std::string message = ""; 
    
    for (size_t i = 0; i < strs.size(); i++) {
        for (char ch : strs[i]) {
            std::string str = std::to_string(static_cast<int>(ch)); 

            message += std::to_string(str.size());  
            message += "#"; 
            message += str; 
        } 
        message += "1#3"; 
    } 

    return message; 
} 

std::vector<std::string> decode(std::string s) {
    std::vector<std::string> ans; 
    int wordlen = 0; 
    std::string len = ""; 
    std::string ascii = ""; 
    std::string word = ""; 
    bool readlen = true; 

    for ( size_t i = 0; i < s.size(); i++ ) {
        if (readlen == true && s[i] != '#') {
            len += s[i]; 
            continue; 
        } else if (readlen == true) {
            wordlen = std::stoi(len);  
            len = ""; 
            readlen = false; 
            continue;
        }  

        if (readlen == false) {
            ascii += s[i]; 
            wordlen--; 

            if (wordlen > 0) 
                continue; 

            int ascii_num = std::stoi(ascii);  
            char letter = static_cast<char>(ascii_num); 
            
            if (letter == '\x03') {
                std::cout << word << std::endl;
                ans.push_back(word); 
                word = ""; 
            } else { 
                word += letter; 
            } 

            ascii = "";  
            readlen = true; 
        }  
    }

    return ans; 
} 

int main() {
    std::vector<std::string> test = {"The quick brown fox","jumps over the","lazy dog","01234567890","abcdefghijklmnopqrstuvwxyz"};
    std::string encode_str = encode(test); 

    std::cout << encode_str << std::endl;

    std::vector<std::string> ans = decode(encode_str); 
    for (auto str : ans) {
        std::cout << "Word: " << str << "\n" << std::endl; 
    } 
} 
