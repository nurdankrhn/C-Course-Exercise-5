# C-Course-Exercise-5

/*****exercise5.1*****/

:pushpin:Standart C'deki atoi fonksiyonunu myatoi ismiyle aşağıdaki prototipe uygun biçimde yazarak test ediniz:

int myatoi(char *str);

/*****exercise5.2*****/

:pushpin:Standart C'deki atof fonksiyonunu myatof ismiyle aşağıdaki prototipe uygun biçimde yazarak test ediniz:

double myatof(char *str);

/*****exercise5.3*****/

:pushpin:int bir değeri yazıya dönüştüren itostr isimli fonksiyonu aşağıdaki prototipe uygun olarak yazınız:

char *itostr(int val, char *str);

Fonksiyon birinci parametresiyle aldığı int değeri yazıya dönüştürerek ikinci parametresiyle belirtilen char diziye yerleştirir. Yazının sonuna null karakteri eklemeyi unutmayınız.

#include <stdio.h>

char *itostr(int val, char *str);

int main(void)
{

	int val;
	char s[64];

	printf("Bir sayı giriniz:");
	scanf("%d", &val);
	itostr(val, s);		
	puts(s)

	return 0;
}


/*****exercise5.4*****/

:pushpin:strstr fonksiyonunu mystrstr ismiyle yazıp test ediniz. Fonksiyon aşağıdaki gibi bir prototipe 
sahip olmalıdır:

char *strstr(char *s1, char *s2);

/*****exercise5.5*****/

:pushpin:Standart olmayan ancak bazı derleyicilerde bulunan aşağıdaki fonksiyonları yazıp test ediniz:

char *strupr(char *str);

char *strlwr(char *str);

char *strrev(char *str);

int stricmp(char *str1, char *str2);

char *strset(char *str, int ch);

strupr yazının tüm karakterlerini büyük harfe, strlwr ise küçük harfe dönüşştürür. Burada toupper ve tolower fonksiyonlarını kullanabilirsiniz. strrev bir yazıyı ters yüz etmektedir. stricmp yazıyı büyük harf küçük harf duyarlılığı olmadna karşılaştırır. strset bir yazıyı belli bir karakterle doldurur. char * geri dönüş değerine sahip olan fonksiyonlar birinci parametresiyle belirtilen adresin aynısına geri dönmektedir.



