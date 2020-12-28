#include "global.h"
#include "list.h"


    void CreateList (List* l){
        l->size = 0;
    }

    int ListEmpty(List* l){
        return !l->size;
    }

    int ListFull(List* l){
        return l->size == MAXLIST;
    }

    void ListDestroy(List* l){
        l->size = 0;
    }

    int ListSize(List* l){
        return l->size;
    }





    void InsertList(int position,ListEntry e, List* l){
        for(int i = l->size;i>position;i--){
            l->entry[i] = l->entry[i-1];
        }
        l->entry[position] = e;
        l->size++;
    }





    void DeleteList (int position , ListEntry* e, List* l){
        *e = l->entry[position];
        for(int  i = position;i<l->size-1;i++){
            l->entry[i] = l->entry[i+1];
        }
        l->size--;
    }




    void RetrieveList(int position,ListEntry* e,List* l){
        *e = l->entry[position];
    }

    void ReplaceList(int position, ListEntry* e, List* l){
        *e = l->entry[position] ;
    }


    void TraverseList (List* l,void(*visit)(ListEntry)){
        for(int i = 0;i<l->size;i++){
            (*visit)(l->entry[i]);
        }
    }


