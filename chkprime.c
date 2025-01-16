#include <stdio.h>

int main(void)
{
  int inNum,i;
 
  printf("솟수 판별할 숫자 = ");
  scanf("%d",&inNum);
  for(i=2;i<inNum;i++) {
    if (inNum%i==0) break;
  }
  if (inNum==i) {
    printf("%d 는 솟수이다\n",inNum);
  } else {
    printf("%d 는 솟수가 아니다\n",inNum);
  }
  return 0;
}

