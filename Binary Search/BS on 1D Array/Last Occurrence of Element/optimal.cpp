#include<bits/stdc++.h>

using namespace std;

int lastOccurrence(vector<int> &nums, int target){
    int beg = 0;
    int end = nums.size() - 1;
    int ans = -1;
    while(beg <= end){
        int mid = (beg + end)/2;
        if(nums[mid] > target)
            end = mid - 1;
        else if(nums[mid] < target)
            beg = mid + 1;
        else
            ans = mid;
            beg = mid;
    }
    return ans;
}

int main(){
    vector<int> nums = {3, 4, 13, 13, 13, 20, 40};
    int x = 13;
    int ans = lastOccurrence(nums, x);

    cout << ans << endl;
}