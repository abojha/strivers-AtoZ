#include<bits/stdc++.h>

using namespace std;

vector<int> majorityElementNby3(vector<int> &arr){
    vector<int> ls;
    int n = arr.size();
    for(int i = 0; i < arr.size(); i++){
        int cnt = 0;
        if(ls.size() ==  0 || ls[0] != arr[i]){
            for(int j = 0; j < arr.size(); j++){
                if(arr[i] == arr[j]){
                    cnt++;
                }
            }
            if(cnt > n/3) ls.push_back(arr[i]);
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