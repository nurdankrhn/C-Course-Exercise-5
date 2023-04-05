#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <string.h>




int myatoi (char *str);

int main ()
{
    char s[]= "ab10a";
    int b = myatoi(s);
    printf("%d\n", b);





    return 0;
}

int myatoi (char *str)
{
    int a = 0, counter =0;
    for (int i = 0; i < strlen(str); i++)
    {
           
        if( isdigit (str[i]) && counter > 0 )
            a= a * pow(10,1) + str[i] -48;

        else if (isdigit (str[i]) && counter == 0) //ab123  a+= a * 10^1 + str[i] 
        {
            a = str[i] -48;
            counter ++;
        }
           

    }

    return a;
}
