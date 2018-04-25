#include <iostream>

#include <stdio.h>
#include <string.h>
#include <cstdlib>
#include <conio.h>





using namespace std;
#include "list_child.h"
#include "list_relasi.h"
#include "list_parent.h"
#include <conio.h>

    address_parent A,B;
    infotype_parent W,Y,Z;
    address_child S;
    address_parent Q,DP;
    address_relasi I,DPP,PP;
    char X[100];
    bool t,PD;
    char g,o;
    int qwe,po,po1,po2;
void inputdata (List_parent &P, List_relasi &R, List_child &C) {
            cout<<" Judul Buku :";
            cin>>W;
            DP=findElm(P,W);
            if (DP==NULL) {
            A=alokasi_parent(W);
            insertLast(P,A);
            t=true;
            qwe=0;
            while (t==true && qwe<3) {
                cout<<" Genre Buku :" <<endl
                    <<" 1. Horror"<<endl
                    <<" 2. Science"<<endl
                    <<" 3. Roman"<<endl;
                PD=true;
                while (PD==true) {
                    cout<<" Pilih angka : ";
                    cin>>g;
                    if (g=='1' || g=='2' || g=='3') {
                        PD=false;
                    } else {
                        cout<<" inputan salah"<<endl;
                    }
                }


                if (g=='1') {
                    S=findElm(C,"Horror");
                    Q=findElm(P,W);
                    I=alokasi(Q,S);

                    if (first(R)==NULL) {
                        insertFirst(R,I);
                    } else {
                        DPP=findElm(R,Q,S);
                        if (DPP==NULL) {
                            insertLast(R,I);
                        }
                    }
                }
                if (g=='2') {
                    S=findElm(C,"Science");
                    Q=findElm(P,W);
                    I=alokasi(Q,S);
                    if (first(R)==NULL) {
                        insertFirst(R,I);
                    } else {
                        DPP=findElm(R,Q,S);
                        if (DPP==NULL) {
                            insertLast(R,I);
                        }
                    }
                }
                if (g=='3') {
                    S=findElm(C,"Roman");
                    Q=findElm(P,W);
                    I=alokasi(Q,S);
                    if (first(R)==NULL) {
                        insertFirst(R,I);
                    } else {
                        DPP=findElm(R,Q,S);
                        if (DPP==NULL) {
                            insertLast(R,I);
                        }
                    }

                }
                if (qwe<3) {
                cout<<"masukkan genre lagi? (Y/N) ";
                cin>>o;
                    if (o=='y' || o=='Y') {
                        t=true;
                    } else {
                        t=false;
                    }
                }

            }
            } else {
                cout<<"buku sudah ada"<<endl;
            }
}

void hapusdata(List_parent &P,List_child C, List_relasi &R) {
            cout<<"judul buku yang dihapus : ";
            cin>>Z;
            A=findElm(P,Z);
            S=findElm(C,"Horror");
            DPP=findElm(R,A,S);
            if (DPP!=NULL) {
                if (DPP=first(R)) {
                    deleteFirst(R,I);
                } else {
                    PP=first(R);
                    while (next(PP)!=DPP) {
                        PP=next(PP);
                    }
                    deleteAfter(R,PP,I);

                }
            }
            S=findElm(C,"Science");
            DPP=findElm(R,A,S);
            if (DPP!=NULL) {
                if (DPP=first(R)) {
                    deleteFirst(R,I);
                } else {
                    PP=first(R);
                    while (next(PP)!=DPP) {
                        PP=next(PP);
                    }
                    deleteAfter(R,PP,I);

                }
            }
            S=findElm(C,"Roman");
            DPP=findElm(R,A,S);
            if (DPP!=NULL) {
                if (DPP=first(R)) {
                    deleteFirst(R,I);
                } else {
                    PP=first(R);
                    while (next(PP)!=DPP) {
                        PP=next(PP);
                    }
                    deleteAfter(R,PP,I);

                }
            }
            deleteAfter(P,prev(A),Q);
}

void editbuku (List_parent &P, List_child &C, List_relasi &R) {
            cout<<"judul Buku yang diedit : "<<endl;
            cin>>Y;
            A=findElm(P,Y);
            if (A!=NULL) {
                cout<<" Judul Buku diganti menjadi : ";
                cin>>Y;
                info(A)=Y;

            }
}

void printParent(List_relasi L, infotype_parent P) {
    address_relasi Q= first(L);
    int i=0;
        while (Q!=NULL) {
            if (info(parent(Q))==P) {
                if (i==0) {
                    cout<<"Judul Buku   : "<<info(parent(Q))<<endl
                        <<"Genre Buku   : "<<info(child(Q));
                } else {
                    cout<<", "<<info(child(Q));
                }
            }
            i++;

            Q=next(Q);
        }
    cout<<endl;

}

void printgenre(List_relasi L) {
    address_relasi P=first(L);
    int i=0;
    cout<<"Horror :"<<endl;
    while (P!=NULL) {

        if (info(child(P))=="Horror") {
            i++;
    cout<<i<<". "<<info(parent(P))<<endl;
        }
        P=next(P);
    }
    i=0;
    P=first(L);
    cout<<endl;
    cout<<"Science :"<<endl;
    while (P!=NULL) {

        if (info(child(P))=="Science") {
            i++;
            cout<<i<<". "<<info(parent(P))<<endl;
        }
        P=next(P);
    }
    i=0;
    P=first(L);
    cout<<endl;
    cout<<"roman :"<<endl;
    while (P!=NULL) {

        if (info(child(P))=="Roman") {
            i++;
            cout<<i<<". "<<info(parent(P))<<endl;
        }
        P=next(P);
    }

}

void tambahgenre (List_parent &P, List_child &C, List_relasi &R) {
            cout<<"judul buku yang genre-nya akan ditambahkan :";
            cin>>Y;
            Q=findElm(P,Y);
            if (Q!=NULL) {
                cout<<" Genre Buku :" <<endl
                    <<" 1. Horror"<<endl
                    <<" 2. Science"<<endl
                    <<" 3. Roman"<<endl;
                PD=true;
                while (PD==true) {
                    cout<<" Pilih angka : ";
                    cin>>g;
                    if (g=='1' || g=='2' || g=='3') {
                        PD=false;
                    } else {
                        cout<<"inputan salah"<<endl;
                    }
                }


                if (g=='1') {
                    S=findElm(C,"Horror");
                    Q=findElm(P,Y);
                    I=alokasi(Q,S);
                    if (first(R)==NULL) {
                        insertFirst(R,I);
                    } else {
                        DPP=findElm(R,Q,S);
                        if (DPP==NULL) {
                            insertLast(R,I);
                        }
                    }
                }
                if (g=='2') {
                    S=findElm(C,"Science");
                    Q=findElm(P,Y);
                    I=alokasi(Q,S);
                    if (first(R)==NULL) {
                        insertFirst(R,I);
                    } else {
                        DPP=findElm(R,Q,S);
                        if (DPP==NULL) {
                            insertLast(R,I);
                        }
                    }
                }
                if (g=='3') {
                    S=findElm(C,"Roman");
                    Q=findElm(P,Y);
                    I=alokasi(Q,S);
                    if (first(R)==NULL) {
                        insertFirst(R,I);
                    } else {
                        DPP=findElm(R,Q,S);
                        if (DPP==NULL) {
                            insertLast(R,I);
                        }
                    }
                }
            }
}

void caribuku (List_parent P,List_child C, List_relasi R) {
            cout<<"Judul Buku yang dicari : ";
            cin>>Y;
            printParent(R,Y);
}
