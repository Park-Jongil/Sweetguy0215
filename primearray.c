#include <stdio.h>

int main(void)
{
  int 	i,j;
  int	iArray[100];

  for(i=0;i<100;i++) iArray[i] = 1;
  iArray[0] = iArray[1] = 0; 
  for(i=0;i<100;i++) {
    if (iArray[i]==1) {
    	for(j=i+i;j<100;j+=i) iArray[j] = 0;
	}    
  }
  printf("Prime Number = ");
  for(i=0;i<100;i++) {
  	if (iArray[i]==1) printf("%d, ",i);
  }
  return 0;
}

