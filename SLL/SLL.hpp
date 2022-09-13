#ifndef SLL_h
#define SLL_h
#pragma once
//links for supplemental reading
//https://www.geeksforgeeks.org/include-guards-in-c/


#include <iostream>
#include "Node.cpp"
template<typename T>
class SLL {
 private:
 int size;
 int capacity;
 Node<T> * head;
    
 public:
    SLL();
    void push_front(T);
    void pop_front();
    void remove(); 
    void clear();   
        

    // Accessors
    T front();
    T back();
    size_t size();
    void print();
};
#endif