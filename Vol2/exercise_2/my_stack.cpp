#include "my_stack.h"
#include <iostream>
#include <vector>
#include <stdexcept>

template<typename T>
MyStack<T>::MyStack() {
    std::cout << "New Instance of MyStack" << std::endl;
}

template<typename T>
void MyStack<T>::push(T& value) {
    data.push_back(value);
}

template<typename T>
void MyStack<T>::pop() {
    if (data.empty())
        throw std::out_of_range("Stack<T>::pop(): stack is empty");

    data.pop_back();
}

template<typename T>
T& MyStack<T>::top() {
    if (data.empty())
        throw std::out_of_range("Stack<T>::top(): stack is empty");

    return data.back();
}

template<typename T>
bool MyStack<T>::empty() const {
    return data.empty();
}

template<typename T>
size_t MyStack<T>::size() const {
    return data.size();
}

template class MyStack<int>;
