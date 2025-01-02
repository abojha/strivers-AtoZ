#include<bits/stdc++.h>

using namespace std;

void MergeOverlappingIntervals(vector<vector<int>> &nums){
    if(nums.empty()) return;
    sort(nums.begin(), nums.end());
    vector<vector<int>> result;
    result.push_back(nums[0]);

    for(int i = 1; i < nums.size(); i++){
        if(result.back()[1] >= nums[i][0]){
            result.back()[1] = max(result.back()[1], nums[i][1]);
        }

        else{
            result.push_back(nums[i]);
        }
    }

    for(auto vec : result){
        for(auto ele : vec){
            cout << ele <<  " ";
        }
        cout << endl;
    }
}

int main(){
    vector<vector<int>> nums = {{1, 3}, {2, 6}, {8, 10}, {15, 18}};
    MergeOverlappingIntervals(nums);

    return 0;


}