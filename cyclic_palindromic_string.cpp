#include<iostream>
#include<string>
using namespace std;

bool isPalindrome(string s){
    int l = 0; 
    int r = s.length()-1;
    while(l<r){
        if(s[l]!=s[r]) return false;
            l++;
            r--;
    }
    return true;
}

int minShiftToPalindrome(string s){
    int n=s.length();
    if(isPalindrome(s)) return 0;
    string original = s;
    for(int i=1; i<n; i++){
        s = s[n-1] + s.substr(0,n-1);
        if(isPalindrome(s)) return i;
    }
    return -1;
}

int main(){
    string s;
    cout<<"Enter the string : ";
    cin>>s;
    cout<<"Minimum shift to palindrome : "<<minShiftToPalindrome(s)<<endl;
    return 0;
}


// #include <iostream>
// #include <string>
// using namespace std;

// bool isPalindrome(string s) {
//     int l = 0;
//     int r = s.length() - 1;
//     while (l < r) {
//         if (s[l] != s[r])
//             return false;
//         l++;
//         r--;
//     }
//     return true;
// }

// int minShiftsToPalindrome(string s) {
//     int n = s.length();
//     if (isPalindrome(s)) return 0;
//     string original = s;
//     for (int i = 1; i < n; i++) {
//         // Rotate the string to the right
//         s = s[n-1] + s.substr(0, n-1);
//         if (isPalindrome(s)) return i;
//     }
//     return -1;
// }

// int main() {
//     int T;
//     cin >> T;
//     while (T--) {
//         string s;
//         cin >> s;
//         cout << minShiftsToPalindrome(s) << endl;
//     }
//     return 0;
// }
