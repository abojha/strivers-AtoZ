#include<bits/stdc++.h>

using namespace std;

void setMatrixZero(vector<vector<int>> &mat, int n, int m){
    int col_0;
   for(int i = 0; i < n; i++){
        for(int j = 0; j < m ; j++){
            if(mat[i][j] == 0){
                mat[i][0] = 0;
                if(j == 0) col_0 = 0;
                else mat[0][j] = 0;
            }
        }
   }

   for(int i = 1; i < n; i++){
        for(int j = 1; j < m; j++){
            if(mat[i][0] == 0 || mat[0][j]==0)
                mat[i][j] = 0;
        }
   }

   if(mat[0][0]==0){
        for(int j = 0; j < m; j++){
            mat[0][j] == 0;
        }
   }

   if(col_0 == 0){
    for(int j = 0; j < n; j++){
            mat[j][0] == 0;
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