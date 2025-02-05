#include <stdio.h>

int main(void)
{
  int inNum,iChkNum,i;
 
  printf("소인수분해 숫자 = ");
  scanf("%d",&inNum);
  iChkNum = inNum;
  printf("소인수분해 = ");
  do {  	
  	for(i=2;i<=iChkNum;i++) {
    	if (iChkNum%i==0) {
    		printf("%d , ",i);
    		iChkNum = iChkNum / i;
			break;
		}    	
  	}	  	
  }while(iChkNum!=1);
  return 0;
}

