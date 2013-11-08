/************************************************************************************************************************************************
 * Problem 10 - Summation of primes																												*
 *																																				*
 *                                    																											*
 * The sum  of the promes below 10 is 2 + 3 + 5 + 7 = 17																						*
 * 																																				*
 * 	       																																		*
 * Find the sum of all the primes below two million.																								*
 * 																																				*
 *																																		  		*
 * 																																		   		*
 * Author: Alonso J. Gragera Aguaza																												*
 * Date: 8/11/2012																																*
 ************************************************************************************************************************************************/


#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

bool isPrime(unsigned long long n, vector<unsigned long long> primes)
{
	for (int i = 0; primes[i]-1 < ((unsigned long long) (ceil(sqrt(n)))); ++i)
	{
		if (n % primes[i] == 0)
			return false;
	}

	return true;
}

unsigned long long SumOfPrimes(unsigned long long n)
{
	vector<unsigned long long> primes;
	primes.push_back(2);
	unsigned long long sum = 2;

	unsigned long long number = 3;
	while(number < n) 
	{
	    if (isPrime(number,primes))
	    {
	    	primes.push_back(number);
	    	sum += number;
	    }

	    number++;
	}

	return sum;
}


int main(int argc, char const *argv[])
{
	unsigned long long sum = SumOfPrimes(2000000);
	

	cout << "The sum of primes is: " << sum << endl;
	return 0;
}