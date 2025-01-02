#include<bits/stdc++.h>

using namespace std;

int subarraysWithXORK(vector<int> &arr, int target){
    int count  = 0;
    int xr = 0;
    map<int, int> mpp;

    mpp[xr]++;
    for(int i = 0; i < arr.size(); i++){
        xr ^= arr[i];

        int x = xr ^ target;
        count += mpp[x];

        mpp[xr]++;

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