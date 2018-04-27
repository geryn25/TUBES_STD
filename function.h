#ifndef FUNCTION_H_INCLUDED
#define FUNCTION_H_INCLUDED
#include "list_relasi.h"
#include "list_child.h"
#include "list_parent.h"

#include <iostream>

void inputdataParent(List_parent &P);
void inputdataChild(List_child &C);
void deleteBuku(List_parent &P,List_relasi &R);
void deleteGenre(List_child &P,List_relasi &R);
void editbuku (List_parent &P, List_child &C, List_relasi &R);
void tambahgenre (List_parent &P, List_child &C, List_relasi &R);
void caribuku (List_parent P,List_child C, List_relasi R);
void caribuku2 (List_parent P,List_child C, List_relasi R);
void tambahRelasi (List_relasi &R, List_child &C,List_parent &P);
void deleteRelasi(List_parent P,List_child C,List_relasi &R);
void listbygenre (List_parent W,List_child C,List_relasi R,address_child &Z, int &v);
void listbybuku (List_parent W,List_child C,List_relasi R,int &i);
void checkRelation (List_child C, List_parent P, List_relasi R);
void hitungrata2buku (List_child C, List_parent P, List_relasi R);
void genreterbanyak (List_relasi R, List_child C,List_parent P);






#endif // FUNCTION_H_INCLUDED


