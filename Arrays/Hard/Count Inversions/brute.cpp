#include<bits/stdc++.h>

using namespace std;

int countInversion(vector<int> &arr){
    int count = 0;

    for(int i = 0; i < arr.size(); i++){
        for(int j = i + 1; j < arr.size(); j++){
            if(arr[i] > arr[j])
                count++;
        }
    }

    return count;
}

int main(){
    vector<int> arr = {5, 3, 2, 1, 4};

    int ans = countInversion(arr);
    cout << ans << endl;

    return 0;


}