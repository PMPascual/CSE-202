#ifndef STACK_H
#define STACK_H

/******************************************************************************
 * Phillip Pascual
 * stack.h
 * 3.14.18
 * Class declaration for Stack class, Lab 9
 *****************************************************************************/

#include <vector>

using namespace std;

template <typename T>
class Stack {
private:
    vector<T> container;
public:
    Stack(): container() {}
    void push(T x) { container.push_back(x); }
    void pop() { 
        if(!container.empty()) {
            container.pop_back();
        }
    }
    T top() { 
        if(!container.empty()) {
            return container.back();
        }
        exit(1);
    }
    bool empty() {return container.empty(); }
};

#endif
