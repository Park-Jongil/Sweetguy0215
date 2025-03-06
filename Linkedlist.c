#include <stdio.h>
#include "UserDefine.h"

LinkedList Root = { "", 0, NULL, NULL };

void PrintList(LinkedList *pHead) {
    LinkedList *pNode = pHead;
    while (pNode) {
        printf("%s: %d\n", pNode->szName, pNode->iScore);
        pNode = pNode->pNext;
    }
}

void AddNode(LinkedList *ppHead, LinkedList *pNode) {
    if (ppHead == NULL) {
        ppHead = pNode;
        return;
    }
    LinkedList *pTmp = ppHead;
    while (pTmp->pNext) {
        pTmp = pTmp->pNext;
    }
    pTmp->pNext = pNode;
    pNode->pPrev = pTmp;
}

void DeleteNode(LinkedList *ppHead, LinkedList *pNode) {
    if (ppHead == pNode) {
        ppHead = pNode->pNext;
    }
    if (pNode->pPrev) {
        pNode->pPrev->pNext = pNode->pNext;
    }
    if (pNode->pNext) {
        pNode->pNext->pPrev = pNode->pPrev;
    }
}

int main(void)
{
    LinkedList Item_1 = { "", 2, NULL, NULL };

    AddNode(&Root, &Item_1);
    PrintList(&Root);
}