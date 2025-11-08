#include <iostream>
#include <list>

#include "Logic/LinkedList.h"
#include "Logic/Node.h"

void func(Logic::LinkedList* list)
{
    Node node{};
    list.append();
}

int main() {
    Logic::LinkedList list;
    func(list)

    const auto objectName = "linked list";
    std::cout << "Hello and welcome to my " << objectName << "!\n";
    return 0;
}
