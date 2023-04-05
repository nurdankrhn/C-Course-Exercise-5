#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>


char* strupr(char* str);
char* strlwr(char* str);
char* strrev(char* str);
int stricmp(char* str1, char* str2);
char* strset(char* str, int ch);

int main(void)
{
	char list[5] = "list";
	char array[10] = "nurdan";
	char str[10] = "NURDan";
	int a = stricmp(array, str);
	if (a == 0)
		printf("they are equal...\n");
	strupr(array);
	puts(array); /*NURDAN*/
	strlwr(array);
	puts(array); /*nurdan*/
	strrev(array);
	puts(array); /*nadrun*/
	strset(list, 'n');
	puts(list);




	return 0;
}

char* strupr(char* str)
{
	for (int i = 0; str[i] != NULL; i++)
		str[i] = toupper(str[i]);

	return str;
}

char* strlwr(char* str)
{
	for (int i = 0; str[i] != NULL; i++)
		str[i] = tolower(str[i]);

	return str;
}

char* strrev(char* str)
{
	int len = 0; char temp;
	//nurdan nurdan nardun nadrun
	for (int i = 0; str[i] != NULL; i++)
		len++;
	int cycle = len / 2;
	for (int i = 0; i < cycle; i++)
	{
		temp = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = temp;
	}

	return str;
}

int stricmp(char* str1, char* str2)
{
	for (int i = 0; str1[i] != NULL && str2[i] != NULL; i++)
		if (str1[i] == str2[i] || str1[i] - str2[i] == 32 || str2[i] - str1[i] == 32)
			continue;
		else if (str1[i] < str2[i])
			return -1;
		else if (str1[i] > str2[i])
			return 1;
	return 0;

}
char* strset(char* str, int ch)
{
	for (int i = 0; str[i] != NULL; i++)
		str[i] = ch;
	return str;
}
