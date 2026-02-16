
string removeStars(string s){
    vector<int> currentStack; 

    for (int i = 0; i < s.size(); i++){
        if (s[i] == "*"){
            currentStack.pop_back()
            currentStack.pop_back()
        }
        currentStack.push_back(s[i])
    }
}

int main(){
    removeStars("what"); 
}