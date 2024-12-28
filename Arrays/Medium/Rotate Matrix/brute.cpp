#include<bits/stdc++.h>

using namespace std;

void rotateMatrix(vector<vector<int>> &mat, int n, int m){
    vector<vector<int>> dummy(m, vector<int>(n, 0));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            dummy[j][n-i-1] = mat[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << dummy[i][j] << " ";
        }
        cout << endl;
    }
}


int main(){
   vector<vector<int>> mat  = {{1, 2, 3},{4, 5, 6},{7, 8, 9}};
    rotateMatrix(mat, 3, 3);
    return 0;


}