#include <iostream>
#include <vector>

template <std::equality_comparable T>
auto linear_search(const std::vector<T> &array, const T &value)
{
    decltype(array.cbegin()) ptr;
    for (ptr = array.cbegin(); ptr != array.cend(); ++ptr)
    {
        if (*ptr == value)
            return ptr;
    }
    return ptr;
}

int main()
{
    std::vector<int> a{1, 2, 3, 4, 5};
    auto val = linear_search(a, 3);
    if(val != a.end())
    {
        std::cout << "Found: " << *val << " at pos " << (val - a.begin()) + 1 << std::endl;
    }
    else
    {
        std::cout << *val << " doesn't exit in array" << std::endl;
    }

    return 0;
}