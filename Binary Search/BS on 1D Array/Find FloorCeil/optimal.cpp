#include<bits/stdc++.h>

using namespace std;

int findFloor(vector<int> &nums, int target){
    int beg = 0;
    int end = nums.size() - 1;
    int ans = -1;
    while(beg <= end){
        int mid = (beg + end)/2;

        if(nums[mid] <= target){
            ans = mid;
            beg = mid + 1;;
        }

        else{
            end = mid - 1;
        }
    }
    return ans;
}
int findCeil(vector<int> &nums, int target){
    int beg = 0;
    int end = nums.size() - 1;
    int ans = -1;
    while(beg <= end){
        int mid = (beg + end)/2;

        if(nums[mid] >= target){
            ans = mid;
            end = mid - 1;;
        }

        else{
            beg = mid + 1;
        }
    }
    return ans;
}

int main(){
    vector<int> nums = {3, 4, 4, 7, 8, 10};
    int x = 5;
    int ans1 = findFloor(nums, x);
    int ans2 = findCeil(nums, x);

    cout << ans1 << " " << ans2 << endl;
}