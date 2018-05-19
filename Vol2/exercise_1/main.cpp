#include <iostream>

template <typename T>
void unary_op(T t) {
    std::cout << "From Template function" << std::endl;
}

template <>
void unary_op<int>(int t) {
    std::cout << "Full int specialization" << std::endl;
}

void unary_op(int t) {
    std::cout << "Non template function" << std::endl;
}

int main() {
    unary_op(5.0);
    unary_op<int>(5);
    unary_op<>(6);
    unary_op(3); 
    return 0;
}
