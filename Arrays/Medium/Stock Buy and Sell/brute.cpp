#include<bits/stdc++.h>

using namespace std;

int stockBuyAndSell(vector<int> &arr){
    int maxPro = INT_MIN;
    for(int i = 0; i < arr.size(); i++){
        int diff = 0;
        for(int j = i + 1; j < arr.size(); j++){
            diff = arr[j] - arr[i];
            if(diff > maxPro){
                maxPro = diff;
            }
        }
    }
    return maxPro;
}

int main(){
    vector<int> arr = {7, 1, 5, 3, 6, 4};
    int result = stockBuyAndSell(arr);

    cout << result;

    return 0;

}