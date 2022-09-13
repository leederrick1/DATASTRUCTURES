#include "SLL.hpp"
    template<typename T>
    SLL<T>::SLL() {
        
    }
    void push_front(T);
    void pop_front();
    void remove(); 
    void clear();   
        

    // Accessors
    T front();
    T back();
    size_t size();
    void print();