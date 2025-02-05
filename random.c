#include <time.h>
#include <stdlib.h>

int main(void)
{
	int		iArray[10],i;
	
	srand(time(NULL));   
	for(i=0;i<10;i++) iArray[i] = rand() % 1000;
	printf("Random = ");
	for(i=0;i<10;i++) printf("%d, ",iArray[i]);
  	return 0;
}
