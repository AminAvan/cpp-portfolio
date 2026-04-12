#include <cstdio>
#include <vector>

class Solution{
public:
    int removeDuplicates(std::vector<int>& nums) {
        std::vector<int> no_dup_nums;

        for (int i = 0; i < nums.size(); i++){
            if (no_dup_nums.empty()){
                no_dup_nums.push_back(nums[i]);
            } else {
                if ((no_dup_nums[(no_dup_nums.size())-1]) != nums[i]){
                    no_dup_nums.push_back(nums[i]);
                }
            }
            
        }

        nums = no_dup_nums;
        // for (const auto& item : nums){
        //         printf("%d, ", item);
        //     }

        return (nums.size());
    }
};

int main(){

    // instantiate
    Solution my_code;

    // input
    std::vector<int> input = {0,0,1,1,1,2,2,3,3,4};

    // output
    printf("output: %d", (my_code.removeDuplicates(input)));

    return 0;
}