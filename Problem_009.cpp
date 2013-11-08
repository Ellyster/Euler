/************************************************************************************************************************************************
 * Problem 9 - Special Pythagorean triplet																										*
 *																																				*
 *                                    																											*
 * A Pythagorean triplet is a set of three natural numbers, a < b < c, for wich,																*
 * 								a^2 + b^2 = c^2																									*
 * 	       																																		*
 * example, 3^2 + 4^2 = 9 + 16 = 25 = 5^2																										*
 * 																																				*
 * There exists exactly one Pythagorean triplet for wich a + b + c = 1000																		*
 * Find the product abc.																														*
 *																																		  		*
 * 																																		   		*
 * Author: Alonso J. Gragera Aguaza																												*
 * Date: 8/11/2012																																*
 ************************************************************************************************************************************************/


#include <iostream>
#include <string>

using namespace std;

bool isPythagorean (int a, int b, int c)
{
	if(a*a + b*b == c*c)
		return true;
	return false;
}

int tripletProduct(int n)
{
	for (int i = 1;  i < n; ++i)
	{
		for (int j = i+1; (j < n) && (n-i-j > j); ++j)
		{
			if (isPythagorean(i,j,n-i-j))
			{
				return i*j*(n-i-j);
			}
		}
	}
}


int main(int argc, char const *argv[])
{
	int product = tripletProduct(1000);
	

	cout << "The pythagorean triplet that sums 1000 is: " << product << endl;
	return 0;
}