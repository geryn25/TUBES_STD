#include "list_relasi.h"

/**List RELASI berupa SINGLE */

void createList_relasi(List_relasi &L) {
    first(L) = NULL;
}

address_relasi alokasi(address_parent P, address_child C) {
    address_relasi Q = new elmlist_relasi;
    child(Q) = C;
    parent(Q) = P;
    next(Q) = NULL;
    return Q;
}

address_relasi dealokasi_relasi(address_relasi &P){
    delete P;
    return NULL;
}

void printInfo(List_relasi L) {
    address_relasi P = first(L);
    while(P !=NULL) {
        cout<<"Judul Buku   : "<<info(parent(P))<<endl
            <<"Genre Buku   : "<<info(child(P))<<endl;
        cout<<endl;
        P = next(P);
    }
}

void insertFirst(List_relasi &L, address_relasi P) {
    first(L) = P;
}

void insertLast(List_relasi &L, address_relasi P) {
    address_relasi Q = first(L);
    while(next(Q)!= NULL) {
        Q = next(Q);
    }
    next(Q)=P;
}

void insertAfter(address_relasi &Prec, address_relasi P) {
    next(P) = next(Prec);
    next(Prec) = P;
}

void deleteFirst(List_relasi &L, address_relasi &P){
    if(first(L)!= NULL){
        P=first(L);
        first(L) = next(P);
        next(P) = NULL;
    }
}

void deleteLast(List_relasi &L, address_relasi &P){
    address_relasi Q = first(L);
    while(next(next(Q)) != P){
        Q = next(Q);
    }
    P = next(Q);
    next(Q) = NULL;
}

void deleteAfter(List_relasi &L,address_relasi Prec, address_relasi &P){
    P = next(Prec);
    next(Prec) = next(P);
    next(P) = NULL;

}

address_relasi findElm(List_relasi L, address_parent P, address_child C) {
    address_relasi Q = first(L);
    while(Q != NULL) {
        if(parent(Q)==P && child(Q)== C) {
            return Q;
        }
        Q = next(Q);
    }
    return NULL;
}


