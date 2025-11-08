//
// Created by razer on 29/10/2025.
//

#pragma once

struct Node;

namespace Logic
{
    class LinkedList
    {
    public:
        static void Append(Node& member);
        static void Prepend(Node* member);
        static Node* Last();
        static void InsertAt(int index, Node * member);
        static Node* GetAt(int index);
        void RemoveAt(int index);
        void PrintAll();
    };
}
