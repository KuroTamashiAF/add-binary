//Given two binary strings a and b, return their sum as a binary string.
#include <iostream>
#include <string>
#include <math.h>
using namespace std;
class Solution {
public:
    string addBinary(string a, string b) {
        /*if (a.empty())
            return b;
        if (b.empty())
            return a;
        if (a.empty() || b.empty())
            return "";

        int a1 = twoToTen(a);
        int a2 = twoToTen(b);
        int res = a1 + a2;
        return tenToTwo(res);
    }
    long twoToTen(string a)
    {
        int res = NULL;
        for (int i = 0; i < a.length(); i++)
        {
            res += ((int)a[i]-48) * pow(2, a.length() - 1-i);
        }
        return res;
    }
    string tenToTwo(int input)
    {
        int c = input;
        string res = "";
        int remaider = 0;
        
        while (c > 1)
        {
            remaider = c % 2;
            res += to_string(remaider);
            c /= 2;
;            
        }
        res += to_string(c);
        
        for (int i = 0; i < res.length()/2; i++)
        {
            char temp = res[i];
            res[i] = res[res.length() - 1 - i];
            res[res.length() - 1 - i] = temp;
             
        }
        return res;*/






    }

};


int main()
{
    Solution s;
    string input1 = "10100000100100110110010000010101111011011001101110111111111101000000101111001110001111100001101";
    string input2 = "110101001011101110001111100110001010100001101011101010000011011011001011101111001100000011011110011";
    cout << s.addBinary(input1, input2) << endl;


    return 0;
}







