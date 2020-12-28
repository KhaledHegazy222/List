/********************* Global.h *********************/

#ifndef GLOBAL_H
    #define GLOBAL_H



    typedef struct ElementType{
        int year;
        float age;
        int tmp;
    }ElementEntry;

    #define MAXELEMENT 100

        // for the Queue
        #define QueueEntry ElementEntry
        #define MAXQUEUE MAXELEMENT

        // for the Stack
        #define StackEntry ElementEntry
        #define MAXSTACK MAXELEMENT

        // for the Stack
        #define ListEntry ElementEntry
        #define MAXLIST MAXELEMENT




#endif
