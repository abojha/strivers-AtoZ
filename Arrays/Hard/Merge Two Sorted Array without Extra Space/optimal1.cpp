#include<bits/stdc++.h>

using namespace std;

void MergeTwoSortedArrayWithoutExtraSpace(vector<int> &arr1, vector<int> &arr2){
    int n = arr1.size();
    int m = arr2.size();
    int left = n-1, right = 0, index = 0;
    vector<int> arr3(n+m);

    while(left >= 0 && right < arr2.size()){
        if(arr1[left] > arr2[right]){
            swap(arr1[left], arr2[right]);
            left--;
            right++;
        }
        else{
            break;
        }
    }

    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());

}

int main(){
    vector<int> arr1 = {2, 3, 5, 7}, arr2 = {1, 4, 6, 8, 9};
    MergeTwoSortedArrayWithoutExtraSpace(arr1, arr2);

    for(auto ele : arr1) cout << ele << " ";
    for(auto ele : arr2) cout << ele << " ";

    return 0;


}