#include<bits/stdc++.h>

using namespace std;

vector<int> twoSum(vector<int> &arr, int k){
    vector<int> result;

    sort(arr.begin(), arr.end());
    int left = 0;
    int right = arr.size() - 1;
    int sum = 0;

    while (left < right){
        sum = arr[left] + arr[right];

        if(sum < k){
            left++;
        }
        else if(sum > k){
            right--;
        }
        else{
            result.push_back(arr[left]);
            result.push_back(arr[right]);
            return result;
        }
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