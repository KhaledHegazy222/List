#include "list.h"
#include "global.h"
#include <stdlib.h>


void CreateList (List* l){
    l->head = NULL;
    l->size = 0;
}


int ListEmpty(List* l){
    return !l->head;
}

int ListFull(List* l){
    return 0;
}


int ListSize(List* l){
    return l->size;
}


void InsertList(int position , ListEntry e , List* l){
    ListNode* p2 = (ListNode*) malloc(sizeof(ListNode));
    p2->entry = e;
    if(position == 0){
        p2->next = l->head;
        l->head = p2;
    }

    else{
        ListNode* p1 = l->head;
        for(int i = 0;i < position-1 ;i++,p1 = p1->next);
        p2->next =  p1->next;
        p1->next =  p2;
    }
    l->size++;

}





void DeleteList(int position,ListEntry* e, List* l){
    ListNode* p = l->head;
    ListNode *q;

    if(position == 0){
        *e = l->head->entry;
        q = p->next;
        free(p);
        l->head = q;
    }

    for(int i = 0;i<position-1;i++,p=p->next);
    *e = p->next->entry;
    q = p->next->next;
    free(p->next);
    p->next = q;



    l->size--;


}







void DestroyList(List* l){
    ListNode* p = l->head;
    while(p){
        p = p->next;
        free(l->head);
        l->head = p;
    }
    l->size = 0;
}






void TraverseList (List* l, void(*visit)(ListEntry)){
    ListNode* p = l->head;
    for(p){
        (*visit)(p->entry);
        p = p->next;
    }
}

void RetrieveList(int position,ListEntry* e, List* l){
    ListEntry* p = l->head;
    for(int i = 0;i<position;i++,p = p->next);
    *e = p->entry;


}


void ReplaceList(int position,ListEntry* e,List* l){

    ListEntry* p = l->head;

        for(int i = 0;i<position;i++,p = p->next);
        p->entry = e;
    }
}
