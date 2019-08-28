#include <iostream>
#include <cassert>
#include <vector>

int linear_search(const vector<int> &a, int v);

int main() {
    int n;
    std::cin >> n;
    vector<int> a(n);
    for (size_t i = 0; i < a.size(); i++) {
        std::cin >> a[i];
    }

    int v;
    std::cin >> v;

    for (int i = 0; i < n; i++) {
        std::cout << linear_search(a, v) << std::endl;
    }
}

int linear_search(const vector<int> &a, int v)
{
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] == v) return i;
    }
    return - 1;
}
