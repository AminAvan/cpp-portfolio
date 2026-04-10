#include <iostream>

class Solution{
public:
    bool hasAlternatingBits(int n) {
        bool is_alternate = true;
        int curr_bit = (n % 2);
        n = n / 2;
        int prev_bit;
        

        while ((n > 0) && (is_alternate == true)){
            prev_bit = curr_bit;
            curr_bit = (n % 2);
            n = n / 2;
            if (prev_bit == curr_bit){
                is_alternate = false;
            }

        }
        return is_alternate;
    }
};

int main(){

    // instantiate
    Solution my_code;

    // input
    int input = 11;

    // output
    std::cout << my_code.hasAlternatingBits(input) << std::endl;

    return 0;
}