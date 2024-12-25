#include<bits/stdc++.h>

using namespace std;

void allPermutation(int index, vector<int> &arr, vector<vector<int>> &ans){
   if(index == arr.size()){
        vector<int> temp = arr;
        ans.push_back(temp);
        return;
   }

   for(int i = index; i < arr.size(); i++){
        swap(arr[i], arr[index]);
        allPermutation(index + 1, arr, ans);
        swap(arr[i], arr[index]);
   }
}

void nextPermutation(vector<int> &arr, vector<vector<int>> &ans){
    auto it = find(ans.begin(), ans.end(), arr);
    if(it != ans.end() && it+1 != ans.end()){
        auto next_it = it + 1;
        for(auto ele : *next_it){
            cout << ele << " ";
        }
    }
    else{
        for(auto ele : ans.front()){
            cout << ele << " ";
        }
    }

}

int main(){
    vector<int> arr = {1, 2, 3};
    // vector<int> arr = {1};
    vector<vector<int>> ans;
    allPermutation(0, arr, ans);
    sort(ans.begin(), ans.end());


    nextPermutation(arr, ans);
    // for(auto ar : ans){
    //     for(auto ele : ar){
    //         cout << ele << " ";
    //     }
    //     cout << endl;
    // }




    // print the result
    // for(auto ele : arr) cout << ele << " ";
    return 0;


}