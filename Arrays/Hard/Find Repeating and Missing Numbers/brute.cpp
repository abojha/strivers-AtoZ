#include<bits/stdc++.h>

using namespace std;
vector<int> MissingandRepeatingNumbers(vector<int> &nums){
    int len = nums.size();
    int missing = -1;
    int repeating = -1;
    vector<int> result;

    map<int, int> mpp;


    for(auto ele : nums){
        mpp[ele]++;
    }
    
    for(int i = 1; i <= len; i++){
        if(mpp[i] == 0) missing = i;
        else if(mpp[i] == 2) repeating = i;

        if(repeating != -1 && missing != -1){
            break;
        }
    }
    result = {repeating, missing};
    return result;
}

int main(){
    vector<int> arr = {3, 1, 2, 5, 4, 6, 7, 5};
    vector<int> result = MissingandRepeatingNumbers(arr);

    for(auto ele : result) cout << ele << " ";

    return 0;


}