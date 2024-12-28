#include<bits/stdc++.h>

using namespace std;

int longestConsecutiveSubsequence(vector<int> &nums){
    set<int> st;
    int maxLength = INT_MIN;

    for(int i = 0; i < nums.size(); i++){
        st.insert(nums[i]);
    }

    for(auto ele : st){
        
        if(st.find(ele - 1) == st.end()){
            int cnt = 1;
            int x = ele;
            while(st.find(x + 1) != st.end()){
                cnt++;
                x++;
            }
            maxLength = max(maxLength, cnt);
        }
    }
    return maxLength;
}


int main(){
    vector<int> arr = {9, 8, 5, 7, 6, 10};

    int result;
    result = longestConsecutiveSubsequence(arr);

    // print the result
    cout << result;
    return 0;


}