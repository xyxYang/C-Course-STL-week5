/********************************************
���һ��Measurement������λ���ͣ���������Ҫ��
1. ��Ϊ���뵥λ���������׻���ǧ�׵Ȳ�ͬ���뵥λ��ʵ��ʱ��ͳһ����Ϊ������λ��ʵ������description�������ص�λ��Ӧ��meter����(������)
2. ��Ϊʱ�䵥λ����������ӻ�����Ϊ��λ��ʵ��ʱ��ͳһ����Ϊ������λ��ʵ������description�������ص�λ��Ӧ��second����(������)
3. ���Ϊ�������ʱ���������λ������ӡֵ���ɡ�
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