#include<bits/stdc++.h>

using namespace std;

int lowerBound(vector<int> &nums, int target){
    int beg = 0;
    int end = nums.size() - 1;
    int ans = -1;
    while(beg <= end){
        int mid = (beg + end)/2;

        if(nums[mid] >= target){
            ans = mid;
            end = mid - 1;
        }

        else{
            beg = mid + 1;
        }
    }
    return ans;
}

int main(){
    vector<int> nums = {3, 5, 8, 15, 19};
    int x = 9;
    int ans = lowerBound(nums, x);

    cout << ans << endl;
}