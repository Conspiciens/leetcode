#include <iostream>
#include <unordered_map> 
#include <algorithm> 

bool containsDuplicate(vector<int>& nums) {
    unordered_set<int> map; 
    for (int num : nums) {
        if (map.count(num) > 0) {
            return true; 
        } 
        map.insert(num); 
    } 

    return false; 
} 

bool containsDuplicate(vector<int>& nums) {
    unordered_set<int> map; 
    for (int num : nums) {
        if (map.count(num) > 0) {
            return true; 
        } 
        map.insert(num); 
    } 

    return false; 
} 

int main() {
    return 0; 
} 
