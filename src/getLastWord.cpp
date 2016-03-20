/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>

char * get_last_word(char * str){
	int i, len, temp1, temp2, temp3;
	char *str1;
	for (len = 0; str[len] != '\0'; len++);
	len--;
	for (temp1 = len; str[temp1] == ' '; temp1--);
	for (temp2 = temp1; temp2 >= 0; temp2--)
	{
		if (str[temp2] == ' ')
			break;
	}

	if (temp1 == len && temp2<0)
	{
		return str;
	}
	str1 = (char *)malloc(sizeof(char)*((temp1 - temp2) + 1));
	temp2++;
	for (i = 0; temp2 <= temp1; i++, temp2++)
	{
		str1[i] = str[temp2];
	}
	str1[i] = '\0';
	return str1;
}
