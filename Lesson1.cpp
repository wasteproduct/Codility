#include "pch.h"
#include "Lesson1.h"

#include <iostream>

using namespace std;

int Solution1(int N);

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

	//cout << Solution1(3178) << endl;

	cout << "Solution 1: 73%" << endl;
}

int Solution1(int N)
{
	int initialExponent = 0;

	int initialBinaryNumber = 1;

	while (initialBinaryNumber * 2 <= N)
	{
		initialBinaryNumber *= 2;
		initialExponent++;
	}

	int binaryGap = 0;

	int integer = N - initialBinaryNumber;
	int previousExponent = initialExponent;

	if (integer <= 0)return 0;

	if (integer == 1)
	{
		if (previousExponent > binaryGap)return --previousExponent;
	}

	while (true)
	{
		if (integer == 1)
		{
			if (previousExponent > binaryGap)binaryGap = previousExponent;

			break;
		}

		if (integer <= 0)break;

		int exponent = 0;
		int binaryNumber = 1;

		while (binaryNumber * 2 <= integer)
		{
			binaryNumber *= 2;
			exponent++;
		}

		if (previousExponent - exponent > binaryGap)binaryGap = previousExponent - exponent;

		integer -= binaryNumber;
		previousExponent = exponent;
	}

	return --binaryGap;
}
