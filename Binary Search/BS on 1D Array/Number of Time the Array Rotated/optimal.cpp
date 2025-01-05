#include<bits/stdc++.h>

using namespace std;

int rotationNumber(vector<int> &nums){
    int low = 0;
    int high = nums.size() - 1;
    int ans = INT_MAX;
    int index = -1;
    while(low <= high){
        int mid = (low + high)/2;

        if(nums[low] <= nums[mid]){
            if(ans > nums[low]){
                index = low;
                ans = nums[low];
            }
            low = mid + 1;
        }
        else{
            if(ans > nums[high]){
                index = high;
                ans = nums[high];
            }
            high = mid - 1;
        }

    }

    return index;
}

int main(){
    vector<int> nums = {4, 5, 6, 7, 0, 1, 2, 3};
    int ans = rotationNumber(nums);

    cout << ans << endl;
}