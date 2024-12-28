#include<bits/stdc++.h>

using namespace std;

int longestConsecutiveSubsequence(vector<int> &nums){
    sort(nums.begin(), nums.end());
    int lastSmaller = nums[0];
    int cnt = 1;
    int maxLength = INT_MIN;

    for(int i = 1; i < nums.size(); i++){
        if(nums[i]-1 == lastSmaller){
            cnt++;
            lastSmaller++;
        }
        else if(nums[i] != lastSmaller){
            lastSmaller = nums[i];    
            cnt = 1;
        }
        maxLength = max(maxLength, cnt);

    }
    return maxLength;
}

int main(){
    vector<int> arr = {9, 8, 5, 7, 6, 10};

    int result;
    result = longestConsecutiveSubsequence(arr);

    // print the result
    cout << result;
    return 0;


}