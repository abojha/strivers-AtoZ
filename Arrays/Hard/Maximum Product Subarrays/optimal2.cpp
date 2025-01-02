#include<bits/stdc++.h>

using namespace std;

int maximumProductSubarrays(vector<int> &arr){
    int prod1 = arr[0];
    int prod2 = arr[0];
    int maxProduct = arr[0];

    for(int i = 1; i < arr.size(); i++){
        int temp = max({arr[i], prod1*arr[i], prod2*arr[i]});
        prod2 = min({arr[i], prod1*arr[i], prod2*arr[i]});
        prod1 = temp;

        maxProduct = max(maxProduct, prod1);
    }
    return maxProduct;
}

int main(){
    vector<int> arr = {1,2,-3,0,-4,-5};

    int ans = maximumProductSubarrays(arr);
    cout << ans << endl;

    return 0;


}