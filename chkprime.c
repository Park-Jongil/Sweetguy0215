#include <stdio.h>

int main(void)
{
  int inNum,i;
 
  printf("�ڼ� �Ǻ��� ���� = ");
  scanf("%d",&inNum);
  for(i=2;i<inNum;i++) {
    if (inNum%i==0) break;
  }
  if (inNum==i) {
    printf("%d �� �ڼ��̴�\n",inNum);
  } else {
    printf("%d �� �ڼ��� �ƴϴ�\n",inNum);
  }
  return 0;
}

