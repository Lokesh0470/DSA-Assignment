#include<stdio.h>
int main()
{
	char s[100],t[100];
	char *str1 = s;
	char *str2 = t;
	
	printf("Enter the string: \n");
	scanf("%s", &s);
	
	while(*(str2++) = *(str1++));
	
	printf("First string = %s\n", s);
    printf("Second string = %s\n", t);
    
    return 0;
}
