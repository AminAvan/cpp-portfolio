#include <iostream>
#include <vector>
#include <string>
#include <cstdio>

using namespace std;

class Solution {
public:
    int hammingWeight(int n) {
        unsigned int accum = 1;
        int i = 0;
        int set_high = 0;
        while (accum <= n){
            accum = accum * 2;
            i++;
        }
        
        i--;
               
        while (n > 0){
            accum = 1;
            for (int j = i; j > 0; j--){
                accum = accum * 2;
            }
            i--;
            // if (i = 0)
            if ((n >= accum) && (n > 0)) {                
                n = n - accum;
                set_high++;
            }
        }
               
        return set_high;
    }
};

int main(){
    printf("\n");

    // Instantiate the solution class
    Solution my_code;

    // Give the input to the variables in the instantiated-class
    int my_input = 128;

    // Print the output from the instantiated-class
    int output = my_code.hammingWeight(my_input);
    
    printf("output: %d\n", output);

    return 0;
}