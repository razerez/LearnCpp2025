#include "Logic/LinkedList.h"

#include <bits/functexcept.h>

#include "Logic/Node.h"

namespace Logic
{
template <typename T> void LinkedList<T>::Append(T value)
{
    auto newMember = new Node<T>{value};
    if (head == nullptr)
    {
        head = newMember;
        head->next = nullptr;
        return;
    }

    Node<T> *last = Last();
    if (last->next != nullptr)
    {
        std::__throw_bad_exception();
    }
    last->next = &newMember;
}

template <typename T> void LinkedList<T>::Prepend(T member)
{
    auto newMember = new Node<T>{member};
    member->next = head;
    head = member;
}

template <typename T> Node<T> *LinkedList<T>::Last()
{
    Node<T> *current = head;
    while (current->next != nullptr)
    {
        current = current->next;
    }
    return current;
}

template <typename T> void LinkedList<T>::InsertAt(const int index, T value)
{
    if (index == 0)
    {
        Prepend(value);
        return;
    }
    auto newMember = new Node<T>{value};
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
} // namespace Logic
