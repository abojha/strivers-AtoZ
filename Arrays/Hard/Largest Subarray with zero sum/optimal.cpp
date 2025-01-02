#include<bits/stdc++.h>

using namespace std;

int largestSubrraywithZeroSum(vector<int> &arr, int target){
    int maxLength = INT_MIN;
    map<int, int> mpp;
    int sum;
    for(int i = 0; i < arr.size(); i++){
           sum += arr[i];

           if(sum == 0) maxLength = i + 1;

           else{
               if(mpp.find(sum) != mpp.end()){
                    maxLength = max(maxLength, i - mpp[sum]);

               } 
               else{
                    mpp[sum] = i;
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