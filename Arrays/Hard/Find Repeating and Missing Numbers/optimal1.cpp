#include<bits/stdc++.h>

using namespace std;
vector<int> MissingandRepeatingNumbers(vector<int> &nums){
    vector<int> result;
    int n = nums.size();
    int S = 0, Sn = 0, S2 = 0, S2n = 0;
    int X_minus_Y, X_plus_Y;
    
    Sn = (n)*(n + 1)/2;
    S2n = (n)*(n + 1)*(2*n + 1)/6;

    for(int i = 0; i < n; i++){
        S+=nums[i];
        S2+= (nums[i] * nums[i]);
    }

    X_minus_Y = S - Sn;
    X_plus_Y = (S2 - S2n)/X_minus_Y;

    int X = (X_plus_Y + X_minus_Y)/2;
    int Y = (X_plus_Y - X);

    result = {X, Y};


    return result;
}

int main(){
    vector<int> arr = {3, 1, 2, 5, 4, 6, 7, 5};
    vector<int> result = MissingandRepeatingNumbers(arr);

    for(auto ele : result) cout << ele << " ";

    return 0;


}