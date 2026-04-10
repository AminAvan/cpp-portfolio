#include <string>
#include <iostream>
#include <cstdio>

using namespace std;

class Solution {
public:
    string addBinary(string a, string b) {
        string result;
        string sum, carry, cin;
        cin = '0';

        while (a.size() != b.size()){
            if (a.size() > b.size()){
                b = '0' + b;
            }
            if (b.size() > a.size()){
                a = '0' + a;
            }
        }

        for (int i = a.size()-1; i >= 0; i--){
            if ((a[i] == '0') && (b[i] == '0') && (cin == "0")) {
                sum = '0' + sum;
                carry = '0' + carry;
            } else if ((a[i] == '0') && (b[i] == '0') && (cin == "1")) {
                sum = '1' + sum;
                carry = '0' + carry;
            } else if ((a[i] == '0') && (b[i] == '1') && (cin == "0")) {
                sum = '1' + sum;
                carry = '0' + carry;
            } else if ((a[i] == '0') && (b[i] == '1') && (cin == "1")) {
                sum = '0' + sum;
                carry = '1' + carry;
            } else if ((a[i] == '1') && (b[i] == '0') && (cin == "0")) {
                sum = '1' + sum;
                carry = '0' + carry;
            } else if ((a[i] == '1') && (b[i] == '0') && (cin == "1")) {
                sum = '0' + sum;
                carry = '1' + carry;
            } else if ((a[i] == '1') && (b[i] == '1') && (cin == "0")) {
                sum = '0' + sum;
                carry = '1' + carry;
            } else if ((a[i] == '1') && (b[i] == '1') && (cin == "1")) {
                sum = '1' + sum;
                carry = '1' + carry;
            }
            cin = carry[0];
        }

        if (carry[0] == '1'){
            result = carry[0] + sum;
        } else if (carry[0] == '0'){
            result = sum;
        }
        
        return result;
    }
};

int main(){

    // instantiate
    Solution my_code;

    // input
    string x = "1100";
    string y = "1";

    // output
    std::cout << "output: " << (my_code.addBinary(x, y)) << std::endl;

    return 0;
}