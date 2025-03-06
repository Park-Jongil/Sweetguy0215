#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#define MAX 1024

int PrintTree(int *iArray,int iPos,int iDepth);

int main(void)
{
	int		iArray[MAX],iChkNum,iPos,i;
	
	srand(time(NULL));   
	for(i=0;i<MAX;i++) iArray[i] = -1;
	for(i=0;i<20;i++) {
		iChkNum = rand() % 1000;
		iPos = 1;
		while(1) {
			if (iArray[iPos] == -1) {
				iArray[iPos] = iChkNum;
				break;
			}
			else if (iArray[iPos] > iChkNum) iPos = iPos * 2;
			else iPos = iPos * 2 + 1;
		}
	}
	
	printf("Tree Output = \n");
	PrintTree(iArray,1,0);
  	return 0;
}

int PrintTree(int *iArray,int iPos,int iDepth)
{
	int		i;
	
	if (iArray[iPos] == -1) return 0;
	PrintTree(iArray,iPos*2+1,iDepth+1);
	for(i=0;i<iDepth;i++) printf("    ");
	printf("%d\n",iArray[iPos]);
	PrintTree(iArray,iPos*2,iDepth+1);
	return 0;
}
