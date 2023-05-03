#include <stdio.h>
#include <stdlib.h> 

int main()
{
     int number_of_elements;
    printf("Gib Anzahl der Elemente ein: ");
    scanf("%d", &number_of_elements);

    int* cal_ptr = (int*)calloc(number_of_elements, sizeof( int));
    for (int i = 0; i < number_of_elements; i++)
    {
        cal_ptr[i] = i+1;
    }
    for (int i = 0; i < number_of_elements; i++)
    {
        printf("%d\n", cal_ptr[i]);
    }
    free(cal_ptr);
}