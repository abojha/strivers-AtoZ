#include<bits/stdc++.h>

using namespace std;

int singleElement(vector<int> &nums){
    for(int i = 0; i < nums.size(); i++){
        if(i == 0){
            if(nums[i] != nums[i + 1])
                return nums[i];
        }

        if(i == nums.size() - 1){
            if(nums[i-1] != nums[i])
                return nums[i];
        }
        if(nums[i-1] != nums[i] && nums[i] != nums[i + 1])
            return nums[i];
        
    }
    return -1;

}

int main(){
    vector<int> nums = {1, 1, 1, 2, 2, 2, 3, 4, 4, 5, 5, 5};
    int ans = singleElement(nums);

    cout << ans << endl;
}