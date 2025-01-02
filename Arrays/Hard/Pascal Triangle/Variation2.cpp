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
int pascalsTriangle(int row){
    for(int col = 1; col <= row; col++){
        int result = nCr(row-1, col-1);
        cout << result << " ";
    }
    return 1;
}
int main(){
    
    int row = 4;
    int ans = pascalsTriangle(row);
    // cout << ans;

    return 0;
}