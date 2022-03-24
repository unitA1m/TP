#include "queue.h"
#include "queue1.h"
#include <iostream>
#include <string>;
using namespace std;

template <class T>
void Merger(T* Que)
{
    int number1, number2, number3;
    cout << "Chouse stack for sliyanie" << endl;
    cin >> number1; cin >> number2; cout << endl;
    cout << "Chouse where to sliyanie" << endl;
    cin >> number3;
    Que[number3].Merger(Que[number1], Que[number2]);
}

template <class T>
void CopyingStack(T* Que, T& obj)
{
    int number;
    cout << "Where copy" << endl;
    cin >> number;
    Que[number].Copying(obj);

}


int EnterStack()
{
    cout << "Write a number of stack" << endl;
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
void ShowStack(T& obj, const int number)
{
   
    cout << "Sostoyanie of stack" << "#" + to_string(number) << endl;
    cout << "=========================" << endl;
    for (int i = 0; i < obj.GetSize(); i++)
    {
        cout << obj[i] << "  ";
    }
    cout << endl; 
    cout << "=========================" << endl;

}


template <class T>
void AddingItem(T& obj, const int number)
{
    
    cout << "Add element in this stack" << " #" + to_string(number) << endl;
    int value;
    cout << "Write element: ";
    cin >> value;
    obj.Push_Back(value);

}

void Error()
{
    cout << "Error of menu" << endl;
    cout << "Chouse another" << endl; 
}



template <class T>
void MainMenu(T* QueList)
{
    int choice = 0;
    int c;
    int work = 1;
    while (work)
    {
        cout << "+==========Main===========+" << endl;
        cout << "1) - Add element in stack" << endl;
        cout << "2) - Delete element in stack" << endl;
        cout << "3) - Show a stack" << endl;
        cout << "4) - Count sum chet chisel" << endl;
        cout << "5) - Chouse stack for work" << endl;
        cout << "6) - Create copy of stack" << endl;        
        cout << "7) - Sliyanie stacks" << endl;        
        cout << "8) - Chouse class" << endl;       
        cout << "0) - Exit" << endl; 
        cout << "+=========================+" << endl;
        cout << "Chouse of punkt ---->"; cin >> c;
        system("cls");

        switch (c)
        {
        case 1:  AddingItem(QueList[choice], choice);
            break;

        case 2: DeleteItem(QueList[choice]);
            break;

        case 3:ShowStack(QueList[choice], choice);
            break;

        case 4: cout << QueList[choice].SumEven(QueList[choice]);
            break;

        case 5: choice = EnterStack();
            break;

        case 6: CopyingStack(QueList, QueList[choice]);
            break;

        case 7: Merger(QueList);
            break;

        case 8:
            work = 0;
            break;

        case 0: exit(0);
            break;

       

        default: Error();
            break;
        }
    }
}




int main()
{
    List_private* Stack_private = NULL;
    List_protected* Stack_protected = NULL;
    List_public* Stack_public = NULL;
    int work = 1;
    while (work) {
        cout << "Chouse class" << endl; 
        cout << "1) - Private" << endl; 
        cout << "2) - Protected" << endl; 
        cout << "3) - Public" << endl;
        int select = 0; 
        cin >> select;
        cout << "Set kol-vo of stack" << endl; 
        int num = 1; 
        cin >> num;

        system("cls");

        switch (select)
        {
        case 1:
            Stack_private = new List_private[num];
            MainMenu(Stack_private);
            delete[] Stack_private;
            break;
        case 2:
            Stack_protected = new List_protected[num];
            MainMenu(Stack_protected);
            delete[] Stack_protected;
            break;
        case 3:
            Stack_public = new List_public[num];
            MainMenu(Stack_public);
            delete[] Stack_public;
            break;

        default:cout << "error";
            break;
        }
    }



    return 0;



}