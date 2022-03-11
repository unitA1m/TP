#include "queue.h"
#include "queue1.h"
#include <iostream>
#include <string>;
using namespace std;

template <class T>
void Merger(T* Que)
{
    int number1, number2, number3;
    cout << "�������� ������� ������� �����������" << endl;
    cin >> number1; cin >> number2; cout << endl;
    cout << "�������� ���� ���������� ������� ���� ��������" << endl;
    cin >> number3;
    Que[number3].Merger(Que[number1], Que[number2]);
}

template <class T>
void CopyingQueue(T* Que, T& obj)
{
    int number;
    cout << "���� �����������" << endl;
    cin >> number;
    Que[number].Copying(obj);

}


int EnterQueue()
{
    cout << "������� ����� �������" << endl;
    int choice = 0;
    cin >> choice;
    return choice;
}



template <class T>
void DeleteItem(T& obj)
{
    obj.Pop_Front();
}

template <class T>
void ShowQueue(T& obj, const int number)
{
   
    cout << "��������� �������" << "#" + to_string(number) << endl;
    cout << "-------------------------" << endl;
    for (int i = 0; i < obj.GetSize(); i++)
    {
        cout << obj[i] << "  ";
    }
    cout << endl; cout << obj[2];
    cout << "-------------------------" << endl;

}


template <class T>
void AddingItem(T& obj, const int number)
{
    
    cout << "�������� ������� � ������� �������" << " #" + to_string(number) << endl;
    int value;
    cout << "������� ��������: ";
    cin >> value;
    obj.Push_Back(value);

}

void Error()
{
    cout << "�������� ����������� ����� ���� (1-8)" << endl;
}



template <class T>
void MainMenu(T* QueList)
{
    int choice = 0;
    int c;
    int work = 1;
    while (work)
    {
        cout << "<----------������� ����---------->" << endl;
        cout << "1 � ���������� �������� �������" << endl;
        cout << "2 � ���������� �������� �������" << endl;
        cout << "3 � ����� ������� �� �����" << endl;
        cout << "4 � ������ ����� ������ �����" << endl;
        cout << "5 - ����� ������� ��� ������" << endl;
        cout << "6 � �������� ����� �������" << endl;        
        cout << "7 � ������� ���� ��������" << endl;        
        cout << "8 � ����� ��������� ������" << endl;       
        cout << "9 � ����� �� ���������" << endl; 
        cout << endl;
        cout << "�������� ����� ���� ---->"; cin >> c;
        system("cls");

        switch (c)
        {
        case 1:  AddingItem(QueList[choice], choice);
            break;

        case 2: DeleteItem(QueList[choice]);
            break;

        case 3:ShowQueue(QueList[choice], choice);
            break;

        case 4: cout << QueList[choice].SumEven(QueList[choice]);
            break;

        case 5: choice = EnterQueue();
            break;

        case 6: CopyingQueue(QueList, QueList[choice]);
            break;

        case 7: Merger(QueList);
            break;

        case 8:
            work = 0;
            break;

        case 9: exit(0);
            break;

       

        default: Error();
            break;
        }
    }
}




int main()
{
    setlocale(LC_ALL, "Russian");
    List_private* Queue_private = NULL;
    List_protected* Queue_protected = NULL;
    List_public* Queue_public = NULL;
    int work = 1;
    while (work) {
        cout << "�������� �������� �����" << endl; 
        cout << "1 - Private" << endl; 
        cout << "2 - Protected" << endl; 
        cout << "3 - Public" << endl;
        int select = 0; 
        cin >> select;
        cout << "������� ���������� ��������" << endl; 
        int num = 1; 
        cin >> num;

        system("cls");

        switch (select)
        {
        case 1:
            Queue_private = new List_private[num];
            MainMenu(Queue_private);
            delete[] Queue_private;
            break;
        case 2:
            Queue_protected = new List_protected[num];
            MainMenu(Queue_protected);
            delete[] Queue_protected;
            break;
        case 3:
            Queue_public = new List_public[num];
            MainMenu(Queue_public);
            delete[] Queue_public;
            break;

        default:cout << "error";
            break;
        }
    }



    return 0;



}