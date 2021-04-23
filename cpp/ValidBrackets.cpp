//
// Created by 29443 on 2021/4/23.
//

#include <iostream>
#include <string>
#include <stack>


using namespace std;

bool isValid(string s) {
    int n = s.size();
    if (n=0 || n % 2 == 1) {
        return false;
    }
    stack<char> cStacks;
    for(char c:s){
        if(!cStacks.empty()){
            char top = cStacks.top();
            if((top == '(' && c == ')')||
                (top == '[' && c == ']')||
                (top == '{' && c == '}')){
                cStacks.pop();
                continue;
            }
        }
        cStacks.push(c);
    }
    return cStacks.empty();

}


int main(){
    cout <<isValid("}{][)(");
    cout <<isValid("(}{)");
    cout <<isValid("({)}");
    cout <<isValid("({[]})");
}
