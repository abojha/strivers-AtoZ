#include<bits/stdc++.h>

using namespace std;

int maximumProductSubarrays(vector<int> &arr){
    int maxProduct = INT_MIN;

    for(int i = 0; i < arr.size(); i++){
        for(int j = i + 1; j  < arr.size(); j++){
            int product = 1;
            for(int k = i; k <= j; k++){
                product*=arr[k];
            }
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