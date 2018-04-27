#ifndef LIST_PARENT_H_INCLUDED
#define LIST_PARENT_H_INCLUDED

#include <iostream>
using namespace std;

#define first(L) L.first
#define next(P) P->next
#define info(P) P->info
#define prev(P) P->prev
#define last(L) L.last

struct infotype_parent{
    string JudulBuku;
    int ID;
};

typedef struct elmlist_parent *address_parent;

struct elmlist_parent {
    infotype_parent info;
    address_parent next;
    address_parent prev;
};

struct List_parent {
    address_parent first;
    address_parent last;
};


/** TIDAK PERLU MODIFIKASI */
void createList_parent(List_parent &L);
void insertFirst(List_parent &L, address_parent P);
void insertAfter(List_parent &L, address_parent Prec, address_parent P);
void insertLast(List_parent &L, address_parent P);
void deleteFirst(List_parent &L, address_parent &P);
void deleteLast(List_parent &L, address_parent &P);
void deleteAfter(List_parent &L, address_parent Prec, address_parent &P);
bool duplicate (List_parent L, infotype_parent x);


/** PERLU MODIFIKASI */
address_parent alokasi_parent(infotype_parent x);
void dealokasi(address_parent &P);
address_parent findElm(List_parent L, infotype_parent x);
address_parent findElmName(List_parent L, infotype_parent x);
void printInfo(List_parent L);


#endif // LIST_PARENT_H_INCLUDED
