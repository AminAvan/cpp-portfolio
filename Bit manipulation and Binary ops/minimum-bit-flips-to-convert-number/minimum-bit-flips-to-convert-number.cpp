#include <iostream>

class Solution{
public:
    int minBitFlips(int start, int goal) {
        int xor_val = start ^ goal;
        int min_flips = 0;

        while (xor_val > 0){
            min_flips = min_flips + (xor_val % 2);
            xor_val = xor_val / 2;
        }

        return min_flips;
    }
};

int main(){

    //instantiate
    Solution my_code;

    // input
    int a = 3;
    int b = 4;

    // output
    std::cout << my_code.minBitFlips(a, b) << std::endl;

    return 0;
}