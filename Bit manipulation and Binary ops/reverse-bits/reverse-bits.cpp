#include <cstdio>
#include <iostream>


class Solution{
public:
    int reverseBits(int n){
        int i = 30; // signed binary
        int pow_2 = 1;
        int rev_pow_2 = 1;
        int reverse_n = 0;
        int rev_i = 0;

        while (n > 0){
            pow_2 = 1;
            for (int j = i; j > 0; j--){
                pow_2 = pow_2 * 2;
            }
            if ((n >= pow_2) && (n > 0)){
                n = n - pow_2;
                rev_i = 31 - i;
                
                rev_pow_2 = 1;
                for (int k = rev_i; k > 0; k--){
                    rev_pow_2 = rev_pow_2 * 2;
                }
                reverse_n = reverse_n + rev_pow_2;
            }
            i--;
        }
        return reverse_n;
    }
};

int main(){

    // instantiate the class
    Solution my_code;

    // giving input to the object
    int input = 43261596;
    // int input = 6;

    printf("output: %d", (my_code.reverseBits(input)));

    return 0;
}