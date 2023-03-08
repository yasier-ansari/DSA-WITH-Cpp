class Solution
{
public:
    int reverse(int x)
    {
        int y = 0;
        if (x == 0)
            return 0;
        if (x == -2147483648)
            return 0;
        while (x != 0)
        {
            if (y > 2147483648 / 10 || y < -2147483648 / 10)
            {
                return 0;
            }
            y = y * 10 + x % 10;
            x = x / 10;
        }
        return y;
    }
};