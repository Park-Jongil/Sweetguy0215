#include <stdio.h>
#include <string.h>

int main()
{
	int		i,iMin,iMax;
	int		iArray[16];
	
	printf("Input 10 Numbers = ");
	for(i=0;i<10;i++) scanf("%d",&iArray[i]);	
	iMin = iMax = iArray[0];
	for(i=0;i<10;i++) {

	}
	printf("Output 10 Numbers = ");
	for(i=0;i<10;i++) printf("%d ",iArray[i]);	
	printf("\nMin Number = %d\n",iMin);
	printf("Max Number = %d\n",iMax);

	return(0);
}
