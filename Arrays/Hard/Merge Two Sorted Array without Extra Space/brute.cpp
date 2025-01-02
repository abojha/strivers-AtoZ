#include<bits/stdc++.h>

using namespace std;

void MergeTwoSortedArrayWithoutExtraSpace(vector<int> &arr1, vector<int> &arr2){
    int n = arr1.size();
    int m = arr2.size();
    int left = 0, right = 0, index = 0;
    vector<int> arr3(n+m);

    while(left < arr1.size() && right < arr2.size()){
        if(arr1[left] < arr2[right]){
            arr3[index] = arr1[left];
            left++;
            index++;
        }

        else if(arr1[left] > arr2[right]){
            arr3[index] = arr2[right];
            right++;
            index++;
        }
        else{
            arr1[left] = arr3[right];
            right++;
            left++;
            index++;
        }
    }

    while(left < arr1.size()){
        arr3[index] = arr1[left];
        left++;
        index++;
    }

    while(right < arr2.size()){
        arr3[index] = arr2[right];
        right++;
        index++;
    }

    for(int i = 0; i < n + m; i++){
        if(i < n) arr1[i] = arr3[i];
        else arr2[i-n] = arr3[i];
    }
}

int main(){
    vector<int> arr1 = {2, 3, 5, 7}, arr2 = {1, 4, 6, 8, 9};
    MergeTwoSortedArrayWithoutExtraSpace(arr1, arr2);

    for(auto ele : arr1) cout << ele << " ";
    for(auto ele : arr2) cout << ele << " ";

    return 0;


}