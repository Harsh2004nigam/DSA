#include<iostream>
#include<vector>
using namespace std;

int countCombination(vector<int>&coins,int n,int sum){
    //base case
    if(sum == 0) return 1;
    if(sum<0) return 0;
    if(n==0 && sum>0) return 0;


    return countCombination(coins,n,sum - coins[n-1]) + countCombination(coins,n-1,sum);
}

int main(){
    int sum = 5;
    vector<int>coins = {1,2,3};

    int way = countCombination(coins,coins.size(),sum);
    cout<<"the combination in the way : "<<way;
    return 0;
}