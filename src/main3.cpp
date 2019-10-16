#include <iostream>
#include "task3.h"
using namespace std;
int main() {
	unsigned int hbound;
	cin >> hbound;
	unsigned long long sum = sumPrime(hbound);
	cout << sum << endl;
}