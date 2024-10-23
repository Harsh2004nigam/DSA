#include<iostream>
#include<string>
using namespace std;

bool checkBracket(string s){
    int bracket = 0;
    for(int i=0; i<s.size(); i++){
        if(s[i] == '(') bracket++;
        else if(s[i] == ')') bracket--;

        if(bracket<0) return false;
    }
   return (bracket == 0);
}

int main(){
    string s = "(())";
    bool check = checkBracket(s);
    if(check) cout<<"True";
    else cout<<"False";
    return 0;
}