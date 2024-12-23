#include<bits/stdc++.h>

using namespace std;

void sortArrywith012(vector<int> &arr){
    int count_0 = 0, count_1 = 0, count_2 = 0;
    
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] == 0){
            count_0++;
        }
        else if(arr[i] == 1){
            count_1++;
        }
        else{
            count_2++;
        }
    }
    int i = 0;
    while(count_0 > 0){
        arr[i] = 0;
        count_0--;
        i++;
    }
    while(count_1 > 0){
        arr[i] = 1;
        count_1--;
        i++;
    }
    while(count_2 > 0){
        arr[i] = 2;
        count_2--;
        i++;
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