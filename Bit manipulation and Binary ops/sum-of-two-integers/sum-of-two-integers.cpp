#include <cstdio>
#include <iostream>

using namespace std;

class Solution{
public:
    int getSum(int a, int b) {
        int bi_sum = a ^ b;
        int bi_cout = a & b;
    
        while (bi_cout != 0){
            a = bi_sum;
            b = bi_cout << 1;
            bi_sum = a ^ b;
            bi_cout = a & b;
        }
        return bi_sum;
    }
};

int main(){

    // instantiate
    Solution my_code;

    // input
    int x = -1;
    int y = 1;

    // output
    printf("output: %d", (my_code.getSum(x, y)));

    return 0;
}