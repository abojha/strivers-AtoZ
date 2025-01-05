#include<bits/stdc++.h>

using namespace std;

int searchRotatedArray(vector<int> &nums){
    int low = 0;
    int high = nums.size() - 1;
    int result = INT_MAX;
    while(low <= high){
        int mid = (low + high) / 2;
        
        if(nums[low] <= nums[mid]){
            result = min(result, nums[low]);
            low = mid + 1;
        }
        else{
            result = min(result, nums[mid]);
            high =  mid - 1;
        }

    }
    return result;
}

int main(){
    vector<int> nums = {4, 5, 6, 7, 0, 1, 2, 3};
    int ans = searchRotatedArray(nums);

    cout << ans << endl;
}