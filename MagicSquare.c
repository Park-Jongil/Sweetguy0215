// MagicSquare.cpp : Defines the entry point for the console application.
#include <stdio.h>

int main(int argc, char* argv[])
{
	int		pMagicSquare[19][19];
	int		i , j , iMSize = 0;

	printf("Input Number = ");
	scanf("%d",&iMSize);

	int		iPx = iMSize / 2;
	int		iPy = iPx * -1;
	for(i=0;i<iMSize*iMSize;i++) {
		pMagicSquare[ (iPx+iMSize)%iMSize ][ (iPy+iMSize)%iMSize ] = i + 1;
//		printf("i = %d , Px = %d , Py = %d\n",i+1,iPx,iPy);
		if (i%iMSize==(iMSize-1)) {
			iPx = (iMSize / 2) - ((i+1)/iMSize);
			iPy = ((iMSize/2) * -1) + ((i+1)/iMSize);
		}
		 else {
			iPx++;
			iPy++;
		 }
	}

	for(i=0;i<iMSize;i++) {
		for(j=0;j<iMSize;j++) printf("%4d",pMagicSquare[j][i]);
		printf("\n");
	}
	return(0);
}

