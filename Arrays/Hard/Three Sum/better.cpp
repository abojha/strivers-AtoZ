#include<bits/stdc++.h>

using namespace std;

set<vector<int>> threeSum(vector<int> &arr){
    set<vector<int>> st;

    for(int i = 0; i < arr.size(); i++){
        set<int> hashset;

        for(int j = i + 1; j < arr.size(); j++){
            int thirdvalue = -(arr[i] + arr[j]);

            if(hashset.find(thirdvalue) != hashset.end()){
                vector<int> temp = {arr[i], arr[j], thirdvalue};
                sort(temp.begin(), temp.end());
                st.insert(temp);

            }
            hashset.insert(arr[j]);
        }
    }

    return st;
}

int main(){
    vector<int> arr = {-1, 0, 1, 2, -1, -4};
    set<vector<int>> st;
    st = threeSum(arr);

    for(auto list : st){
        for(auto ele : list){
            cout << ele << " ";
        }
        cout << endl;
    }

    return 0;


}