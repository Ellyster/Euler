/************************************************************************************************************************************************
 * Problem 4 - Largest palindrome product																										*
 *																																				*
 *                                    																											*
 * 																																				*
 * A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.		*
 * 																																				*
 * Find the largest palindrome made from the product of two 3-digit numbers.																	*
 *																																				*
 *																																		  		*
 * 																																		   		*
 * Author: Alonso J. Gragera Aguaza																												*
 * Date: 6/11/2012																																*
 ************************************************************************************************************************************************/


#include<iostream>

using namespace std;

int reverseint(int num)
{
        int inv = 0;

        while (num > 0)
        {
                inv = inv * 10 + (num % 10);
                num = num / 10;
        }

        return inv;
}

bool isPalindrom(int n)
{
	if (n == reverseint(n))
	{
		return true;
	}
	else
	{
		return false;
	}
}

int LargestPalindromNumber(int n)
{
	int maxPalindrome;
	int candidate;

	int a = n;

	for (a; a > 0; --a)
	{
		for (int b = a; b > 0; --b)
		{
			candidate = a*b;

			if (isPalindrom(candidate))
				if (candidate > maxPalindrome)
					maxPalindrome = candidate;
		}
	}

	return maxPalindrome;
}


int main(int argc, char const *argv[])
{
	unsigned long long p;

	p = LargestPalindromNumber(999);

	cout << "The largest palindrome is: " << p << endl;
	return 0;
}