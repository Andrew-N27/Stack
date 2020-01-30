#include <iostream>
#include <string>
#include <Windows.h>
#include "Stack.h"

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Stack<int> lst;
    lst.push_back(5);
    //lst.push_back(10);
    //lst.push_back(15);
    //lst.push_back(20);

    //cout << lst.GetSize() << endl;
    cout << lst[2] << endl;

    return 0;
}

