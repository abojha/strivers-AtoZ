#include<bits/stdc++.h>

using namespace std;

void sortArrywith012(vector<int> &arr){
    int low = 0, mid = 0, high = arr.size() - 1;

    while(mid <= high){
        if(arr[mid] == 0){
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid] == 1){
            mid++;
        }
        else{
            swap(arr[mid], arr[high]);
            high--;
        }
    }
 }

int main(){
    vector<int> arr = {0, 1, 2, 1, 2, 0};
    sortArrywith012(arr);

    // print the result
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }

    return 0;


}