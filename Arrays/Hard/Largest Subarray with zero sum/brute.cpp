#include<bits/stdc++.h>

using namespace std;

int largestSubrraywithZeroSum(vector<int> &arr, int target){
    int maxLength = INT_MIN;

    for(int i = 0; i < arr.size(); i++){
        for(int j = i+1; j < arr.size(); j++){
            int sum = 0;
            int cnt = 0;
            for(int k = i; k <= j; k++){
                sum += arr[k];
                cnt++;
                if(sum == target){
                    maxLength = max(maxLength, cnt);
                }
            }
        }
    }
    return maxLength;
}

int main(){
    vector<int> arr = {9, -3, 3, -1, 6, -5};
    int target = 0;

    int ans = largestSubrraywithZeroSum(arr, target);
    cout << ans << endl;

    return 0;


}