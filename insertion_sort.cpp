#include <iostream>
#include <vector>

void insertion_sort(std::vector<int> &data);

int main()
{
    std::vector<int> data{5, 2, 4, 6, 1, 3};
    insertion_sort(data);

    for (size_t i = 0; i < data.size(); ++i)
    {
        std::cout << data[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}

void insertion_sort(std::vector<int> &data)
{
    for (size_t j {1} ; j < data.size(); ++j)
    {   
        int key {data[j]};

        size_t i {j - 1};

        while((i+1) != 0 && data[i] > key)
        {
            data[i+1] = data[i];
            i = i - 1;
        }
        data[i + 1] = key;
    }
}