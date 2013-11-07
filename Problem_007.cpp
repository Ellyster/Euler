/************************************************************************************************************************************************
 * Problem 7 - 	10001st prime																													*
 *																																				*
 *                                    																											*
 * By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.											*
 * 																																				*
 * What is the 10 001st prime number?						*																					*
 *																																		  		*
 * 																																		   		*
 * Author: Alonso J. Gragera Aguaza																												*
 * Date: 6/11/2012																																*
 ************************************************************************************************************************************************/


#include <iostream>
#include <vector>

using namespace std;



bool isPrime(int n, vector<int> primes)
{
	for (int i = 0; i < primes.size(); ++i)
	{
		if (n % primes[i] == 0)
			return false;
	}

	return true;
}

int NthPrime(int n)
{
	vector<int> primes;
	primes.push_back(2);

	int number = 3;
	while(primes.size() < n) 
	{
	    if (isPrime(number,primes))
	    	primes.push_back(number);

	    number++;
	}

	return primes.back();
}


int main(int argc, char const *argv[])
{

	cout << "The 1001th prime is: " << NthPrime(10001) << endl;
	return 0;
}