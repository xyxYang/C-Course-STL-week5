#pragma once
#include"units.h"

template<typename T>
class Measurement 
{
private:
	T val;
public:
	Measurement() {}
	Measurement(T v)
		:val(v){}

	Measurement& operator = (T v) { val = v; return *this; }
	T description() { return val; }
};

template<>
class Measurement<kilometer>
{
private:
	meter m;
public:
	Measurement() {}
	Measurement(double k)
		:m(1000*k) {}

	Measurement& operator = (double k) { m = k; return *this; }
	meter description() { return m; }
};

template<>
class Measurement<minute>
{
private:
	second s;
public:
	Measurement() {}
	Measurement(double m)
		:s(60 * m) {}

	Measurement& operator = (double m) { s = m; return *this; }
	second description() { return s; }
};