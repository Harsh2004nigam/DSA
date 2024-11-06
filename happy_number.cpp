#include<iostream>
#include<unordered_set>
using namespace std;

int sumOfSquare(int n){
    int sum = 0;
    while(n>0){
        int digit = n%10;
        sum += digit*digit;
        n = n/10;
    }
    return sum;
}


bool happyNumber(int n){
    unordered_set<int>seen;
    while(n!=1 && seen.find(n) == seen.end()){
        seen.insert(n);
        n = sumOfSquare(n);
    }
    return n == 1;
}

int main(){
    int n;
    cout<<"enter the number : ";
    cin>>n;

    if(happyNumber(n))  cout<<"It's Happy number "<<endl;
    else cout<<"It's not a happy number"<<endl;
    return 0;
}