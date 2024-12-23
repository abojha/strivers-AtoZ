#include<bits/stdc++.h>

using namespace std;

int kadaneAlgo(vector<int> &arr){
    int maxSum = INT_MIN;
    for(int i = 0; i < arr.size(); i++){
        for(int j = i; j < arr.size(); j++){
            int sum = 0;

            for(int k = i; k <= j; k++){
                sum += arr[k];
            }

            if(sum > maxSum) maxSum = sum;
        }
    }
    return maxSum;
}

int main(){
    vector<int> arr = {-2,1,-3,4,-1,2,1,-5,4};
    // vector<int> arr = {1};

    int result = kadaneAlgo(arr);

    // print the result
    cout << result;
    return 0;


}