#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
	int		iArray[10],i,flag,iFind,temp;
	
// 임의의 수 10개를 생성하여 출력    
	srand(time(NULL));   
	for(i=0;i<10;i++) iArray[i] = rand() % 1000;
// 숫자를 정렬
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
	printf("Random = ");
	for(i=0;i<10;i++) printf("%d, ",iArray[i]);

// 찾을 숫자를 입력받아서 배열에 있는지 검색
	printf("\nFind Num = ");
    scanf("%d",&iFind);
    for(i=0;i<10;i++) if(iArray[i] == iFind) break;
    if (i<10) printf("Found at %d\n",i);
    else printf("Not Found\n");
    return 0;
}