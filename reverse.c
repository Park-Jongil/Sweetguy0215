#include <stdio.h>
#include <string.h>

int main()
{
	int		i,iSize;
	char	szInput[1024],temp;
	
	printf("Input String = ");
	scanf("%s",szInput);	
	iSize = strlen(szInput);
	for(i=0;i<iSize/2;i++) {
		temp = szInput[i];
		szInput[i] = szInput[iSize-i-1];
		szInput[iSize-i-1] = temp; 	
	}
	printf("Reverse String = %s\n",szInput);
	return(0);
}
