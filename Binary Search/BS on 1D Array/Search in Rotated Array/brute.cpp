#include<bits/stdc++.h>

using namespace std;

int searchRotatedArray(vector<int> &nums, int x){
    for(int i = 0; i < nums.size(); i++){
        if(nums[i] == x)
            return i;
        
    }
    return -1;
}

int main(){
    vector<int> nums = {4, 5, 6, 7, 0, 1, 2, 3};
    int x = 0;
    int ans = searchRotatedArray(nums, x);

    cout << ans << endl;
}