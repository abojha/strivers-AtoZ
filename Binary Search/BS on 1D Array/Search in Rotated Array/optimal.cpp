#include<bits/stdc++.h>

using namespace std;

int searchRotatedArray(vector<int> &nums, int target){
    int low = 0;
    int high = nums.size() - 1;

    while(low <= high){
        int mid = (low + high) / 2;

        if(nums[mid] == target)
            return mid;
        
        else if(nums[mid] > target){
            if(nums[mid] > nums[mid + 1])
                low = mid + 1;
            else   
                high = mid - 1;
        }

        else {
            if(nums[mid] > nums[mid + 1])
                high = mid - 1;
            else
                low  = mid + 1;
        }

    }
    return -1;
}

int main(){
    vector<int> nums = {4, 5, 6, 7, 0, 1, 2, 3};
    int x = 0;
    int ans = searchRotatedArray(nums, x);

    cout << ans << endl;
}