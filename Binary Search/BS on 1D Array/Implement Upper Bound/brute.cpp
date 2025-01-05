#include<bits/stdc++.h>

using namespace std;

int lowerBound(vector<int> &nums, int x){
    for(int i = 0; i < nums.size(); i++){
        if(nums[i] > x)
            return i;
        
    }
    return -1;
}

int main(){
    vector<int> nums = {3, 5, 8, 15, 19};
    int x = 9;
    int ans = lowerBound(nums, x);

    cout << ans << endl;
}