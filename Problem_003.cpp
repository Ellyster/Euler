/************************************************************************************************************************************************
 * Problem 3 - Largest prime factor																												*
 *																																				*
 *                                    																											*
 * 																																				*
 * The prime factors of 13195 are 5, 7, 13 and 29.																								*
 * 																																				*
 * What is the largest prime factor of the number 600851475143 ?																				*
 *																																				*
 *																																		  		*
 * 																																		   		*
 * Author: Alonso J. Gragera Aguaza																												*
 * Date: 6/11/2012																																*
 ************************************************************************************************************************************************/


#include<iostream>

using namespace std;

unsigned long long LargestPrime(unsigned long long n)
{
	unsigned long long toDivide = n;
	unsigned long long maxPrime = 0;

	for (unsigned long long i = 2; i < toDivide; ++i)
	{
		if (toDivide % i == 0)
			maxPrime = i;

		while(toDivide % i == 0)
			toDivide = toDivide / i;
	}

	if (toDivide > maxPrime)
		return toDivide;
	else
		return maxPrime;
}


int main(int argc, char const *argv[])
{
	unsigned long long p;

	p = LargestPrime(600851475143);

	cout << "The largest prime is: " << p << endl;
	return 0;
}