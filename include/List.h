#ifndef LIST_H
#define LIST_H
#include "Node.h"
#include <string>
class List
{
private:
    Node *root;
    int lenght;
    Node *lastNode;
    Node *currentNode;
    Node *beforeCurrentNode;

public:
    List();
    //List(std::string[] elements);
    ~List();
    std::string getCurrent();
    int getLenght();
    void add(std::string element);
    bool isEmpty();
    bool deleteCurrent();
    bool editCurrent(std::string element);
    void next();
    void reset();
};
#endif