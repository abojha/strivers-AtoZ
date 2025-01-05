#include<bits/stdc++.h>

using namespace std;

int lastOccurrence(vector<int> &nums, int target){
    int n = nums.size();

    for(int i = n - 1; i >= 0; i--){
        if(nums[i] == target)
            return i;
    }
    return -1;
}


int main(){
    vector<int> nums = {3, 4, 13, 13, 13, 20, 40};
    int x = 13;
    int ans = lastOccurrence(nums, x);
    cout << ans <<  endl;
}