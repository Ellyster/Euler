/************************************************************************************************************************************************
 * Problem 6 - 	Sum square difference																											*
 *																																				*
 *                                    																											*
 * The sum of the squares of the first ten natural numbers is,																					*
 * 12 + 22 + ... + 102 = 385																													*
 * 																																				*
 * The square of the sum of the first ten natural numbers is,																					*
 * (1 + 2 + ... + 10)2 = 552 = 3025																												*
 * 																																				*																																				*
 * Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 − 385 = 2640.			*
 * 																																				*
 * Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.						*																					*
 *																																		  		*
 * 																																		   		*
 * Author: Alonso J. Gragera Aguaza																												*
 * Date: 6/11/2012																																*
 ************************************************************************************************************************************************/


#include <iostream>
#include <vector>
//#include <pair>

using namespace std;



int SumOfSquares(int n)
{
	int sum = 0;

	for (int i = 1; i <= n; ++i)
	{
		sum += i*i;
	}

	return sum;
}

int SquareOfSum(int n)
{
	int sum = 0;

	for (int i = 1; i <= n; ++i)
	{
		sum += i;
	}

	return sum*sum;
}


int main(int argc, char const *argv[])
{

	cout << "The SquareOfSum - SumOfSquares is: " << SquareOfSum(100) - SumOfSquares(100) << endl;
	return 0;
}