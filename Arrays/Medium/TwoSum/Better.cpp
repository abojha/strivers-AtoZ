#include<bits/stdc++.h>

using namespace std;

vector<int> twoSum(vector<int> &nums, int k){
    map<int, int> mpp;
    vector<int> result;

    for(int i = 0; i < nums.size(); i++){ 
            if(mpp.find(k- nums[i]) != mpp.end()){
                result.push_back(i);
                result.push_back(mpp[k- nums[i]]);
                return result;
            }
            mpp[nums[i]] = i;
        }
    result.push_back(-1);
    result.push_back(-1);
    return result;
}

int main(){
    vector<int> arr = {2, 1, 3, 4};

    int sum = 5;
    vector<int> result;
    result = twoSum(arr, sum);

    // print the result
    for(int i = 0; i < result.size(); i++){
        cout << result[i] << " ";
    }
    return 0;


}