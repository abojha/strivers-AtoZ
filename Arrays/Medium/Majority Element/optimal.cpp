#include<bits/stdc++.h>

using namespace std;

int majorityElement(vector<int> &arr, int k){
    int count = 0;
    int element = 0;

    for(int i = 0; i < arr.size(); i++){
        if(count == 0){
            element = arr[i];
        }
        if(element == arr[i]){
            count++;
        }
        else{
            count--;
        }
    }
    return element;
}

int main(){
    vector<int> arr = {2, 2, 1, 1, 1};

    int sum = 5;
    int result;
    result = majorityElement(arr, sum);

    // print the result
    cout << result;
    return 0;


}