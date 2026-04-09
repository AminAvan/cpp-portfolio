#include <cstdio>
#include <iostream>

class Solution{
public:
    int rangeBitwiseAnd(int left, int right) {
        int and_val = left;
        int nums_zero = 0;
        int end = 0;
        while (left != right){
            left = left >> 1;
            right = right >> 1;
            nums_zero++;
        }
        and_val = left & right;
        and_val = and_val << nums_zero;

        return and_val;
    }
};

int main(){

    // instantiate
    Solution my_code;

    // input
    int a = 1;
    int b = 2147483647;

    // output
    printf("output: %d", my_code.rangeBitwiseAnd(a,b));

    return 0;
}