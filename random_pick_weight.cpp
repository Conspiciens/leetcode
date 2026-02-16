#include <iostream> 
#include <vector> 
#include <random> 

class RandomIndex {
    public: 
        std::vector<int> vec;         

        RandomIndex(std::vector<int>& w) : vec(w) {}  
        int pickIndex() {} 
} 

int RandomIndex::pickIndex() {} 

int main() {
    int w = [1, 3]; 
    RandomIndex *sol = new RandomIndex(w); 
    sol->pickIndex(); 
    return 0; 
} 
