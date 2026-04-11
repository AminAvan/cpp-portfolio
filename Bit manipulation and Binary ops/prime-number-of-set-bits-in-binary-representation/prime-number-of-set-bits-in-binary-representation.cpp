#include <iostream>

class Solution{
public:
    int countPrimeSetBits(int left, int right) {

        // binary rep
        int prime_nums = 0;
        int ones = 0;
        int num = 0;
        for (int j = left; j <= right; j++){
            ones = 0;
            num = j;
            while (num > 0){
            ones = ones + (num % 2);
            num = num / 2;
            }
            // std::cout << "j: " << j << ", ones: " << ones << std::endl;
            // is prime
            bool is_prime = true;
            int i = 1;
            while (i <= ones){
                if ((i != 1) && (i != ones)){
                    if ((ones % i) == 0){
                        is_prime = false;
                    }
                } else if (ones == 1){
                    is_prime = false;
                }
                i++;
            }
            if (is_prime){
                prime_nums++;
            }
        }
        


        return prime_nums;
    }
};

int main(){

    // instantiate
    Solution my_code;

    // input
    int a = 6;
    int b = 10;

    // output
    std::cout << my_code.countPrimeSetBits(a,b) << std::endl;

    return 0;
}