
#include <iostream>
#include "List.h"
#include "Node.h"
#include <string>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////
// Public methods
//////////////////////////////////////////////////////////////////////////////////////
List::List()
{
    root = NULL;
    lenght = 0;
    lastNode = NULL;
    currentNode = NULL;
    beforeCurrentNode = NULL;
}
List::~List()
{
    if ((this->root) != NULL)
        delete (root);
}
//List::List(string[] elements){}
int List::getLenght()
{
    return lenght;
}

void List::add(string element)
{
    Node *newNode = new Node();
    newNode->setElement(element);
    if (this->List::lastNode == NULL)
    {
        this->currentNode = newNode;
        this->root = newNode;
        this->lastNode = root;
    }
    else
    {
        lastNode->setNextNode(newNode);
    }
    this->lenght++;
}

bool List::isEmpty()
{
    if ((this->root) == NULL)
        return true;
    else
        return false;
}

bool List::deleteCurrent()
{
    if (!isEmpty())
    {
        Node *nextNode = this->currentNode->getNextNode();
        this->beforeCurrentNode->setNextNode(nextNode);
        delete (currentNode);
        return true;
    }
    else
        return false;
}

bool List::editCurrent(string element)
{
    if (element != "")
    {
        this->currentNode->setElement(element);
        return true;
    }
    else
        return false;
}

string List::getCurrent()
{
    return this->currentNode->getElement();
}
void List::next()
{
    this->beforeCurrentNode = this->currentNode;
    this->currentNode = this->currentNode->getNextNode();
}

void List::reset()
{
    this->currentNode = NULL;
    this->beforeCurrentNode = NULL;
}
