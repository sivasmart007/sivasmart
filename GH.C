#include <stdio.h>
#include<string.h>
int main() 
{
	char a[100];
	int n,i,count=0;
	scanf("%[^\t\n]s",a);
	n=strlen(a);
	for(i=0;i<n;i++)
	{
	   if(a[i]==' ')
	    {
	        count++;
	    }
	}
	printf("%d",count);
	return 0;
}
