//
// Created by razer on 29/10/2025.
//

#pragma once
#include "Node.h"


namespace Logic {
    template<typename T>
    class LinkedList {
        Node<T> *head = nullptr;

    public:
        void Append(T value);

        void Prepend(T member);

        Node<T> *Last();

        void InsertAt<T>(int index, T value);

        Node<T> *GetAt(int index);

        void RemoveAt(int index);

        void PrintAll();
    };
}
