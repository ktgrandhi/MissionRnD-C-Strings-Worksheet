/*
OVERVIEW: Given a string, reverse all the words not the string.

E.g.: Input: "i like coding". Output: "coding like i"

INPUTS: A string.

OUTPUT: Modify the string according to the logic.

NOTES: Don't create new string.
*/
#include <Stdio.h>
#include <string.h>
void Swap(char *a, char *b)
{
	char temp = *a;
	*a = *b;
	*b = temp;
}
void ReverseWord(char *word, int first, int last)
{
	int index;
	char temp;
	for (index = first; index<last; index++, last--)
	{
		temp = word[index];
		word[index] = word[last];
		word[last] = temp;
	}
}

void str_words_in_rev(char *input, int len){
	int index, count = 0, firstIndex = 0, lastIndex = 0;
	for (index = 0; index < len; index++)
	{
		if (input[index] == ' ')
			count++;
	}
	if (count == 0)
		return;
	else
	{
		ReverseWord(input, 0, len - 1);
		for (index = 0; index < len; index++)
		{
			if (input[index] == ' ')
			{
				lastIndex = index - 1;
				ReverseWord(input, firstIndex, lastIndex);
				firstIndex = index + 1;
			}
		}
		if (index == len)
			ReverseWord(input, firstIndex, len - 1);

	}


}

