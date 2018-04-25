#ifndef FUNCTION_H_INCLUDED
#define FUNCTION_H_INCLUDED
#include "list_relasi.h"
#include "list_child.h"
#include "list_parent.h"

#include <iostream>

void inputdata(List_parent &P, List_relasi &R, List_child &C);
void hapusdata(List_parent &P,List_child C, List_relasi &R);
void editbuku (List_parent &P, List_child &C, List_relasi &R);
void tambahgenre (List_parent &P, List_child &C, List_relasi &R);
void caribuku (List_parent P,List_child C, List_relasi R);




#endif // FUNCTION_H_INCLUDED
