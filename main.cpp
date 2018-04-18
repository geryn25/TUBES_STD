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
    List_child C;
    List_parent P;
    List_relasi R;
void displayMenu();
void runMenu(int menu);
int main()
{

    createList_parent(P);
    createList_child(C);
    createList_relasi(R);
    address_child Q=alokasi("Horror");
    insertLast(C,Q);
    Q=alokasi("Science");
    insertLast(C,Q);
    Q=alokasi("Roman");
    insertLast(C,Q);
    int menu=-1;
    while (menu!=0) {
        displayMenu();
        cin>>menu;
        runMenu(menu);
        cout<<endl;

    }
    return 0;

}

void displayMenu () {
    cout<<"DAFTAR BUKU PERPUSTAKAAN"<<endl;
    cout<<endl;
    cout<<"1.Masukkan Judul Buku"<<endl;
    cout<<"2.Hapus Buku"<<endl;
    cout<<"3.Edit Buku"<<endl;
    cout<<"4.View List Buku"<<endl;
    cout<<"5.Search Buku"<<endl;
    cout<<"0.Exit"<<endl;
    cout<<"---------------------"<<endl;
    cout<<"choose Menu : ";

}

void runMenu (int menu) {
    address_parent A,B;
    infotype_parent W,Y,Z;
    address_child S;
    address_parent Q;
    address_relasi I;
    char X[100];
    bool t;
    char g,o;
    switch (menu) {
        case 1 :
            cout<<" Judul Buku :";
            cin>>W.judulBuku;
            cout<<" Penulis Buku :";
            cin>>W.penulis;
            cout<<"Tahun Terbit : ";
            cin>>W.tahunTerbit;
            A=alokasi_parent(W);
            insertLast(P,A);
            t=true;
            while (t==true) {
                cout<<" Genre Buku :" <<endl
                    <<" 1. Horror"<<endl
                    <<" 2. Science"<<endl
                    <<" 3. Roman"<<endl
                    <<" Pilih angka : ";
                cin>>g;


                if (g=='1') {
                    S=findElm(C,"Horror");
                    Q=findElm(P,W);
                    I=alokasi(Q,S);
                    if (first(R)==NULL) {
                        insertFirst(R,I);
                    } else {
                        insertLast(R,I);
                    }
                }
                if (g=='2') {
                    S=findElm(C,"Science");
                    Q=findElm(P,W);
                    I=alokasi(Q,S);
                    if (first(R)==NULL) {
                        insertFirst(R,I);
                    } else {
                        insertLast(R,I);
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
            break;

        case 2 :
            cout<<"judul Buku yang dihapus : ";
            cin>>Z.judulBuku;
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
            cin>>Y.judulBuku;
            A=findElm(P,Y);
            if (A!=NULL) {
                cout<<" Judul Buku : ";
                cin>>Y.judulBuku;
                info(A).judulBuku=Y.judulBuku;

            }
            break;
        case 4 :
            printInfo(R);
            break;
        case 5 :
            cout<<"Judul Buku yang dicari : ";
            cin>>Y.judulBuku;
            printParent(R,Y);
            break;
    }
}
