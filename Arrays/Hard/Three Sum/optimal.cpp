#include<bits/stdc++.h>

using namespace std;

vector<vector<int>> threeSum(vector<int> &arr){
    vector<vector<int>> list;
    sort(arr.begin(), arr.end());

    for(int i = 0; i < arr.size(); i++){
        int j = i + 1;
        int k = arr.size() - 1;

        if(i != 0 && arr[i] == arr[i - 1]) continue;
        while(j < k){
            int sum = arr[i] + arr[j] + arr[k];
            if(sum > 0) k--;
            else if(sum < 0) j++;
            else {
                vector<int> temp = {arr[i], arr[j], arr[k]};
                list.push_back(temp);
                j++;
                k--;
                while(j < k  && arr[j] == arr[j - 1]) j++;
                while(j < k && arr[k] == arr[k + 1]) k--;
            }

        } 
    }

    return list;
}

int main(){
    vector<int> arr = {-1,0,1,2,-1,-4};
    vector<vector<int>> st;
    st = threeSum(arr);

    for(auto list : st){
        for(auto ele : list){
            cout << ele << " ";
        }
        cout << endl;
    }

    return 0;


}