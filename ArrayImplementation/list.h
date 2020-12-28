#include "global.h"


#ifndef LIST_H
    #define LIST_H



    typedef struct list{
        ListEntry entry[MAXLIST];
        int size;
    }List;


    void CreateList (List*);
    void DestroyList (List*);

    int ListEmpty (List*);
    int ListFull (List*);

    void InsertList (int, ListEntry, List*);
    void DeleteList (int, ListEntry*, List*);

    void TraverseList(List*, void(*)(ListEntry));
    int ListSize (List*);

    void RetrieveList (int , ListEntry*, List*);
    void Replace (int, ListEntry, List*);




#endif
