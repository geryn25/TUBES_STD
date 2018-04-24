#include <iostream>

#include <stdio.h>
#include <string.h>
#include <cstdlib>
#include <conio.h>





using namespace std;
#include "list_child.h"
#include "list_relasi.h"
#include "list_parent.h"
#include "function.h"
#include <conio.h>
    List_child C;
    List_parent P;
    List_relasi R;
void displayMenu();
void runMenu(char menu);
int main()
{
    system("color 3F");
    createList_parent(P);
    createList_child(C);
    createList_relasi(R);
    address_child Q=alokasi("Horror");
    insertLast(C,Q);
    Q=alokasi("Science");
    insertLast(C,Q);
    Q=alokasi("Roman");
    insertLast(C,Q);
    char menu='-1';
    while (menu!='0') {
        displayMenu();
        cin>>menu;
        runMenu(menu);
        cout<<endl;
        if (menu!=0) {
            cout<<"press any button to back to menu ... ";
            getch();
            system("CLS");
        }

    }
    return 0;

}

void displayMenu () {
    cout<<"DAFTAR BUKU PERPUSTAKAAN"<<endl;
    cout<<endl;
    cout<<"1.Masukkan Judul Buku"<<endl;
    cout<<"2.Hapus Buku"<<endl;
    cout<<"3.Edit Buku"<<endl;
    cout<<"4.View List Buku Berdasarkan Genre"<<endl;
    cout<<"5.Search Buku"<<endl;
    cout<<"6.Tambah Genre Buku"<<endl;
    cout<<"0.Exit"<<endl;
    cout<<"---------------------"<<endl;
    cout<<"choose Menu : ";

}

void runMenu (char menu) {
    switch (menu) {
        case '1' :
            inputdata(P,R,C);
            break;
        case '2' :
            hapusdata(P,C,R);
            break;
        case '3' :
            editbuku(P,C,R);
            break;
        case '4' :
            printgenre(R);
            break;
        case '5' :
            caribuku(P,C,R);
            break;
        case '6' :
            tambahgenre(P,C,R);
            break;
        default :
            break;
    }
}
