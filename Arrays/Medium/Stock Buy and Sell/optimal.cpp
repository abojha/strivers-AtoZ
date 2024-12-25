#include<bits/stdc++.h>

using namespace std;

int stockBuyAndSell(vector<int> &arr){
    int maxPro = 0;
    int minimum = arr[0];
    for(int i = 0; i < arr.size(); i++){
        maxPro = max(maxPro, arr[i] - minimum);
        minimum = min(minimum, arr[i]);
    }
    return maxPro;
}

int main(){
    vector<int> arr = {7, 1, 5, 3, 6, 4};
    int result = stockBuyAndSell(arr);

    cout << result;

    return 0;


}