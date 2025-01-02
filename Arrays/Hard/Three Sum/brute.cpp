#include<bits/stdc++.h>

using namespace std;

set<vector<int>> threeSum(vector<int> &arr){
    set<vector<int>> st;

    for(int i = 0; i < arr.size(); i++){
        for(int j = i + 1; j < arr.size(); j++){
            for(int k = j + 1; k < arr.size(); k++){
                if(arr[i] + arr[j] + arr[k] == 0){
                    vector<int> temp = {arr[i], arr[j], arr[k]};
                    sort(temp.begin(), temp.end());
                    st.insert(temp);
                }
            }
        }
    }
    return st;
}

int main(){
    vector<int> arr = {-1, 0, 1, 2, -1, -4};
    set<vector<int>> st;
    st = threeSum(arr);

    for(auto list : st){
        for(auto ele : list){
            cout << ele << " ";
        }
        cout << endl;
    }

    return 0;


}