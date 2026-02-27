#include <iostream> 
#include <vector> 

int maxProfit(std::vector<int>& profit) {
    int profit = 0; 
    int buy = profit[0]; 

    for (auto price : prices) {
        profit = max(profit, buy - price); 
        buy = min(price, buy); 
    } 
   
    return profit; 
} 

