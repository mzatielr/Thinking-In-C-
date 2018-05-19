#include "my_stack.h"
#include <iostream>
#include <vector>
#include <stdexcept>

template<typename T, typename Container>
MyStack<T, Container>::MyStack() {
    std::cout << "New Instance of MyStack" << std::endl;
}

template<typename T, typename Container>
void MyStack<T, Container>::push(T& value) {
    data.push_back(value);
}

template<typename T, typename Container>
void MyStack<T, Container>::pop() {
    if (data.empty())
        throw std::out_of_range("Stack<T>::pop(): stack is empty");

    data.pop_back();
}

template<typename T, typename Container>
T& MyStack<T, Container>::top() {
    if (data.empty())
        throw std::out_of_range("Stack<T>::top(): stack is empty");

    return data.back();
}

template<typename T, typename Container>
bool MyStack<T, Container>::empty() const {
    return data.empty();
}

template<typename T, typename Container>
size_t MyStack<T, Container>::size() const {
    return data.size();
}
