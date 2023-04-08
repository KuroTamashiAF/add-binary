//Given two binary strings a and b, return their sum as a binary string.
#include <iostream>
#include <string>
#include <math.h>
using namespace std;
class Solution {
public:
    string addBinary(string a, string b) {
        int a1 = twoToTen(a);
        int a2 = twoToTen(b);
        int res = a1 + a2;

        return "";
    }
    int twoToTen(string a)
    {
        int res = NULL;
        for (int i = 0; i < a.length(); i++)
        {
            res += ((int)a[i]-48) * pow(2, a.length() - 1-i);
        }
        return res;
    }

};


int main()
{
    Solution s;
    string input1 = "1010";
    string input2 = "1011";
    cout << s.addBinary(input1, input2) << endl;


    return 0;
}







