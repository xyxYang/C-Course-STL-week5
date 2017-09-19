/********************************************
设计一个Measurement计量单位类型，满足如下要求，
1. 当为距离单位，当构造米或者千米等不同距离单位的实例时，统一以米为基本单位，实例调用description函数返回单位对应的meter类型(米类型)
2. 当为时间单位，当构造分钟或者秒为单位的实例时，统一以秒为基本单位，实例调用description函数返回单位对应的second类型(秒类型)
3. 如果为除距离和时间的其他单位，都打印值即可。
********************************************/
#include<iostream>
#include"Measurement.h"
#include"units.h"
using namespace std;

int main() 
{
	Measurement<meter> m1 = 20;
	Measurement<kilometer> m2 = 11.2;
	meter me = m1.description();

	Measurement<second> m3 = 20;
	Measurement<minute> m4 = 10;

	Measurement<double> m5 = 10;

	cout << me << endl;
	cout << m2.description() << endl;
	cout << m3.description() << endl;
	cout << m4.description() << endl;
	cout << m5.description() << endl;

	system("pause");
}