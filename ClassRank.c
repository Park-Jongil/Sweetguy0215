#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
	int		iKorean[10],iEnglish[10],iMath[10],iRank[10],iSum[10],i,j;
	
	srand(time(NULL)); 
// 임의의 랜덤숫자를 발생하여 10명의 세과목값을 생성한다.       
	for(i=0;i<10;i++) {
        iKorean[i] = rand() % 100;
        iEnglish[i] = rand() % 100;
        iMath[i] = rand() % 100;
        iRank[i] = 1;
    }
// 세과목을 합산하여 iSum 배열에 넣는다.    
	for(i=0;i<10;i++) {
        iSum[i] = iKorean[i] + iEnglish[i] + iMath[i];
    }
// 이중반복문을 이용하여 각각의 번호에서 다른번호 전체와 비교하여 자신의 합계보다 큰 값들의 숫자를 순위로 지정한다.     
	for(i=0;i<10;i++) {
        for(j=0;j<10;j++) {
            if (iSum[i]<iSum[j]) iRank[i]++;
        }
    }
// 세과목과 합계 및 순위를 출력한다.  이때 순서대로 출력하기 위하여 이중반복문을 사용한다.
    printf("Korean\tEnglish\tMath\tSum\tRank\n");
	for(i=0;i<10;i++) {
        for(j=0;j<10;j++) {
            if (i+1==iRank[j]) printf("%d\t%d\t%d\t%d\t%d\n",iKorean[j],iEnglish[j],iMath[j],iSum[j],iRank[j]);
        }
    }
  	return 0;
}
