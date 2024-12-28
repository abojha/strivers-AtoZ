#include<bits/stdc++.h>

using namespace std;

void setMatrixZero(vector<vector<int>> &mat, int n, int m){
   vector<int> row(n, 0), col(m, 0);

   for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(mat[i][j] == 0){
                row[i] = 1;
                col[j] = 1;
            }
        }
   }

   for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(row[i] == 1 || col[j] == 1){
                mat[i][j] = 0;
            }
        }
   }


}


int main(){
   vector<vector<int>> mat  = {{1,1,1},{1,0,1},{1,1,1}};
    setMatrixZero(mat, 3, 3);

    // print the result
    for(auto row : mat){
        for(auto ele : row){
            cout << ele << " ";
        }
        cout << endl;
    }
    return 0;


}