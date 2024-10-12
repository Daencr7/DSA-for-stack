#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <string.h>
using namespace std;
using ll = long long;
bool brack (string s){
    stack <char> stack_brack;
    for (int i = 0; i < s.size(); i++){
        if (s[i] == '('){
            stack_brack.push(s[i]);
        }
        else {
            if (stack_brack.empty()) return false;
            stack_brack.pop();
        }
    }
    return stack_brack.empty();
}
int main(){
    cout<<brack("(())");
    //this is true bracket : ((()))()
    //this is false bracket: ())()(()
    return 0;
}