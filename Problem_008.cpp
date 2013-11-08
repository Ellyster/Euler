/************************************************************************************************************************************************
 * Problem 8 - Largest product in a series																										*
 *																																				*
 *                                    																											*
 * Find the greatest product of five consecutive digits in the 1000-digit number.																*
 * 																																				*
 * 73167176531330624919225119674426574742355349194934																							*
 * 96983520312774506326239578318016984801869478851843																							*
 * 85861560789112949495459501737958331952853208805511																							*
 * 12540698747158523863050715693290963295227443043557																							*
 * 66896648950445244523161731856403098711121722383113																							*
 * 62229893423380308135336276614282806444486645238749																							*
 * 30358907296290491560440772390713810515859307960866																							*
 * 70172427121883998797908792274921901699720888093776																							*
 * 65727333001053367881220235421809751254540594752243																							*
 * 52584907711670556013604839586446706324415722155397																							*
 * 53697817977846174064955149290862569321978468622482																							*
 * 83972241375657056057490261407972968652414535100474																							*
 * 82166370484403199890008895243450658541227588666881																							*
 * 16427171479924442928230863465674813919123162824586																							*
 * 17866458359124566529476545682848912883142607690042																							*
 * 24219022671055626321111109370544217506941658960408																							*
 * 07198403850962455444362981230987879927244284909188																							*
 * 84580156166097919133875499200524063689912560717606																							*
 * 05886116467109405077541002256983155200055935729725																							*
 * 71636269561882670428252483600823257530420752963450																							*
 *																																		  		*
 * 																																		   		*
 * Author: Alonso J. Gragera Aguaza																												*
 * Date: 8/11/2012																																*
 ************************************************************************************************************************************************/


#include <iostream>
#include <string>

using namespace std;

int CtoI (char d)
{
	switch(d)
	{
		case '0':
			return 0;
			break;
		case '1':
			return 1;
			break;
		case '2':
			return 2;
			break;
		case '3':
			return 3;
			break;
		case '4':
			return 4;
			break;
		case '5':
			return 5;
			break;
		case '6':
			return 6;
			break;
		case '7':
			return 7;
			break;
		case '8':
			return 8;
			break;
		case '9':
			return 9;
			break;
		default:
			return 0;
			break;
	}
}


int main(int argc, char const *argv[])
{
	string digits = "73167176531330624919225119674426574742355349194934";
	digits += "96983520312774506326239578318016984801869478851843";
	digits += "85861560789112949495459501737958331952853208805511";
	digits += "12540698747158523863050715693290963295227443043557";
	digits += "66896648950445244523161731856403098711121722383113";
	digits += "62229893423380308135336276614282806444486645238749";
	digits += "30358907296290491560440772390713810515859307960866";
	digits += "70172427121883998797908792274921901699720888093776";
	digits += "65727333001053367881220235421809751254540594752243";
	digits += "52584907711670556013604839586446706324415722155397";
	digits += "53697817977846174064955149290862569321978468622482";
	digits += "83972241375657056057490261407972968652414535100474";
	digits += "82166370484403199890008895243450658541227588666881";
	digits += "16427171479924442928230863465674813919123162824586";
	digits += "17866458359124566529476545682848912883142607690042";
	digits += "24219022671055626321111109370544217506941658960408";
	digits += "07198403850962455444362981230987879927244284909188";
	digits += "84580156166097919133875499200524063689912560717606";
	digits += "05886116467109405077541002256983155200055935729725";
	digits += "71636269561882670428252483600823257530420752963450";

	int max = 0;

	for (int i = 0;  i < digits.length()-4; ++i)
	{
		int temp = CtoI(digits[i]) * CtoI(digits[i+1]) * CtoI(digits[i+2]) * CtoI(digits[i+3]) * CtoI(digits[i+4]);

		if (temp > max)
		{
			max = temp;
		}
	}

	cout << "The biggest product of 5 consecutive digits is: " << max << endl;
	return 0;
}