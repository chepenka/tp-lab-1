#include "task2.h"

unsigned long checkPrime(unsigned int value)
{
	bool flag = true;
	for (int i = 2; i < value; i++)
	{
		if ((value % i == 0) && (value != 2))
		{
			flag = false;
			break;
		}
	}
	return flag;
}

unsigned long long nPrime(unsigned n) {
	unsigned i = 0;
	unsigned long long chekNumber = 1;
	while (i < n) {
		chekNumber++;
		if (checkPrime(chekNumber)) {
			i++;
		}
	}
	return chekNumber;
}

unsigned long long nextPrime(unsigned long long value) 
{ 
	unsigned long long nextPrime = value + 1;
	while (checkPrime((unsigned int)nextPrime) == false) nextPrime++;
	return nextPrime;
}
