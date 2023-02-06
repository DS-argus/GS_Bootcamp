#include <stdio.h>
#include <stdlib.h>


typedef struct nodeType LinkedNode;
struct nodeType{
    int val;
    LinkedNode *next;
};


LinkedNode* createNode(int x){
    LinkedNode *newNode;
    newNode = (LinkedNode*)malloc(sizeof(LinkedNode));

    newNode->val = x;
    newNode->next = NULL;

    return newNode;
}

typedef struct listType SLList;
struct listType{
    LinkedNode *first;
    int size;
};

void addFirst(SLList*, int x);
int getFirst(SLList*);
int getSize(SLList*);
void printSLList(SLList*);
LinkedNode *searchNode(SLList *, int);
void deleteNode(SLList*, int);

int main(void){
    SLList myLL = {NULL, 0};

    addFirst(&myLL, 10);
    printSLList(&myLL);

    addFirst(&myLL, 13);
    printSLList(&myLL);

    addFirst(&myLL, 54);
    printSLList(&myLL);

    deleteNode(&myLL, 10);
    printSLList(&myLL);

    addFirst(&myLL, 23);
    printSLList(&myLL);

    deleteNode(&myLL, 23);
    printSLList(&myLL);

    addFirst(&myLL, 4);
    printSLList(&myLL);

    addFirst(&myLL, 60);
    printSLList(&myLL);

    addFirst(&myLL, 89);
    printSLList(&myLL);
}


void addFirst(SLList *LL, int x){
    LinkedNode *newNode = createNode(x);
 
    newNode->next = LL->first;

    LL->first = newNode;

    LL->size++;
}

int getFirst(SLList *LL){
    if (LL->first != NULL)
    {
        return LL->first->val;
    }
    return 0;
}

int getSize(SLList *LL){
    if (LL->first != NULL)
    {
        return LL->size;
    }
    return 0;
}

void printSLList(SLList *LL){
    LinkedNode *curNode = LL->first;

    printf("size: %d, firstVal: %d, allVals: ", getSize(LL), getFirst(LL));

    while (curNode != NULL)
    {
        printf("%d -> ", curNode->val);

        curNode = curNode->next;
    }
    
    printf("END\n");
}

LinkedNode *searchNode(SLList *LL, int x){
    if (LL->first == NULL)
    {
        return NULL;
    }

    LinkedNode *curNode = LL->first;

    while (curNode != NULL)
    {
        if (curNode->val == x){
            return curNode;
        }
        curNode = curNode->next;
    }       
    return NULL;
}

void deleteNode(SLList *LL, int x){
    LinkedNode *targetNode = searchNode(LL, x);
    if (targetNode == NULL){
        return;
    }

    LinkedNode *curNode = LL->first;
    LinkedNode *prevNode;
    
    while (curNode != NULL)
    {
        if(curNode == targetNode){
            if (curNode == LL->first)
            {
                LL->first = curNode->next;
            }else{
                prevNode->next = curNode->next;
            }
            
            free(curNode);
            LL->size--;
            return;

        }else{
            prevNode = curNode;
            curNode = curNode->next;
        }
        
    }

}