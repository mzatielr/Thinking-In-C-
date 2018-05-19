#include <iostream>
#include "my_stack.h"
#include <deque>

int main() {

    MyStack<int> intStack;

    for (int i = 2; i <= 20; i+=2)
        intStack.push(i);

    std::cout << "int stack size: " << intStack.size() << "\ntop(): " << intStack.top();

    intStack.pop();
    std::cout << "\nNew int stack size: " << intStack.size() << "\nNew top(): " << intStack.top();
    MyStack<double, std::deque<double>> dbStack;

    for (int i = 1; i <= 5; ++i) {
        double d = i * 0.1;
        dbStack.push(d);
    }

    std::cout << "\n\nDouble stack size: " << dbStack.size()
        << "\ntop(): " << dbStack.top();

    dbStack.pop();
    std::cout << "\nNew double stack size: " << dbStack.size()
        << "\nNew top(): " << dbStack.top();

    return 0;
}
