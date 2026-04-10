#include <iostream>
#include <vector>

class Solution{
public:
    std::vector<int> countBits(int n) {
        std::vector<int> ans;
        int ones_count = 0;
        int num;

        for (int i = 0; i <= n; i++){
            // dec to binary
            num = i;
            while (num > 0){
                ones_count = ones_count + (num % 2);
                num = (num / 2);
            }
            ans.push_back(ones_count);
            ones_count = 0;
        }        
        
        return ans;
    }
};

int main (){

    // instantiate
    Solution my_code;

    // input
    int input = 7;

    // output
    for (int output : (my_code.countBits(7))){
        std::cout << output << ", ";
    }

    return 0;
}