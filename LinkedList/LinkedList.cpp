#include "Logic/LinkedList.h"

#include <bits/functexcept.h>

#include "Logic/Node.h"

namespace Logic
{
    Node *head = nullptr;

    void LinkedList::Append(Node *member)
    {
        if (head == nullptr)
        {
            head = member;
            head->next = nullptr;
            return;
        }
        Node *last = Last();
        if (last->next != nullptr)
        {
            std::__throw_bad_exception();
        }
        last->next = member;
    }

    void LinkedList::Prepend(Node *member)
    {
        member->next = head;
        head = member;
    }

    Node *LinkedList::Last()
    {
        Node *current = head;
        while (current->next != nullptr)
        {
            current = current->next;
        }
        return current;
    }

    void LinkedList::InsertAt(const int index, Node *member)
    {
        if (index == 0)
        {
            Prepend(member);
            return;
        }
        if (head == nullptr)
        {
            std::__throw_bad_exception();
        }
        int currentIndex = 1;
        Node *current = head;
        do
        {
            if (currentIndex == index)
            {
                member->next = current;
                current->next = member;
                return;
            }
            current = current->next;
            currentIndex++;
        } while (current->next != nullptr);
    }
} // Logic
