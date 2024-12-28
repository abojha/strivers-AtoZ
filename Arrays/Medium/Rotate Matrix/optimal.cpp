#include<bits/stdc++.h>

using namespace std;

void rotateMatrix(vector<vector<int>> &mat, int n, int m){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i; j++){
            swap(mat[i][j], mat[j][i]);
        }
    }

    for(int i = 0; i < n; i++){
        reverse(mat[i].begin(), mat[i].end());
    }

    for(auto row : mat){
        for(auto el : row){
            cout << el << " ";
        }
        cout << endl;
    }
}


int main(){
   vector<vector<int>> mat  = {{1, 2, 3},{4, 5, 6},{7, 8, 9}};
    rotateMatrix(mat, 3, 3);
    return 0;


}