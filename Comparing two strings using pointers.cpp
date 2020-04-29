#include<stdio.h>
int main()
{
	char s[100],t[100],*p1,*p2;
	int f;
	printf("Enter text for string1: ");
	gets(s);
	printf("Enter text for string2: ");
	gets(t);
	
	p1=s;
	p2=t;
	
	while(p1!= '\0' || p2!= '\0')
	{
		if(*p1!=*p2)
		f=1;
		break;
	}
	if(f==0)
	{
		printf("Strings are same");
	}
	else
	{
		printf("Strings are not same");
	}
	
	return 0;
	
}

