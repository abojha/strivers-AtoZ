#include<bits/stdc++.h>

using namespace std;

void MergeOverlappingIntervals(vector<vector<int>> &nums){
   vector<vector<int>> ans;
   sort(nums.begin(), nums.end());
   
   for(int i = 0; i < nums.size(); i++){
        int start = nums[i][0];
        int end = nums[i][1];

        if(!ans.empty() && end <= ans.back()[1]) continue;

        for(int j = i + 1; j < nums.size(); j++){
            if(end >= nums[j][0]){
                end = max(end, nums[j][1]);
            }
            else{
                break;
            }
        }

        ans.push_back({start, end});
   }

   for(auto vec : ans){
        for(auto ele : vec){
            cout << ele << " ";
        }
        cout << endl;
   }
}

int main(){
    vector<vector<int>> nums = {{1, 3}, {2, 6}, {8, 10}, {15, 18}};
    MergeOverlappingIntervals(nums);

    return 0;


}