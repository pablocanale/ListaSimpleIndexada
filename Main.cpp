
#include <iostream>
#include "List.h"
#include "Node.h"
#include <string>
using namespace std;

void add(List list)
{
    string element = "";
    cout << "type the content of your element list";
    cin >> element;
    list.add(element);
}

void deleteCurrent(List list)
{
    if ((list.deleteCurrent()) == true)
        cout << "Actual elimanated" << endl;
    else
        cout << "Something happen, can't delete the element" << endl;
}

void editCurrent(List list)
{
    string newContent;
    cout << "Type new content for your element" << endl;
    cin >> newContent;
    if (list.editCurrent(newContent) == true)
        cout << "element edited with success" << endl;
    else
        cout << "Position invalid or new content void" << endl;
}
void showCurrent(List list)
{
    if (!list.isEmpty())
        cout << list.getCurrent() << endl;
    else
        cout << "List is empty" << endl;
}
void showElements(List list)
{
    if (!list.isEmpty())
    {
        list.reset();
        for (int i = 1; i <= list.getLenght(); i++)
        {
            cout << list.getCurrent() << endl;
            list.next();
        }
    }
    else
        cout << "List is empty" << endl;
}

void showMenu()
{
    cout << "Type 1 and show the current element of the list" << endl;
    cout << "Type 2 next element" << endl;
    cout << "Type 3 for back to first element" << endl;
    cout << "Type 4 for show all elements" << endl;
    cout << "Type 5 for add a element" << endl;
    cout << "Type 6 for delente current element" << endl;
    cout << "Type 7 for edit current element" << endl;
    cout << "Type 0 for exit" << endl;
}

int main(int argc, char const *argv[])
{
    int option = -1;
    List list;

    while (option != 0)
    {
        showMenu();
        cin >> option;
        switch (option)
        {
        case 1:
            showCurrent(list);
            break;
        case 2:
            list.next();
            break;
        case 3:
            list.reset();
            break;
        case 4:
            showElements(list);
            break;
        case 5:
            add(list);
            break;
        case 6:
            deleteCurrent(list);
            break;
        case 7:
            editCurrent(list);
            break;
        case 0:
            cout << "You are out" << endl;
            break;
        }
    }
}
