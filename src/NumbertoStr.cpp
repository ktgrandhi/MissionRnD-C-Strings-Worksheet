/*
OVERVIEW: Given a float number ,Convert it into a string 

INPUTS: A Float,Final string ,How many digits after decimal has to be displayed .
Its zero for integers.


OUTPUT: No need to output anything ,Modify the str in function parameter such that it
now holds the string format of the float number specified

Example : number_to_str(345,str,0);
Should copy "345\0" in the str;
number_to_str(345.342,str,2);
Should copy "345.34" in the str;

NOTES: Don't create new string.

*/

#include <stdio.h>


void number_to_str(float number, char *str, int afterdecimal){
	int num, index = 0, temp = 0;
	char digit;
	while (temp < afterdecimal)
	{
		number *= 10;
		temp++;
	}
	num = number;
	if (number < 0)
	{
		str[0] = '-';
		index++;
		num *= -1;
	}
	temp = num;
	while (temp > 0)
	{
		digit = temp % 10 + '0';
		temp /= 10;
		index++;
	}
	temp = index - afterdecimal;
	for (; num>0; index--)
	{
		if (index == temp)
		{
			str[index] = '.';
			continue;
		}
		str[index] = num % 10 + '0';
		num /= 10;
	}


}
