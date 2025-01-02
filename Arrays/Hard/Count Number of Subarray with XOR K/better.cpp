#include<bits/stdc++.h>

using namespace std;

int subarraysWithXORK(vector<int> &arr, int target){
    int count = 0;

    for(int i = 0; i < arr.size(); i++){
        int x = 0;
        for(int j = i; j < arr.size(); j++){
            x ^= arr[j];
            if(x == target) count++;
        }
    }
    return count;
}

int main(){
    vector<int> arr = {4, 2, 2, 6, 4};
    int target = 6;

    int ans = subarraysWithXORK(arr, target);
    cout << ans << endl;

    return 0;


}