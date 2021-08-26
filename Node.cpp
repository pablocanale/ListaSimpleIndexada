#include <iostream>
#include <string>
#include "Node.h"
using namespace std;

Node::Node()
{
    this->element = "";
    this->nextNode = NULL;
}
// METODOS ELEMENT

Node::~Node()
{
    if ((this->nextNode) != NULL)
        delete (this->nextNode);
}

string Node::getElement()
{
    return element;
}

void Node::setElement(string element)
{
    this->element = element;
}

Node *Node::getNextNode()
{
    return nextNode;
}

void Node::setNextNode(Node *node)
{
    this->nextNode = node;
}
