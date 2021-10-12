#include<string.h>
#include<ctype.h>
#include<stdio.h>

int indexOf(char* , char);

int main()
{
	char msg[] = "ENGLISH-CHANGE-TO-MORSE";
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ-";
	const char* m[] = {
		".-",//A-Z
		"-...",
		"-.-.",
		"-..",
		".",
		"..-.",
		"--.",
		"....",
		"..",
		".---",
		"-.-",
		".-..",
		"--",
		"-.",
		"---",
		".--.",
		"--.-",
		".-.",
		"...",
		"-",
		"..-",
		"...-",
		".--",
		"-..-",
		"-.--",
		"--..",
		"-....-"//-
	};
	for (int i = 0; i < strlen(msg); ++i)
	{
		int position = indexOf(a, toupper(msg[i]));
		if (position != -1)
		{
			printf("%s\n", m[position]);
		}
	}
	return 0;
}

int indexOf(char* haystack, char c)
{
	for (int i = 0; i < strlen(haystack); i++)
	{
		if (c == haystack[i])
		{
			return i;
		}
	}
	return -1;
}
