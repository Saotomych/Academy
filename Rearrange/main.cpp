#include <iostream>
#include <cstdint>

int rearrange_bytes(uint8_t* data, size_t size)
{
    if (size == 0 || size == 1)
    {
        return 0; // Перестановка не нужна
    }

    uint8_t last_byte = data[size - 1];
    uint8_t second_last_byte = data[size - 2];

    for (int i = size - 3; i >= 0; --i)
    {
        data[i + 2] = data[i];
    }

    data[0] = second_last_byte;
    data[1] = last_byte;

    return 0;
}

int main()
{
    uint8_t data[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    size_t size = sizeof(data) / sizeof(data[0]);

    rearrange_bytes(data, size);

    for (int i = 0; i < size; ++i)
    {
        std::cout << static_cast<int>(data[i]) << " ";
    }

    std::cout << std::endl;

    return 0;
}

