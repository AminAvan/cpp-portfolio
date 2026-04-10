#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

class Solution{
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int all_permu = 1;
        vector<vector<int>> result;
        for (int i = 0; i < nums.size(); i++){
            all_permu = all_permu * 2;
        }

        for (int i = 0; i < all_permu; i++){
            vector<int> NewSubset;
            for (int j = 0; j < nums.size(); j++){
                if (i & (1 << j)){
                    NewSubset.push_back(nums[j]);
                }
            }
            result.push_back(NewSubset);
        }
        return result;
    }
};

int main (){

    // instantiate
    Solution my_code;
    
    // input
    vector<int> input = {1, 2, 3};

    // output
    vector<vector<int>> output = my_code.subsets(input);
    for (int i = 0; i < output.size(); i++){
        cout << "{";
            for (int j = 0; j < output[i].size(); j++){
                cout << output[i][j];
            }
        cout << "}";
    }

    return 0;
}