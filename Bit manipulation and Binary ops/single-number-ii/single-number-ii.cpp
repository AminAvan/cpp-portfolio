#include <iostream>
#include <vector>

class Solution{
public:
    int singleNumber(std::vector<int>& nums) {
        int result;
        int rep = 0;
        int jw = nums[0];

        for (int j = 0; j < nums.size(); j++){
            for (int i = 0; i < nums.size(); i++){
                if (jw == nums[i]){
                    rep++;
                }
                if (rep == 3){
                    jw = nums[j+1];
                }
            }
            rep = 0;
        }

        result = jw;
        return result;
    }
};


int main(){

    // instantiate
    Solution my_code;

    // input
    std::vector<int> input = {30000,500,100,30000,100,30000,100};

    // output
    std::cout << my_code.singleNumber(input) << std::endl;

    return 0;
}