#include "task1.h"

unsigned long findValue(unsigned int min, unsigned max) {
	int firstNum = max;
	for (int i = min; i < max + 1; i++) {
		while (firstNum % i != 0) {
			firstNum += max;
			i = min;
		}
	}
	return firstNum;
}