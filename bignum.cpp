#include <vector>
#include <string>

class bignum
{
private:
    std::vector<int> digits;

public:
    bignum(long long num)
    {
    }
    bignum(long num)
    {
    }
    bignum(int num)
    {
    }
    bignum(const std::string &str, int base = 10)
    {
    }
    bignum(const char *str, int base = 10)
    {
    }

    bignum &operator=(const bignum &another)
    {
    }

    bignum &operator+(const bignum &another)
    {
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