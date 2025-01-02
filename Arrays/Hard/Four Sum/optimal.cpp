#include<bits/stdc++.h>

using namespace std;

vector<vector<int>> fourSum(vector<int> &arr, int target){
    vector<vector<int>> st;
    sort(arr.begin(), arr.end());

    for(int i = 0; i < arr.size(); i++){
        if(i != 0 && arr[i] == arr[i-1]) continue;
        for(int j = i + 1; j < arr.size(); j++){
            int k = j + 1;
            int l = arr.size() - 1;

            if(j > i + 1 && arr[j] == arr[j-1]) continue;
            while(k < l){

                int sum = arr[i] + arr[j] + arr[k] + arr[l];

                if(sum > target) l--;
                else if(sum < target) k++;
                else{
                    vector<int> temp = {arr[i], arr[j], arr[k], arr[l]};
                    sort(temp.begin(), temp.end());
                    st.push_back(temp);
                    l--;
                    k++;

                    while(k < l && arr[k] == arr[k-1]) k++;
                    while(k < l && arr[l] == arr[l + 1]) l--; 
                }
            }

        }
    }
    return st;
}

int main(){
    vector<int> arr = {4,3,3,4,4,2,1,2,1,1};
    int target = 9;
    vector<vector<int>> st;
    st = fourSum(arr, target);

    for(auto list : st){
        for(auto ele : list){
            cout << ele << " ";
        }
        cout << endl;
    }

    return 0;


}