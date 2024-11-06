#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;

bool formPalindrome(string str){
    unordered_map<char,int>freq;

    for(char c : str){
        freq[c]++;
    }
    int oddCount=0;
    for(auto &entry : freq){
        if(entry.second % 2 != 0) oddCount++;
    }

    return oddCount<=1;
}

int main(){
    string str;
    cin>>str;
    if(formPalindrome(str)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO";
    }
    return 0;
}