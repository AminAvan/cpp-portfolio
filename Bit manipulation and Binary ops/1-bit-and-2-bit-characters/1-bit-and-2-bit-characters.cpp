#include <iostream>
#include <vector>

class Solution {
public:
    bool isOneBitCharacter(std::vector<int>& bits) {
        int i = 0;
        int n = bits.size();
        while (i < (n - 1)){
            if (bits[i] == 1){
                i = i + 2;
            } else {
                i = i + 1;
            }
        }

        return i == n - 1;
    }
};

int main(){

    // instantiate
    Solution my_code;

    // input
    // std::vector<int> input = {1,1,1,1,1,1,0}; // true
    // std::vector<int> input = {1,0,0}; // true
    // std::vector<int> input = {1,1,1,0}; // false
    // std::vector<int> input = {0}; // true
    std::vector<int> input = {0,0}; // true

    // output
    std::cout << my_code.isOneBitCharacter(input) << std::endl;

    return 0;
}