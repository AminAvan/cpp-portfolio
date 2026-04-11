#include <iostream>
#include <vector>

class Solution{
public:
    bool isOneBitCharacter(std::vector<int>& bits) {
        bool is_oneBit = false;
        int i = 1;

        if ((bits[0] == 0) && (1 == bits.size())){
            is_oneBit = true;
        }

        while ((i < bits.size()) && (1 < bits.size())){
            if ((bits[i] == 1) && (bits[i-1] == 1)){
                if ((i + 2) >= bits.size()){
                    if (bits[i+1] == 0){
                        is_oneBit = true;
                        return is_oneBit;
                    } else {
                        i = i + 1;
                    }
                    // std::cout << "11 --> i: " << i << ", size: " << ((bits.size())) << std::endl;
                } else if ((i + 2) < bits.size()){
                    i = i + 2;
                    // std::cout << "11 --> i: " << i << ", size: " << ((bits.size())) << std::endl;
                }                
            } else if ((bits[i] == 0) && (bits[i-1] == 1)){
                if ((i + 2) >= bits.size()){
                    if (bits[i+1] == 0){
                        is_oneBit = true;
                        return is_oneBit;
                    } else {
                        i = i + 1;
                    }
                    // std::cout << "10 --> i: " << i << ", size: " << ((bits.size())) << std::endl;
                } else if ((i + 2) < bits.size()) {
                    i = i + 2;
                    // std::cout << "10 --> i: " << i << ", size: " << ((bits.size())) << std::endl;
                }
            } else if ((bits[i] == 0)){
                is_oneBit = true;
                i = i + 1;
                // std::cout << "0 --> i: " << i << ", size: " << ((bits.size())) << std::endl;
            }
        }        

        return is_oneBit;
    }
};

int main(){

    // instantiate
    Solution my_code;

    // input
    // std::vector<int> input = {1,1,1,1,1,1,0}; // true
    // std::vector<int> input = {1,0,0}; // true
    std::vector<int> input = {1,1,1,0}; // false
    // std::vector<int> input = {0}; // true
    // std::vector<int> input = {0,0}; // true

    // output
    std::cout << my_code.isOneBitCharacter(input) << std::endl;

    return 0;
}