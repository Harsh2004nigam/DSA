#include<iostream>
#include <climits>
using namespace std;

int minimumProduct(int arr[],int n,int k){
    int min_product = INT_MAX;
    for(int i=0; i<=n-k; i++){
        int product = 1;    
        for(int j=i;j<i+k; j++){
            product *= arr[j];
        }
        min_product = min(product,min_product);
    }
    return min_product;
}

int main(){
    int arr[] = {11,8,5,7,5,100};
    int n = sizeof(arr)/sizeof(int);
    int k=4;

    int min = minimumProduct(arr,n,k);
    cout<<"minimum product : "<<min;

    return 0;
}