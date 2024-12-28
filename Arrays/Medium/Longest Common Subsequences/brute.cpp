#include<bits/stdc++.h>

using namespace std;

int longestConsecutiveSubsequence(vector<int> &nums){
    int maxLength = INT_MIN;
    int i = 0;
    for(int i = 0; i < nums.size(); i++){
        int x = nums[i];
        int currentlength = 1;

        while(find(nums.begin(), nums.end(), x + 1) != nums.end()){
            x++;
            currentlength++;
        }
        maxLength = max(maxLength, currentlength);
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