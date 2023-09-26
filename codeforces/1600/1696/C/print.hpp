#include <vector>

void print();

template <typename T>
void print(T a);

template <typename T>
void print(std::vector<T> v);

template <typename T, typename... TAIL>
void print(const T &t, TAIL... tail);

template <typename... TAIL>
void println(TAIL... tail);