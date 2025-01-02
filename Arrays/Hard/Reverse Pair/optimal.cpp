#include<bits/stdc++.h>

using namespace std;

void merge(vector<int> &arr, int low, int mid, int high){
    int left = low;
    int right = mid+1;
    vector<int> temp;

    while(left <= mid && right <= high){
        if(arr[left] < arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }

    while(left <= mid){
        temp.push_back(arr[left]);
        left++;
    }

    while(right <= high){
        temp.push_back(arr[right]);
        right++;
    }

    for(int i = low; i <= high; i++){
        arr[i] = temp[i-low];
    }
}

int counting(vector<int> &arr, int low, int mid, int high){
    int left = low;
    int right = mid + 1;   
    int cnt = 0;

    for(int i = low; i <= mid; i++){
        while(right <= high && arr[i] >  2 * arr[right]) right++;
        cnt+= (right - (mid + 1));
    }

    return cnt;
}


int mergeSort(vector<int> &arr, int low, int high){
    int mid = (low + high)/2;
    int cnt = 0;
    if(low >= high) return cnt;

    cnt+=mergeSort(arr, low, mid);
    cnt+=mergeSort(arr, mid+1, high);
    cnt+=counting(arr, low, mid, high);
    merge(arr, low, mid, high);

    return cnt;
}
int countPairs(vector<int> &arr){
    return mergeSort(arr, 0, arr.size()-1);
}

int main(){
    vector<int> arr = {4, 1, 2, 3, 1};

    int ans = countPairs(arr);
    cout << ans << endl;

    return 0;


}