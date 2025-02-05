#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
  char szInput[1024];
  int  iCountChar[26],iSize,i;
  
  for(i=0;i<26;i++) iCountChar[i] = 0;
  printf("Input String = ");
  scanf("%s",szInput);
  iSize = strlen(szInput);
  for(i=0;i<iSize;i++) {
    if (isalpha(szInput[i])==1) iCountChar[szInput[i]-'A']++;  
    if (isalpha(szInput[i])==2) iCountChar[szInput[i]-'a']++;  
  }
  for(i=0;i<26;i++) {
    printf("%c = %d\n",'A'+i,iCountChar[i]);
  }
}
