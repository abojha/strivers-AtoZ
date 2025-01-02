#include<bits/stdc++.h>

using namespace std;

vector<int> majorityElementNby3(vector<int> &arr){
    vector<int> ls;
    int cnt1 = 0, cnt2 = 0, ele1 = INT_MIN, ele2 = INT_MIN;

    for(int i = 0; i < arr.size(); i++){
        if(cnt1 == 0 && ele2 != arr[i]){
            ele1 = arr[i];
            cnt1 = 1;
        }
        else if(cnt2 == 0 && ele1 != arr[i]){
            ele2 = arr[i];
            cnt2 = 1;
        }
        else if(arr[i] == ele1) cnt1++;
        else if(arr[i] == ele2) cnt2++;
        else{
            cnt1--;
            cnt2--;
        
        }
    }
    ls.push_back(ele1);
    ls.push_back(ele2);
    return ls;
}

int main(){
    vector<int> arr = {11, 33, 33, 11, 33, 11};
    vector<int> ans;
    ans = majorityElementNby3(arr);

    for(auto ele : ans) cout << ele << " ";

    return 0;


}