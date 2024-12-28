#include<bits/stdc++.h>

using namespace std;

int countSubarrayswithK(vector<int> &arr, int k){
    int count = 0;
    for(int i = 0; i < arr.size(); i++){
        int sum = 0;
            for(int j = i; j < arr.size(); j++){
                sum += arr[j];
                if(sum == k) count++;
            }
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