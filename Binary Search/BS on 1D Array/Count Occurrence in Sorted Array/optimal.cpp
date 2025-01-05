#include<bits/stdc++.h>

using namespace std;

int firstOccurrence(vector<int> &nums, int target){
    int low = 0;
    int ans = -1;
    int high = nums.size() - 1;

    while (low <= high){
        int mid = (low + high) / 2;

        if(nums[mid] == target){
            ans = low;
            high = mid - 1;
        }
        else if(nums[mid] > target){
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    return ans;
}
int lastOccurrence(vector<int> &nums, int target){
    int low = 0;
    int ans = -1;
    int high = nums.size() - 1;

    while (low <= high){
        int mid = (low + high) / 2;

        if(nums[mid] == target){
            ans = low;
            low = mid + 1;
        }
        else if(nums[mid] > target){
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    return ans;
}

int main(){
    vector<int> nums = {3, 4, 13, 13, 13, 20, 40};
    int x = 13;
    int first = firstOccurrence(nums, x);
    int last = lastOccurrence(nums, x);

    cout << first << endl;
    cout << last << endl;

    cout << "Number of occurrences " << (last - first + 1) << endl;
}