#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

double myatof(char *str);


int main(void)
{
	
	char a[20] = "-126.34adana";
	double b= myatof(a);
	printf("b: %lf", b);


	return 0;
}

double myatof(char* str)
{
	int sizeOfArray = strlen(str);
	double result = 0;
	int counterForWholePartition = 0, counterForCommaPartition = 0;
	int i = 0;
	char *temp;
	if((temp = (char *)malloc(sizeOfArray+1))==NULL)
	{
		fprintf(stderr, "cannot allocate memory!..\n");
        exit(EXIT_FAILURE);
	}
	if ( str[0] == '-')
	{
		i= 1;
		
	}
	for (int j = 0; i < sizeOfArray && (isdigit(str[i]) || str[i] == '.'); i++, j++)
	{
		memmove(&temp[j], &str[i], sizeof(char));
		if (str[i] == '.')
			counterForWholePartition = j;
			
	}
	temp[i] = '\0';
	
	if (counterForWholePartition > 0)
		counterForCommaPartition = strlen(temp) - counterForWholePartition - 1;

	for (int i = 0, j = counterForWholePartition -1; temp[i] != '\0'; i++, j--)
	{
		if (counterForWholePartition != 0 && i > counterForWholePartition )
			result += (double)(temp[i] - 48) * pow(10, -(counterForCommaPartition -j));
		else
		{
			if (counterForWholePartition == 0)
				result += (double)(temp[i] - 48) * pow(10, strlen(temp) - i-1);
			else if (str[i] != '.')
				result += (double)(temp[i] - 48) * pow(10, counterForWholePartition - i-1);
			j = counterForCommaPartition;

		}
	}
	if ( str[0] == '-')
		result = result*-1;
	free(temp);
	
	return result;

}

