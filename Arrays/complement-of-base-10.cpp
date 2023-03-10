class Solution
{
public:
    // method 1 (masking, AND, SHIFT )

    int bitwiseComplement(int n)
    {
        int p = n;
        int mul = 0;
        while (p != 0)
        {
            mul = (mul << 1) | 1;
            p = p >> 1;
        }
        if (n == 0)
        {
            return 1;
        }
        else
        {
            return (~n) & mul;
        }
    }

    // method 2 ( Intuitive , direct thinking )
    int bitwiseComplement(int n)
    {
        if (n == 0)
            return 1;
        int ans = 0;
        int curr = 1;
        while (n != 0)
        {
            if (n % 2 == 0)
                ans += curr;
            n /= 2;
            curr *= 2;
        }
        return ans;
    }
};