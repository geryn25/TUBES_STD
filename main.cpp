#include <iostream>

#include <stdio.h>
#include <string.h>
#include <cstdlib>





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
        system("CLS");
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
    infotype_parent X,Y,Z;
    switch (menu) {
        case 1 :
            cout<<" Judul Buku :";
            cin>>X;
            A=alokasi_parent(X);
            insertLast(P,A);

            break;

        case 2 :
            cout<<"judul Buku yang dihapus : "<<endl;
            cin>>Z;
            A=findElm(P,Z);
            if (A!=NULL) {

            } else {
                cout<<"buku tidak ditemukan"<<endl;
            }
            break;
        case 3 :
            cout<<"judul Buku yang diedit : "<<endl;
            cin>>Y;
            A=findElm(P,Y);
            if (A!=NULL) {
                cout<<" Judul Buku : ";
                cin>>Y;

                A=alokasi_parent(Y);
            }
            break;
    }
}
