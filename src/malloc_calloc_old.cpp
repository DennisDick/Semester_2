#include <iostream>

auto main() -> int
{
    int number_of_elements;
    std::cout << "Gib Anzahl der Elemente ein: ";
    std::cin >> number_of_elements;

    int* arr_ptr = new int[number_of_elements];

    for(int i = 0; i < number_of_elements; i++)
    {
        arr_ptr[i] = i+1;
    }

    for(int i = 0; i < number_of_elements; i++)
    {
        std::cout << arr_ptr[i] << " ";
    }
    
    delete[] arr_ptr;
}