#include <stdio.h>
#include <fstream>
#include <iostream>
#include "lucky.h"

int main()
{
	int digits[n_size] = { 0 };

	ofstream oFile("bruh.txt");

	for (int i = 0; i < size; i++)
	{
		digits_in_array(i, digits);
		lucky_number(i, digits);
	}
	return 0;
}
