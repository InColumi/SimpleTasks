#include <iostream>

using namespace std;

double GetResTask1()
{
	double sum = 0.0;
	double temp = 0.0;
	for(int i = 1; i <= 50; i++)
	{
		temp = (i * i * i);
		sum += 1 / temp;
	}
	return sum;
}

double GetResTask2(int x)
{
	double up = 2;
	double down = 1;

	double resUp = 1;
	double resDown = 1;

	for(int i = 1; i <= 6; ++i)
	{
		resUp *= (x - up);
		resDown *= (x - down);
		up *= 2;
		down = up - 1;
	}
	
	return resUp / resDown;
}

double GetResTask3(int a)
{
	int sum = 0.0;
	int ai = a;
	for(int i = 1; i <= 10; i++)
	{
		sum += ai;
		ai *= a;
	}
	return sum;
}

double GetResTask4(int n)
{
	double result = 1.0;
	for(int i = 1; i <= n; i++)
	{
		result *= (1 + 1 / ((double) i * i));
	}
	return result;
}

int main()
{
	cout << GetResTask1() << endl;
	cout << GetResTask2(65) << endl;
	cout << GetResTask3(2) << endl;
	cout << GetResTask4(10) << endl;
	return 0;
}