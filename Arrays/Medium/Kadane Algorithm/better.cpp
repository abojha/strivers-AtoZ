#include<bits/stdc++.h>

using namespace std;

int kadaneAlgo(vector<int> &arr){
    int tempMax = 0;
    int maxSum = INT_MIN;
    int start, ansStart, ansEnd;

    for(int i = 0; i < arr.size(); i++){

        if(tempMax == 0) start = i;
        tempMax += arr[i];

        if(tempMax > maxSum){
            maxSum = tempMax;
            ansStart = start;
            ansEnd = i;
        } 
        tempMax = max(tempMax, 0);
    }
    cout << ansStart << " " << ansEnd << endl;
    return maxSum;
}

int main(){
    vector<int> arr = {-2,1,-3,4,-1,2,1,-5,4};
    // vector<int> arr = {1};

    int result = kadaneAlgo(arr);

    // print the result
    cout << result;
    return 0;


}