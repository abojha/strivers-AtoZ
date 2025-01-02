#include<bits/stdc++.h>

using namespace std;

void MergeTwoSortedArrayWithoutExtraSpace(vector<int> &arr1, vector<int> &arr2){
    int n = arr1.size();
    int m = arr2.size();
    int len = n + m;
    int gap = (len/2) + (len%2);
    

    while(gap > 0){
        int left = 0;
        int right = gap;
        while(right < len){
            if(left < n && right < n){
                if(arr1[left] > arr1[right])
                    swap(arr1[left], arr1[right]);
            }
            else if(left < n && right >= n){
                if(arr1[left] > arr2[right-n])
                    swap(arr1[left], arr2[right-n]);
            }
            else if(left >= n && right >= n){
                if(arr2[left-n] > arr2[right-n])
                    swap(arr2[left-n], arr2[right-n]);
            }
            left++, right++;
        }
        if(gap == 1) break;
        gap = (gap/2) + (gap%2);
    }
}

int main(){
    vector<int> arr1 = {2, 3, 5, 7}, arr2 = {1, 4, 6, 8, 9};
    MergeTwoSortedArrayWithoutExtraSpace(arr1, arr2);

    for(auto ele : arr1) cout << ele << " ";
    for(auto ele : arr2) cout << ele << " ";

    return 0;


}