#include<bits/stdc++.h>

using namespace std;

int singleElement(vector<int> &nums){
    int ans = nums[0];
    for(int i = 1; i < nums.size(); i++){
        ans ^= nums[i];
    }

    return ans;
}

int main(){
    vector<int> nums = {1, 1, 2, 2, 3, 4, 4, 5, 5};
    int ans = singleElement(nums);

    cout << ans << endl;
}