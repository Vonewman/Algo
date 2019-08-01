#include <iostream>
#include <vector>

using namespace std;

void tri_insertion(vector<int> a)
{
    size_t key = 0;
    for (size_t j(1); j < a.size(); ++j)
    {
        size_t i = j-1;
        while (i > 0 && a[i] > key)
        {
            i = i - 1;
        }

        a[i+1] = key;
    }

}
int main()
{
    return 0;
}
