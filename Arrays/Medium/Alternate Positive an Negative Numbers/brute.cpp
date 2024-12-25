#include<bits/stdc++.h>

using namespace std;

void alternatePositiveNegative(vector<int> &arr){
    vector<int> positives, negatives;
    int n = arr.size();
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] > 0) positives.push_back(arr[i]);
        else negatives.push_back(arr[i]);
    }
    
    for(int i = 0; i < n/2; i++){
        arr[2 * i] = positives[i];
        arr[2*i + 1] = negatives[i];
    }
}

int main(){
    vector<int> arr = {-2,1,-3,4,-1,2,1,-5,4};
    // vector<int> arr = {1};

    alternatePositiveNegative(arr);

    // print the result
    for(auto ele : arr) cout << ele << " ";
    return 0;


}