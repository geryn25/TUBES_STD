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
#include "fungsiNon_linkedlist.h"


void displayMenu () {
    cout<<"DAFTAR BUKU PERPUSTAKAAN"<<endl;
    cout<<endl;
    cout<<"1.Masukkan Judul Buku"<<endl;
    cout<<"2.Hapus Buku"<<endl;
    cout<<"3.Edit Buku"<<endl;
    cout<<"4.View List Buku Berdasarkan Genre"<<endl;
    cout<<"5.Search Buku"<<endl;
    cout<<"0.Exit"<<endl;
    cout<<"---------------------"<<endl;
    cout<<"choose Menu : ";

}

void runMenu (int menu) {
    address_parent A,B;
    infotype_parent W,Y,Z;
    address_child S;
    address_parent Q,DP;
    address_relasi I,DPP;
    char X[100];
    bool t,PD;
    char g,o;
    switch (menu) {
        case 1 :
            cout<<" Judul Buku :";
            cin>>W;
            DP=findElm(P,W);
            if (DP==NULL) {
            A=alokasi_parent(W);
            insertLast(P,A);
            t=true;
            while (t==true) {
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

                cout<<"masukkan genre lagi? (Y/N) ";
                cin>>o;
                if (o=='y' || o=='Y') {
                    t=true;
                } else {
                    t=false;
                }
            }
            } else {
                cout<<"buku sudah ada"<<endl;
            }
            break;

        case 2 :
            cout<<"judul Buku yang dihapus : ";
            cin>>Z;
            A=findElm(P,Z);
            if (A!=NULL) {
                    deleteAfter(P,prev(A),B);
            } else {
                cout<<"buku tidak ditemukan"<<endl;
            }

            printInfo(P);
            break;
        case 3 :
            cout<<"judul Buku yang diedit : "<<endl;
            cin>>Y;
            A=findElm(P,Y);
            if (A!=NULL) {
                cout<<" Judul Buku diganti menjadi : ";
                cin>>Y;
                info(A)=Y;

            }
            break;
        case 4 :
            printgenre(R);
            break;
        case 5 :
            cout<<"Judul Buku yang dicari : ";
            cin>>Y;
            printParent(R,Y);
            break;
        case 6 :
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
            break;
    }
}
