#include<bits/stdc++.h>

using namespace std;

set<vector<int>> fourSum(vector<int> &arr, int target){
    set<vector<int>> st;

    for(int i = 0; i < arr.size(); i++){
        for(int j = i + 1; j < arr.size(); j++){
            for(int k = j + 1; k < arr.size(); k++){
                for(int l = k + 1; l < arr.size(); l++){
                    if(arr[i] + arr[j] + arr[k] + arr[l] == target){
                        vector<int> temp = {arr[i], arr[j], arr[k] , arr[l]};
                        sort(temp.begin(), temp.end());
                        st.insert(temp);
                    }
                }
            }
        }
    }
    return st;
}

int main(){
    vector<int> arr = {4,3,3,4,4,2,1,2,1,1};
    int target = 9;
    set<vector<int>> st;
    st = fourSum(arr, target);

    for(auto list : st){
        for(auto ele : list){
            cout << ele << " ";
        }
        cout << endl;
    }

    return 0;


}