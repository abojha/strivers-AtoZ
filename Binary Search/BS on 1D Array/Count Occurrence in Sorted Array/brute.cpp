#include<bits/stdc++.h>

using namespace std;

int countOccurrences(vector<int> &nums, int target){
    int cnt = 0;
    for(int i = 0; i < nums.size(); i++){
        if(nums[i] == target)
            cnt++;
    }
    return cnt;
}

int main(){
    vector<int> nums = {3, 4, 13, 13, 13, 20, 40};
    int x = 13;
    int ans = countOccurrences(nums, x);

    cout << ans << endl;
}