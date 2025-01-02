#include<bits/stdc++.h>

using namespace std;

vector<int> generateRows(int row){
    int ans = 1;
    vector<int> ansRow;
    ansRow.push_back(1);

    for(int col = 1; col < row; col++){
        ans = ans * (row - col);
        ans = ans / col;
        ansRow.push_back(ans);
    }

    return ansRow;

}

void pascalsTriangle(int n){
    vector<vector<int>> ans;
    for(int i = 1; i <=n; i++){
        vector<int> row = generateRows(i);
        ans.push_back(row);
    }


    for(auto ele : ans){
        for(auto e : ele){
            cout << e << " ";
        }
        cout << endl;
    }
}
int main(){
    
    int row = 4;
    pascalsTriangle(row);
    // cout << ans
    return 0;
}