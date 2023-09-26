#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void print() { cout << '\n'; }

template <typename T>
void print(T a);

template <typename T>
void print(vector<T> v)
{
    cout << "[ ";
    for (auto el : v)
    {
        print(el);
        cout << " ";
    }
    cout << "]";
}

template <typename T>
void print(T a)
{
    cout << a;
}

template <typename T, typename... TAIL>
void print(const T &t, TAIL... tail)
{
    print(t);
    cout << " ";
    print(tail...);
}

template <typename... TAIL>
void println(TAIL... tail)
{
    print(tail...);
    cout << "\n";
}
