/************************************************************************************************************************************************
 * Problem 14 - Longest Collatz sequence																										*
 *																																				*
 *                                    																											*
 * The following iterative sequence is defined for the set of positive integers:																*
 * 	n -> n/2     (if n is even)																													*
 *  n -> 3n + 1  (if n is odd)                             							 															*
 *																																		  		*
 * Using the rule above and starting with 13, we generate the following sequence:														  		*
 *			13 -> 40 -> 20 -> 10 -> 5 -> 16 -> 8 -> 4 -> 2 -> 1																			  		*
 *																																		  		*
 * It can be seen that this sequence (starting at 13 and finishing at 1) contains 10 terms.												  		*
 * Althoug it has not been proved yet (Collatz Problem), it is thought that all starting number finish at 1.									*
 * 																																		   		*
 * Which starting number, under a million, produces the longest chain?																	   		*
 * 																																		   		*
 * 																																		   		*
 * Author: Alonso J. Gragera Aguaza																												*
 * Date: 9/11/2012																																*
 ************************************************************************************************************************************************/


#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

int CollatzLength(int n, vector<int> previous)
{
	unsigned long long n_prime = n;
	int size = 0;

	while(n_prime > n-1)
	{
		size++;

		if (n_prime%2==0)
			n_prime = n_prime/2;
		else
			n_prime = 3*n_prime + 1;
	}

	size += previous[n_prime];

	return size;
}

int LongestCollatzSequence (int n)
{
	vector<int> previous;

	previous.push_back(0);
	previous.push_back(1);

	int max = 1;
	int index = 1;

	int length;

	for (int i = 2; i < n; ++i)
	{
		length = CollatzLength(i,previous);
		previous.push_back(length);

		if (length > max)
		{
			max = length;
			index = i;
		}
	}

	return index;
}

int main(int argc, char const *argv[])
{
	cout << "The number with the longest Collatz sequence is: " <<  LongestCollatzSequence(1000000) << endl;
	return 0;
}