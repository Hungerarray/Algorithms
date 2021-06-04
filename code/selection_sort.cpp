#include <iostream>
#include <vector>

template <std::three_way_comparable T>
void selection_sort(std::vector<T> &array);

int main()
{
    std::vector<int> data{4, 5, 2, 3, 1, 6, 7};
    selection_sort(data);

    std::for_each(data.cbegin(), data.cend(), [](auto elem)
                  { std::cout << elem << " "; });
    std::cout << std::endl;

    return 0;
}

template <std::three_way_comparable T>
void selection_sort(std::vector<T> &array)
{
    size_t index = 0, i;
    for (i = 0; i < array.size(); ++i)
    {
        index = i;

        for (size_t j = i + 1; j < array.size(); ++j)
        {
            if (array[index] > array[j])
                index = j;
        }
        std::swap(array[index], array[i]);
    }
}