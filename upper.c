#include <stdio.h>
#include <string.h>

int main()
{
	int		i,iSize;
	char	szInput[1024];
	
	printf("Input String = ");
	gets(szInput);	
	iSize = strlen(szInput);
	for(i=0;i<iSize;i++) {
		if ('a' <= szInput[i] && szInput[i] <= 'z') {
			szInput[i] = szInput[i] - ('a'-'A');	
		}
	}
	printf("Upper String = %s\n",szInput);
	return(0);
}

