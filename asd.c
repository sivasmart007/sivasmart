#include <stdio.h>
#include <string.h>
int main(int argc, char** argv)
{
	char strData[128] = {'\0'};
	int intMiddle = 0;
	
	do
	{
		puts("Please enter some data");
		gets(strData);
	} while(NULL == strData[0]);
	
	
	intMiddle = (int)(strlen(strData)/2);
	
	printf("The middle is [%c]\n", strData[intMiddle]);
}
