#include<bits/stdc++.h>

using namespace std;

void setMatrixZero(vector<vector<int>> &mat){
   for(int i = 0;i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(mat[i][j] == 0){
                for(int k = 0; k < 3; k++){
                    mat[i][k] = -1;
                    mat[k][j] = -1;
                }
            }
        }
   }
   for(int i = 0;i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(mat[i][j] == -1){
                    mat[i][j] = 0;
                }
            }
        }
}


int main(){
   vector<vector<int>> mat  = {{1,1,1},{1,0,1},{1,1,1}};
    setMatrixZero(mat);

    // print the result
    for(auto row : mat){
        for(auto ele : row){
            cout << ele << " ";
        }
        cout << endl;
    }
    return 0;


}