#include<bits/stdc++.h>

using namespace std;

vector<int> majorityElementNby3(vector<int> &arr){
    int n = arr.size();
    vector<int> ls;

    map<int, int> mpp;

    for(int i = 0; i < arr.size(); i++){
        mpp[arr[i]]++;

        if(mpp[arr[i]] > n/3){
            ls.push_back(arr[i]);
        }
        if(ls.size() == 2) break;
    }


    return ls;
}

int main(){
    vector<int> arr = {11, 33, 33, 11, 33, 11};
    vector<int> ans;
    ans = majorityElementNby3(arr);

    for(auto ele : ans) cout << ele << " ";

    return 0;


}