#include "queue.h"
#include <iostream>
using namespace std;


List::List()
{

    head = nullptr;
    size = 0;

}

List::~List()
{
    while (size != 0)
    {
        Node* temp = head;
        head = temp->pNext;
        delete temp;
        size--;
    }
}

void List::Push_Back(int value)
{
    if (head == nullptr)
    {
        head = new Node(value);
    }

    else
    {
        Node* current = this->head;

        while (current->pNext != nullptr)
        {
            current = current->pNext;
        }
        current->pNext = new Node(value);
    }
    size++;


}


int& List::operator[](const int index)
{
    int counter = 0;
    Node* current = this->head;

    while (current->pNext != nullptr)
    {
        if (counter == index) return current->data;

        current = current->pNext;
        counter++;
    }
}


void List::Pop_Front()
{
    Node* temp = head;
    head = head->pNext;
    delete temp;

    size--;



}



void List::Copying(List& obj)
{
    int temp[100];
    Node* current = obj.head;
    for (int i = 0; i < obj.size; i++)
    {
        temp[i] = current->data;
        current = current->pNext;
    }

    for (int i = 0; i < obj.size; i++)
    {
        Push_Back(temp[i]);
    }

}

void List::Merger(List& obj, const List& obj2)
{
    int temp[100], temp2[100];

    Node* current = obj.head;
    for (int i = 0; i < obj.size; i++)
    {
        temp[i] = current->data;
        current = current->pNext;
    }
    int lenght = obj2.size + obj.size;
    Node* current2 = obj2.head;
    for (int i = obj.size; i < lenght; i++)
    {
        temp[i] = current2->data;
        current2 = current2->pNext;
    }

    for (int i = 0; i < lenght; i++)
    {
        Push_Back(temp[i]);
    }


}
int List::SumEven(List& obj)
{
    Node* current = head;
    int sum = 0;

    for (int i = 0; i <= obj.GetSize() + 1; i++)
    {
        if (current->data % 2 == 0)
        {
            sum = sum + current->data;
        }
        else current = current->pNext;

    }
    return sum;
}