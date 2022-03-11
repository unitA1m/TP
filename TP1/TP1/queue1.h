#pragma once
#include "queue.h"

class List_private : private List
{
public:
    void Push_Back(int value);
    int& operator[](const int index);
    void Pop_Front();
    int  GetSize() { return size; }
    void Copying(List_private& obj);
    void Merger(List_private& obj, List_private& obj2);
    int SumEven(List_private& obj);
};


class List_protected : protected List
{
public:
    void Push_Back(int value);
    int& operator[](const int index);
    void Pop_Front();
    int  GetSize() { return size; }
    void Copying(List_protected& obj);
    void Merger(List_protected& obj, List_protected& obj2);
    int SumEven(List_protected& obj);
};

class List_public : public List
{
};