#include "task5.h"
#include <iostream>

int main()
{
	char buf[] = "228,144,754";
	int N = 0;
	char** result = nullptr;
	split(&result, &N, buf, ',');
	for (int i = 0; i < N; i++)
	{
		printf("%s \n", result[i]);
	}
}