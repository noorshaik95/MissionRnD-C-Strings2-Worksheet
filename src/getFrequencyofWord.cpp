/*

Problem : Return the Count of how many times the word occurred in given string in two ways
Way1: Not using Recursion
Way2:Using Recursion [Optional]

Input : "Hello HelloAgain HelloAGAINAGAIN commonItsHelloagain","Hello"
Output : 4

Note: Dont modify original str or word,Just return count ,Spaces can also be part of words like "ab cd" in "ab cd ab cd" returns 2
*/

#include <stdlib.h>

int count_word_in_str_way_1(char *str, char *word){
	int len, count = 0, temp1 = 0, number = 0, i;
	for (len = 0; word[len] != '\0'; len++);
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == word[temp1])
		{
			count++;
			temp1++;
			if (count == len)
			{
				if (str[i] == str[i - 1] && len == 2)
				{
					number++;
				}
				number++;
				temp1 = 0;
				count = 0;
			}
		}
		else
		{
			count = 0;
			temp1 = 0;
		}

	}
	return number;
}

int count_word_int_str_way_2_recursion(char *str, char *word){
	return 0;
}

