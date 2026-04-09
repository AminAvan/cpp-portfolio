#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

class Solution{
public:
    int singleNumber(vector<int>& nums) {
        int uniq = 0;
        int rep = 0;
        for (int num : nums){
            rep = 0;
            for (int num_test : nums){
                if (num == num_test){
                    rep++;
                }
            }
            if (rep == 1){
                uniq = num;
            }            
        }
        printf("uniq: %d\n", uniq);
        return 0;
    }
};

int main (){

    // instantiate class
    Solution my_code;

    // give input
    vector<int> input = {1};

    // output
    my_code.singleNumber(input);

    return 0;
}