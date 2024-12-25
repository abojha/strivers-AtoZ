#include<bits/stdc++.h>

using namespace std;

void alternatePositiveNegative(vector<int> &arr){
   int posIndex = 0;
   int negIndex = 1;
   vector<int> result(arr.size(), 0);
   int i = 0;

   while(posIndex < arr.size() || negIndex < arr.size()){
        if(arr[i] > 0){
            result[posIndex] = arr[i];
            posIndex+=2;
            i++;
        }
        else{
            result[negIndex] = arr[i];
            negIndex+=2;
            i++;
        }
   }
   for(auto ele : result) cout << ele << " ";
}

int main(){
    vector<int> arr = {-2,1,-3,4,-1,2,1,-5};
    // vector<int> arr = {1};

    alternatePositiveNegative(arr);

    // print the result
    // for(auto ele : arr) cout << ele << " ";
    return 0;


}