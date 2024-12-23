#include<bits/stdc++.h>

using namespace std;

vector<int> twoSum(vector<int> &arr, int k){

    vector<int> result;
    for(int i = 0; i < arr.size(); i++){
        for(int j = i + 1; j < arr.size(); j++){
            if(arr[i] + arr[j] == k){
                result.push_back(i);
                result.push_back(j);
                return result;
            }
        }
    }
    result.push_back(-1);
    result.push_back(-1);
    return result;
}

int main(){
    vector<int> arr = {2, 1, 3, 4};

    int sum = 4;
    vector<int> result;
    result = twoSum(arr, sum);

    // print the result
    for(int i = 0; i < result.size(); i++){
        cout << result[i] << " ";
    }
    return 0;


}