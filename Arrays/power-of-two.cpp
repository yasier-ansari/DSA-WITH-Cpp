#include <math.h>
#include <stdio.h>

class Solution
{
public:
    // division checking method
    bool isPowerOfTwo(int n)
    {
        bool res = true;
        if (n == 0)
            return false;
        if (n == 1)
            return true;
        while (n != 1)
        {

            if (n % 2 == 0)
            {
                n = n / 2;
                continue;
            }
            else
            {
                return false;
            }
        }
        return res;
    }

    // brute force method
    bool isPowerOfTwo(int n)
    {
        int res = true;
        int ans = 0;
        for (int i = 0; i < 30; i++)
        {
            ans = pow(2, i);
            if (ans == n)
                return true;
        }
        return false;
    }
};