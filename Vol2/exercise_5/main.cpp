#include <iostream>
#include <typeinfo>

template <std::size_t N>
std::ostream& operator<<(std::ostream& o, const int(&a)[N]);

template <typename T, std::size_t N>
T my_sum(const T(&arr) [N], std::size_t start, std::size_t stop, T init = T()) {
    T sum = init;
    size_t i = start;
    for ( ; i < stop; ++i) {
        sum += arr[i];
    }
    return sum;
}

template <std::size_t N>
std::ostream& operator<<(std::ostream& o, const int(&a)[N])
{
    o << "{";
    for (std::size_t i = 0; i < N-1; ++i)
    {
        o << a[i] << ", ";
    }
    o << a[N-1] << "}";
    return o;
}

int main() {
    int arr[] = {1, 2, 3, 4};
    std::cout << arr << std::endl; 
    std::cout << my_sum(arr, 0, sizeof(arr) / sizeof(arr[0]), 5) << std::endl;
    return 0;
}
