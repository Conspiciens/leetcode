#include <iostream> 
#include <stack> 

class MinStack {
    private: 
        std::stack<int> minStack; 
        std::stack<int> stack; 
        int min; 

    public: 
        MinStack(); 
        void push(int val); 
        void pop(); 
        int top(); 
        int getMin(); 
} 

MinStack::MinStack() {
} 

void push(int val) {
    stack.push(val); 

    if (minStack.size() <= 0) {
        minStack.push(val); 
    } else {
        int prevVal = minStack.top(); 
        if (prevVal > val) {
            minStack.push(val); 
        } else {
            minStack.push(prevVal); 
        } 
    }  
} 

void pop() {
    stack.pop(); 
    minStack.pop();  
} 

int top() {
    return stack.top(); 
} 

int getMin() {
    return minStack.top(); 
} 

int main() {

} 
