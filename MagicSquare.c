// MagicSquare.cpp : Defines the entry point for the console application.
#include <stdio.h>

int main(int argc, char* argv[])
{
	int		pMagicSquare[19][19];
	int		i , j , iMSize = 0;

	printf("Input Number = ");
	scanf("%d",&iMSize);

	int start =1;
	int half = iMSize*3/2;
	for(int c=0; c<iMSize; c++) {			
		for(int r=0; r<iMSize; r++) {
			pMagicSquare[(c*2-r+iMSize)%iMSize][(r-c+half)%iMSize]=start++;			
		}
	}
	int		iPx = iMSize / 2;
	int		iPy = iPx * -1;
	for(i=0;i<iMSize*iMSize;i++) {
		pMagicSquare[ (iPx+iMSize)%iMSize ][ (iPy+iMSize)%iMSize ] = i + 1;
		if (i%iMSize==(iMSize-1)) iPy--;
		 else iPx++,iPy++;
	}

	for(i=0;i<iMSize;i++) {
		for(j=0;j<iMSize;j++) printf("%4d",pMagicSquare[j][i]);
		printf("\n");
	}
	return(0);
}

