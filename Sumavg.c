#include <stdio.h>

int main()
{
	int		i,iSum=0;
	int		iArray;
	
	printf("Input 10 Numbers = ");
	for(i=0;i<10;i++) {
		scanf("%d",&iArray);
		if (iArray==0) break;
		iSum += iArray;
	}	
	printf("\nSum = %d\n",iSum);
	printf("Average = %4.2f\n",(double)iSum/i);

	return(0);
}

