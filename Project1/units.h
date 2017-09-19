#pragma once
#include<iostream>

struct meter
{
	int val;

	meter(int v) { val = v; }
	meter(){}
};

struct second
{
	int val;

	second(int v) { val = v; }
	second(){}
};

std::ostream& operator<<(std::ostream& out, const meter& m)
{
	out << m.val << "m";
	return out;
}

std::ostream& operator<<(std::ostream& out, const second& s)
{
	out << s.val << "s";
	return out;
}

struct kilometer
{
};

struct minute
{
};