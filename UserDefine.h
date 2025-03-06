#include <stdio.h>

#ifndef UserDefineH
#define UserDefineH

typedef struct  _LinkedList {
    char    szName[128];
    int     iScore;
    struct  _LinkedList *pNext, *pPrev; 
} LinkedList;

#endif