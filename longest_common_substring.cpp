#include<iostream>
#include<string>
using namespace std;

int longestSubString(string &str1,string &str2){
    int len1 = str1.length(),len2 =  str2.length();
    int i=0,j=0,count=0;

    while(len1>i && len2>j){
        if(str1[i] == str2[j]){
            i++,j++;
            count++;
        }
        else if(str1[i] != str2[j]){
            i++;
        }
    }
    return count;
}

int main(){

    string text1 = "abc";
    string text2 = "def";

    int count = longestSubString(text1,text2);
    cout<<"Longest common substring : "<<count; 
}