#include<iostream>
#include<vector>
using namespace std;

void printSpiralOrder(vector<vector<int>> &matrix){
    int m = matrix.size();
    if(m == 0) return;
    int n = matrix[0].size();

    int top = 0 , bottom = m-1;
    int left = 0, right = n-1;

    while(top<=bottom && left<=right){
        for(int i=left; i<=right; i++){
            cout<<matrix[top][i]<<" ";
        }
        top++;

        for(int i=top; i<=bottom; i++){
            cout<<matrix[i][right]<<" ";
        }
        right--;

        if(top<=bottom){
            for(int i=right; i>=left; i--){
                cout<<matrix[bottom][i]<<" ";
            }
            bottom--;
        }

        if(left<=right){
            for(int i=bottom; i>=top; i--){
                cout<<matrix[i][left]<<" ";
            }
            left++;
        }
    }
    cout<<endl;
}


int main(){
    vector<vector<int>>matrix = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    cout<<"spiral order of matrix is : "<<endl;
    printSpiralOrder(matrix);
    return 0;
}