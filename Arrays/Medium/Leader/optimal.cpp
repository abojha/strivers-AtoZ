#include<bits/stdc++.h>

using namespace std;

void leader(vector<int> &nums){
   int n = nums.size();

    int greatestSoFar = INT_MIN;
   for(int i = n-1; i >= 0; i--){
        if(greatestSoFar < nums[i]){
            cout << nums[i] << " ";
            greatestSoFar = nums[i];
        }
        
   }
}

int main(){
    vector<int> arr = {4, 1, 2, 3};

   leader(arr);
    return 0;


}