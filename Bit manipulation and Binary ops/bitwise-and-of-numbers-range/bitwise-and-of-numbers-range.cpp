#include <cstdio>
#include <iostream>

class Solution{
public:
    int rangeBitwiseAnd(int left, int right) {
        int and_val = left;
        int end = 0;
        while (end == 0){
            if (left < right){
                and_val = and_val & (left + 1);
                left++;
            } else if (left > right){
                and_val = and_val & (left - 1);
                left--;
            } else if (left == right){
                and_val = and_val & right;
                end = 1;
            }
        }
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