#include<bits/stdc++.h>

using namespace std;
void nextPermute(vector<int> &arr){
    int index = -1;
    int n = arr.size();

    // find the break point
    for(int i = n -2; i >= 0; i--){
        if(arr[i] < arr[i + 1]){
            index = i;
            break;
        }
    }

    // if index is -1 then it means array is sortd in descending order i.e. the last permutation 
    if(index == -1){
        reverse(arr.begin(), arr.end());
        return;
    }

    for(int i = n-1; i > index; i++){
        if(arr[index] < arr[i]){
            swap(arr[index], arr[i]);
            break;
        }
    }
    reverse(arr.begin() + index+1, arr.end());
    return;
}
int main(){
    vector<int> arr = {3, 1, 2};
    nextPermute(arr);

    for(auto ele : arr){
        cout << ele << " ";
    }
    return 0;


}