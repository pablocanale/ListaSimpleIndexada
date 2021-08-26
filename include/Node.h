#ifndef Node_h
#define Node_h

#include <string>

class Node
{
private:
    std::string element;
    Node *nextNode;

public:
    Node();
    Node(std::string element);
    ~Node();
    // METODOS ELEMENT
    std::string getElement();
    void setElement(std::string element);
    Node *getNextNode();
    void setNextNode(Node *node);
};
#endif