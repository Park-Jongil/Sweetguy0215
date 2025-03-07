#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define MAX 100

int main(void)
{
	int		iArray[MAX],i,flag,iFind,temp;
    int     iStart,iEnd,iMid;
	
// 임의의 수 10개를 생성하여 출력    
	srand(time(NULL));   
	for(i=0;i<MAX;i++) iArray[i] = rand() % 10000;
// 숫자를 정렬
    do {
        flag = 0;
        for(i=0;i<(MAX-1);i++) {
            if (iArray[i] > iArray[i+1]) {
                temp = iArray[i];
                iArray[i] = iArray[i+1];
                iArray[i+1] = temp;
                flag = 1;
            }
        }
    } while(flag==1);	
	printf("Random = ");
	for(i=0;i<MAX;i++) printf("%d, ",iArray[i]);

// 찾을 숫자를 입력받아서 배열에 있는지 검색
	printf("\nFind Num = ");
    scanf("%d",&iFind);
    iStart = 0;
    iEnd = MAX - 1;
    while(iStart <= iEnd) {
        iMid = (iStart + iEnd) / 2;
        printf("iStart = %d, iEnd = %d, iMid = %d\n",iStart,iEnd,iMid);
        if (iArray[iMid] == iFind) break;
        else if (iArray[iMid] < iFind) iStart = iMid + 1;
        else iEnd = iMid - 1;
    }  
    if (iArray[iMid] == iFind) printf("Found at %d\n",iMid);
    else printf("Not Found\n");
    return 0;
}