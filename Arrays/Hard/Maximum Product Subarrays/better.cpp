#include<bits/stdc++.h>

using namespace std;

int maximumProductSubarrays(vector<int> &arr){
    int maxProduct = INT_MIN;

    for(int i = 0; i < arr.size(); i++){
        int product = 1;
        for(int j = i + 1; j  < arr.size(); j++){
            product*=arr[j];
            maxProduct = max(maxProduct, product);
        }
    }
    return maxProduct;
}

int main(){
    vector<int> arr = {1,2,-3,0,-4,-5};

    int ans = maximumProductSubarrays(arr);
    cout << ans << endl;

    return 0;


}