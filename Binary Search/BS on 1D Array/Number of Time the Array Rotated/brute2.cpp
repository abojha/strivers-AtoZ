#include<bits/stdc++.h>

using namespace std;

int rotationNumber(vector<int> &nums){
    int ans = INT_MAX;
    int index = -1;
    for(int i = 0; i < nums.size(); i++){
        if(nums[i] < ans){
            ans = nums[i];
            index = i;
        }
    }
    return index;
}

int main(){
    vector<int> nums = {4, 5, 6, 7, 0, 1, 2, 3};
    int ans = rotationNumber(nums);

    cout << ans << endl;
}