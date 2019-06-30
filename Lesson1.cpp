#include "pch.h"
#include "Lesson1.h"

#include <iostream>

using namespace std;

void Solution(int previousInteger, int previousExponent, int&previousGap);

Lesson1::Lesson1()
{
}


Lesson1::~Lesson1()
{
	cout << endl << "deleting lesson 1" << endl;
}

void Lesson1::Run(void)
{
	cout << "Lesson 1. Iterations" << endl << endl;

	int integer = 41;
	int initialExponent = 0;

	int binaryNumber = 1;

	while (binaryNumber * 2 <= integer)
	{
		binaryNumber *= 2;
		initialExponent++;
	}

	//Solution(initialExponent);

	/*int integer = 31;
	int ones = 0;

	while (integer > 1)
	{
		ones++;

		int x = 1;
		int exponent = 0;

		while (x * 2 <= integer)
		{
			x *= 2;
			exponent++;
		}

		cout << integer << endl;
		cout << x << endl << endl;

		integer -= x;
	}

	if (integer % 2 == 1)ones++;

	cout << integer << endl;
	cout << ones << endl;*/
}

void Solution(int previousInteger, int previousExponent, int & previousGap)
{
	int integer = previousInteger;
	int exponent = 0;
	int binaryNumber = 1;

	while (binaryNumber * 2 <= integer)
	{
		binaryNumber *= 2;
		exponent++;
	}

	if (previousExponent - exponent > previousGap)previousGap = previousExponent - exponent;

	//Solution(exponent, previousGap);
}
