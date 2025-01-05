#include<bits/stdc++.h>

using namespace std;

int rotationNumber(vector<int> &nums){
    int cnt=0;
    for(int i = 0; i < nums.size(); i++){
        if(nums[i] > nums[(i + 1)%nums.size()]){
            return i + 1;
        }
    }
    return cnt;
}

int main(){
    vector<int> nums = {4, 5, 6, 7, 0, 1, 2, 3};
    int ans = rotationNumber(nums);

    cout << ans << endl;
}