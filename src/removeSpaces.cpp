/*
OVERVIEW: Given a string, remove all spaces in it.
E.g.: Input: "abd scd". Output: "abdscd"

INPUTS: A string.

OUTPUT: Return string after removing spaces.

ERROR CASES: Return '\0' for invalid inputs.

NOTES: Don't create new string.
*/

void Swap(char *Input, int spaceIndex)
{
	int index1, index2;
	index1 = spaceIndex;
	while (Input[spaceIndex] == ' ' && Input[spaceIndex] != '\0')
		spaceIndex++;
	index2 = spaceIndex;
	for (; Input[index2] != '\0'; index1++, index2++)
	{
		Input[index1] = Input[index2];
	}
	Input[index1] = '\0';

}

char* removeSpaces(char *str) {
	int index;
	if (str == "" || str == '\0')
		return '\0';
	for (index = 0; str[index] != '\0'; index++)
	{
		if (str[index] == ' ')
			Swap(str, index);
	}
	return str;
}
