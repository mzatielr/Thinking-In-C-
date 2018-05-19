#include <iostream>
#include "my_stack.h"

int main() {
    MyStack<int> intStack;
    for (int i = 1; i <= 10; ++i) {
                intStack.push(i);
    }

    std::cout << "Stack size: " << intStack.size() << "\ntop(): " << intStack.top();
    intStack.pop();
    std::cout << "\nNew stack size: " << intStack.size() << "\nNew top(): " << intStack.top();
    return 0;
}
