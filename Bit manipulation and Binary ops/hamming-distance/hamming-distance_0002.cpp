#include <iostream>
#include <cstdio>

using namespace std;


class Solution{
public:
    int hammingDistance(int x, int y) {
        // find bit-wise difference via XOR
        int xor_val = x ^ y;
        int count = 0;

        // counting ONE'S with Brian Kernighan's alg: (xor_val AND (xor_val - 1)) remove one ONE-SET-BIT every iteration
        while(xor_val){
            xor_val &= (xor_val - 1);
            count++; 
        }
        return count;
    }
};


int main(){

    // instantiate
    Solution my_code;

    // input
    int a = 4;
    int b = 1;

    // output
    printf("output: %d", (my_code.hammingDistance(a, b)));
    
    return 0;
}