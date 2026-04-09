#include <iostream>
#include <cstdio>

using namespace std;

class Solution{
public:
    int hammingDistance(int x, int y) {
        int xor_x_y = x ^ y;
        int result = 0;
        while (xor_x_y > 0){
            result = result + (xor_x_y % 2);
            xor_x_y = xor_x_y / 2;
        }
        return result;
    }
};

int main (){

    // instantiate class
    Solution my_code;

    // give input
    int a = 3;
    int b = 1;

    // calling the function
    printf("output: %d", my_code.hammingDistance(a, b));


    return 0;
}