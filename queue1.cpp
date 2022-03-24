#include "queue1.h"
#include <iostream>
using namespace std;

void List_protected::Push_Back(int value) { return List::Push_Back(value); }
int& List_protected::operator[](const int index) { return List::operator[](index); }
void List_protected::Pop_Front() { return List::Pop_Front(); }
void List_protected::Copying(List_protected& obj) { return List::Copying(obj); }
void List_protected::Merger(List_protected& obj, List_protected& obj2) { return List::Merger(obj, obj2); }
int List_protected::SumEven(List_protected& obj) { return List::SumEven(obj); }

void List_private::Push_Back(int value) { return List::Push_Back(value); }
int& List_private::operator[](const int index) { return List::operator[](index); }
void List_private::Pop_Front() { return List::Pop_Front(); }
void List_private::Copying(List_private& obj) { return List::Copying(obj); }
void List_private::Merger(List_private& obj, List_private& obj2) { return List::Merger(obj, obj2); }
int List_private::SumEven(List_private& obj) { return List::SumEven(obj); }