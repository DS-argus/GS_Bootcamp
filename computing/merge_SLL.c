#include <stdio.h>
#include <stdlib.h>

typedef struct nodeType LinkedNode;
struct nodeType{
    LinkedNode *next;
    int val;
};

LinkedNode* merge(LinkedNode *LL1, LinkedNode *LL2){

    LinkedNode sentinel = {NULL, 0};
    LinkedNode *newlist = &sentinel;

    LinkedNode *curNode1 = LL1;
    LinkedNode *curNode2 = LL2;

    // 둘 다 NULL이면 종료 (둘 다 하나도 없거나 둘 다 모두 끝났으면)
    while (1){
        
        if(curNode1 == NULL && curNode2 == NULL){
            break;
        }

        // LL1은 끝났고 LL2만 남아있음
        if (curNode1 == NULL && curNode2 != NULL)
        {
            newlist->next = curNode2;
            curNode2 = curNode2->next;
        
        // LL2는 끝났고 LL1만 남아있음
        }else if (curNode1 != NULL && curNode2 == NULL)
        {
            newlist->next = curNode1;
            curNode1 = curNode1->next;

        // 둘 다 남아있고 LL2 값이 더 작음    
        }else if (curNode1->val > curNode2->val)
        {     
            newlist->next = curNode2; 
            curNode2 = curNode2->next;

        // 둘 다 남아있고 LL1 값이 더 작음
        }else{
            newlist->next = curNode1;
            curNode1 = curNode1->next;
        }           

        // newlist 
        newlist = newlist->next;
    }
    
    return sentinel.next;   
}


int main(void){
    LinkedNode LL11 = {NULL, 0};
    LinkedNode LL12 = {NULL, 4};
    LinkedNode LL13 = {NULL, 9};
    LinkedNode LL14 = {NULL, 53};
    LinkedNode LL15 = {NULL, 65};
    LinkedNode LL16 = {NULL, 70};

    LL11.next = &LL12;
    LL12.next = &LL13;
    LL13.next = &LL14;
    LL14.next = &LL15;
    LL15.next = &LL16;

    LinkedNode LL21 = {NULL, 5};
    LinkedNode LL22 = {NULL, 14};
    LinkedNode LL23 = {NULL, 25};
    LinkedNode LL24 = {NULL, 48};
    LinkedNode LL25 = {NULL, 50};
    LinkedNode LL26 = {NULL, 60};
    LinkedNode LL27 = {NULL, 98};
    LinkedNode LL28 = {NULL, 120};


    LL21.next = &LL22;
    LL22.next = &LL23;
    LL23.next = &LL24;
    LL24.next = &LL25;
    LL25.next = &LL26;
    LL26.next = &LL27;
    LL27.next = &LL28;

    LinkedNode* curNode = merge(&LL11, &LL21);

    while (curNode != NULL)
    {
        printf("%d\n", curNode->val);
        curNode = curNode->next;
    }
    
    return 0;
}