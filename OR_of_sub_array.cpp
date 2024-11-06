
#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

int subarrayOr(vector<int>&arr){
    int n = arr.size();
    unordered_set<int>all_or;
    for(int i=0; i<n; i++){
        int current_or = 0;
        for(int j=i; j<n; j++){
            current_or |= arr[j];
        }
        all_or.insert(current_or);
    }
    int final_or = 0;
    for(int x : all_or){
        final_or |= x;  
    }
    return final_or;
}

int main(){
    vector<int> arr = {10, 100, 1000};
    cout<<"OR's : "<<subarrayOr(arr)<<endl;
    return 0;
}