#include <cassert>

#ifndef __UTILS_H
#define __UTILS_H

template <typename T>
int clz(T num)
{
    assert(false);
}

template <>
int clz(unsigned int num)
{
    return __builtin_clz(num);
}

template <>
int clz(unsigned long num)
{
    return __builtin_clzl(num);
}

template <>
int clz(unsigned long long num)
{
    return __builtin_clzll(num);
}

template <typename T>
int significant(T num)
{
    return sizeof(T) * 8 - clz(num);
}

#endif