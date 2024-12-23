#include<bits/stdc++.h>

using namespace std;

int majorityElement(vector<int> &arr, int k){
    map<int, int> countOccurrences;
    int n = arr.size();

    for(int i = 0; i < arr.size(); i++){
        countOccurrences[arr[i]]++;
    }

    for(auto count : countOccurrences){
        if(count.second > n/2){
            return count.first;
        }
    }
    return -1;
}

int main(){
    vector<int> arr = {2, 2, 1, 1};

    int sum = 5;
    int result;
    result = majorityElement(arr, sum);

    // print the result
    cout << result;
    return 0;


}jnjcc