#pragma once
#include <string>
#include <iostream>

template <typename T>
void swap(T &a,T &b)
{
	T tmp;

	tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
T min(const T &a, const T &b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

template <typename T>
T max(const T &a, const T &b)
{
	if (a > b)
		return (a);
	else	
		return (b);
}
