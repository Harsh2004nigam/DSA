#include<iostream>
#include<climits>
using namespace std;

void maxElSubArray(int arr[],int len,int k){
    for(int i=0; i<=len-k; i++){
        int max = INT_MIN;
        for(int j=i; j<i+k; j++){
            if(max<arr[j]) max = arr[j];
        }
        cout<<max<<" ";
    }
}   
int main(){
    int arr[] = {8,5,10,7,9,4,15,12,90,13};
    int k,len;
    len = sizeof(arr)/sizeof(int);
    cout<<"Enter the value of k : ";
    cin>>k;

    if (k > len || k <= 0) {
        cout << "Invalid value of k." << endl;
        return 1;
    }
    // cout<<*max_element(arr,arr+len);
    maxElSubArray(arr,len,k);    
    return 0;
}