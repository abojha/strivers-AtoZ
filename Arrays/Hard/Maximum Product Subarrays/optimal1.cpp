#include<bits/stdc++.h>

using namespace std;

int maximumProductSubarrays(vector<int> &arr){
    int maxProduct = INT_MIN;

    int pre = 1;
    int suf = 1;

    for(int i = 0; i < arr.size() - 1; i++){
        if(pre == 0)
            pre = arr[i];
        
        if(suf == 0)
            suf = arr[i];
        
        pre = pre*arr[i];
        suf = suf*arr[arr.size() - i - 1];


        maxProduct = max(maxProduct, pre);
        maxProduct = max(maxProduct, suf);
    }
    return maxProduct;
}

int main(){
    vector<int> arr = {1,2,-3,0,-4,-5};

    int ans = maximumProductSubarrays(arr);
    cout << ans << endl;

    return 0;


}