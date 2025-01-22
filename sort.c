#include <stdio.h>

int main()
{
	int		i,flag,temp;
	int		iArray[10];
	
	printf("Input 10 Numbers = ");
	for(i=0;i<10;i++) scanf("%d",&iArray[i]);
	do {
		flag = 0;
		for(i=0;i<(10-1);i++) {
			if (iArray[i] > iArray[i+1]) {
				temp = iArray[i];
				iArray[i] = iArray[i+1];
				iArray[i+1] = temp;
				flag = 1;
			}
		}
	} while(flag==1);	
	printf("Sorted Numbers = ");
	for(i=0;i<10;i++) printf("%d ",iArray[i]);

	return(0);
}

