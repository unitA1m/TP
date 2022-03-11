#pragma once
#include <iostream>

class Node
{
public:
    int data;
    Node* pNext;

public:
    Node(int value, Node* pNext = nullptr)
    {
        this->data = value;
        this->pNext = pNext;
    }

};

class List
{

public:
    List();
    ~List();




public:
    void Push_Back(int value);
    int& operator[](const int index);
    void Pop_Front();
    int  GetSize() { return size; }
    void Copying(List& obj);
    void Merger(List& obj, const List& obj2);
    int SumEven(List& obj);
private:
    Node* head;
protected:
    int size;
};