#include<bits/stdc++.h>

using namespace std;

int countSubarrayswithK(vector<int> &arr, int k){
    map<int, int> mpp;
    int sum = 0;
    int count = 0;
    mpp[0] = 1;

    for(int i = 0; i < arr.size(); i++){
        sum += arr[i];
        if(sum == k){
            count++;
        }
        int rem = k - sum;

        if(mpp.find(rem) != mpp.end()){
            count+=mpp[rem];
        }
        mpp[sum]++;
    }
    return count;
}

int main(){
    vector<int> arr = {3, 1, 2, 4};

    int sum = 6;
    int result;
    result = countSubarrayswithK(arr, sum);

    // print the result
    cout << result;
    return 0;


}