#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
	int		iKorean[10],iEnglish[10],iMath[10],iRank[10],iSum[10],i,j;
	
	srand(time(NULL));   
	for(i=0;i<10;i++) {
        iKorean[i] = rand() % 100;
        iEnglish[i] = rand() % 100;
        iMath[i] = rand() % 100;
        iRank[i] = 1;
    }
	for(i=0;i<10;i++) {
        iSum[i] = iKorean[i] + iEnglish[i] + iMath[i];
    }
	for(i=0;i<10;i++) {
        for(j=0;j<10;j++) {
            if (iSum[i]<iSum[j]) iRank[i]++;
        }
    }

    printf("Korean\tEnglish\tMath\tSum\tRank\n");
	for(i=0;i<10;i++) {
        printf("%d\t%d\t%d\t%d\t%d\n",iKorean[i],iEnglish[i],iMath[i],iSum[i],iRank[i]);
    }
  	return 0;
}
