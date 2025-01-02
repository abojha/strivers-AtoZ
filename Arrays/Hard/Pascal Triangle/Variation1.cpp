#include<bits/stdc++.h>

using namespace std;

int nCr(int n, int r){
    int result = 1;
     for(int i = 0; i < r; i++){
        result *= (n - i);
        result /= (i + 1);
    }
    return result;

}
int pascalsTriangle(int row, int col){
    int result = nCr(row-1, col-1);
    return result;
}
int main(){
    
    int row = 3;
    int col = 2;
    int ans = pascalsTriangle(row, col);
    cout << ans;

    return 0;
}