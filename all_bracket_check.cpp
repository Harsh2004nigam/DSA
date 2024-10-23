#include<iostream>
#include<string>
using namespace std;

bool checkBracket(string s){
    int b1=0, b2=0, b3=0;
    for(int i=0; i<s.size(); i++){
             if(s[i] == '(') b1++;
        else if(s[i] == ')') b1--;
        else if(s[i] == '{') b2++;
        else if(s[i] == '}') b2--;
        else if(s[i] == '[') b3++;
        else if(s[i] == ']') b3--;

        if(b1<0 ||b2<0 ||b3<0) return false;
    }
    return (b1 == 0 && b2 == 0 && b3 == 0);
}

int main(){
    string s = "{}{}";
    bool check = checkBracket(s);
    if(check) cout<<"True";
    else cout<<"False";
    return 0;
}