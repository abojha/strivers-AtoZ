#include<bits/stdc++.h>

using namespace std;

void leader(vector<int> &nums){
   int n = nums.size();
    vector<int> Leaders;
   for(int i = 0; i < n; i++){
       bool isLeader = true;
       for(int j = i+1; j < n; j++){
            if(nums[i] < nums[j]){ 
                isLeader = false;
                break;
            }
       }
       if(isLeader){
            Leaders.push_back(nums[i]);
       }

   }
   for(auto ele : Leaders) cout << ele << " ";
}

int main(){
    vector<int> arr = {4, 1, 2, 3};

   leader(arr);
    return 0;


}