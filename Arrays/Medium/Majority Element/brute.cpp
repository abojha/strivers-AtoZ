#include<bits/stdc++.h>

using namespace std;

int majorityElement(vector<int> &arr, int k){
    int n = arr.size();
    for(int i = 0; i < arr.size(); i++){
        int cnt = 0;
        for(int j = 0; j < arr.size(); j++){
            if(arr[i] == arr[j]){
                cnt++;
            }

            if(cnt > n / 2){
                return arr[i];
            }
        }
    }
    return -1;
}

int main(){
    vector<int> arr = {2, 2, 1, 2};

    int sum = 5;
    int result;
    result = majorityElement(arr, sum);

    // print the result
    cout << result;
    return 0;


}