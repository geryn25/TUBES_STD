#include "list_child.h"

void createList_child(List_child &L) {
    first(L) = NULL;
}

address_child alokasi(infotype_child x) {
    address_child P = new elmlist_child;
    info(P) = x;
    next(P) = NULL;
    return P;
}

void insertFirst(List_child &L, address_child P) {
    if(first(L) == NULL) {
        first(L) = P;
    } else {
        next(P)=first(L);
        first(L)=P;
    }
}

void printInfo(List_child L) {
    address_child P = first(L);
    while(P !=NULL) {
        cout<<"->"<<info(P)<<endl;
        P = next(P);
    }
}


address_child findElm(List_child L, infotype_child x) {
    address_child P = first(L);
    while(P != NULL) {
        if(info(P)==x) {
            return P;
        }
        P = next(P);
    }
    return NULL;
}

void insertAfter(address_child &Prec, address_child P) {
    if (Prec!=NULL) {
        next(P)=next(Prec);
        next(Prec)=P;
    }
}

void insertLast(List_child &L, address_child P) {
    address_child Q;
    Q=first(L);
    if (first(L)==NULL) {
        insertFirst(L,P);
    } else {
        while (next(Q)!=NULL) {
            Q=next(Q);
        }
        next(Q)=P;
    }
}

void deleteLast(List_child &L, address_child &P) {
    address_child Q;
    Q=first(L);
    while (next(next(Q))!=NULL) {
        Q=next(Q);
    }
    P=next(Q);
    next(Q)=NULL;
}

void deleteFirst(List_child &L, address_child P) {
    if (first(L)!=NULL) {
        P=first(L);
        first(L)=next(P);
        next(P)=NULL;
    }
}

void deleteAfter(address_child Prec, address_child &P) {
    if (Prec!=NULL) {
        P=next(Prec);
        next(Prec)=next(P);
        next(P)=NULL;
    }
}

