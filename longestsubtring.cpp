#include <iostream> 

int lengthOfLongestSubstring(std::string s) {
    std::unordered_map<char, bool> map; 

    if (s.length() == 0 || s.length() == 1)
        return s.length(); 

    int right_ptr = 0; 
    int left_ptr = 0; 

    int max_win = 0; 
    while (right_ptr < s.length()) {
        char current = s[right_ptr]; 

        if (map[current]) {
            map[s[left_ptr]] = false; 
            left_ptr++; 
        } else {
            map[current] = true; 
            right_ptr++; 
            if (max_win < right_ptr - left_ptr)
                max_win = right_ptr - left_ptr;
        }
    }

    return max_win;
    
}

int main() {
    int length = lengthOfLongestSubstring("abcdabcbb");
    int sm_len = lengthOfLongestSubstring("ab");
    int what = lengthOfLongestSubstring("pwwkew");
    int what1 = lengthOfLongestSubstring("dvdf");
    std::cout << what1 << "\n"; 
    std::cout << what << "\n";

    return 0; 
}