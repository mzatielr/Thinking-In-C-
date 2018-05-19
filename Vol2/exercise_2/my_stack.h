#pragma once 
#include <vector>
#include <stdexcept>
#include <iostream>

template<typename T>
class MyStack {
public:
    MyStack(); 
    void push(T& value);
    void pop();
    T& top();
    bool empty() const;
    size_t size() const;
private:
    std::vector<T> data;
};
