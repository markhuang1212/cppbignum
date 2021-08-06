#include <vector>
#include <string>

#include "utils.cpp"

#ifndef __BIGNUM_H
#define __BIGNUM_H

#define BIGNUM_BASE 1000000000

class bignum
{
private:
    int sign;
    std::vector<int> digits; // digits[0] := least significant
    int base = BIGNUM_BASE;

public:
    bignum()
    {
        sign = 1;
        digits = {0};
    }

    bignum(long long num)
    {
        if (num < 0)
        {
            num = -num;
            sign = -1;
        }
        else
        {
            sign = 1;
        }
        while (num)
        {
            digits.push_back(num % (1LL * base));
            num /= base;
        }
    }

    bignum(const std::string &str, int base = 10)
    {
    }

    bignum(const char *str, int base = 10)
    {
    }

    bignum &operator=(const bignum &another)
    {
        sign = another.sign;
        digits = another.digits;
        base = another.base;
    }

    bignum operator+(const bignum &another) const
    {
        bignum result;
        auto x = digits.rbegin();
        auto y = another.digits.rbegin();
        int addon = 0;

        while (x != digits.rend() ||
               y != another.digits.rend() ||
               addon != 0)
        {
            int z = (x == digits.rend() ? 0 : *x) +
                    (y == another.digits.rend() ? 0 : *y) +
                    addon;
            if (z >= base)
            {
                z -= base;
                addon = 1;
            }
            else
            {
                addon = 0;
            }
            result.digits.push_back(z);
            if (x != digits.rend())
            {
                x++;
            }
            if (y != another.digits.rend())
            {
                y++;
            }
        }

        return result;
    }

    bignum &operator-(const bignum &another)
    {
    }

    bignum &operator*(const bignum &another)
    {
    }
    bignum &operator/(const bignum &another)
    {
    }

    std::string toString(int base = 10)
    {
    }

    int toInt()
    {
    }

    long toLong()
    {
    }

    long long toLongLong()
    {
    }

    long long numOfDigits(int base = 2)
    {
    }
};

#endif