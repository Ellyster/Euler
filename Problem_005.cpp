/************************************************************************************************************************************************
 * Problem 5 - 	Smallest multiple																												*
 *																																				*
 *                                    																											*
 * 																																				*
 * 2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.									*
 * 																																				*	
 * What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?											*
 *																																				*
 *																																		  		*
 * 																																		   		*
 * Author: Alonso J. Gragera Aguaza																												*
 * Date: 6/11/2012																																*
 ************************************************************************************************************************************************/


#include <iostream>
#include <vector>
//#include <pair>

using namespace std;


vector<pair<int,int> > factors(int n)
{
	vector<pair<int,int> > f;

	int toDivide = n;
	int factor = 2;
	int counter = 0;

	while(toDivide > 1)
	{
		if (toDivide % factor == 0)
		{
			f.push_back(make_pair (factor,0));

			while(toDivide % factor == 0)
			{
				toDivide = toDivide / factor;
				f[counter].second++;
			}

			counter++;
		}

		factor++;
	}

	return f;
}


int MCM(int numbers[], int n)
{
	int mcm = 1;

	vector<pair<int,int> > MCMfactors;

	for (int i = 0; i < n; ++i)
	{
		vector<pair<int,int> > v = factors(numbers[i]);

		for (int j = 0; j < v.size(); ++j)
		{
			bool seen = false;

			for (int k = 0; k < MCMfactors.size(); ++k)
			{
				if (v[j].first == MCMfactors[k].first)
				{
					seen = true;
					if (v[j].second > MCMfactors[k].second)
					{
						MCMfactors[k].second = v[j].second;
					}
				}
			}

			if (!seen)
			{
				MCMfactors.push_back(v[j]);
			}
		}
	}

	for (int i = 0; i < MCMfactors.size(); ++i)
	{
		for (int j = 0; j < MCMfactors[i].second; ++j)
		{
			mcm *= MCMfactors[i].first;
		}
	}

	return mcm;
}


int main(int argc, char const *argv[])
{
	int n[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};

	int m = MCM(n,20);

	cout << "The M.C.M. is: " << m << endl;
	return 0;
}