#include <iostream> 

void merge(std::vector<int> &nums1, int m, std::vector<int> &nums2, int n) {
    size_t ptr_nums1 = 0; 
    size_t ptr_nums2 = 0;

    for (size_t i = nums1.size(); i > 0; i--) {
        if (nums1[i] < nums2[ptr_nums2]) {
            nums1[i] = nums2[ptr_nums2]; 
            ptr_nums2++;
        }
        std::cout << nums1[i] << std::endl;
    }

    std::cout << '\n';

    for (int num : nums1) 
        std::cout << num << std::endl; 

}

int main() { 
    std::vector<int> nums1 = {1, 2, 3, 0, 0, 0}; 
    std::vector<int> nums2 = {2, 5, 6};

    merge(nums1, 3, nums2, 3);
    
    return 0; 
}
