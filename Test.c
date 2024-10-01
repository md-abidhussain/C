#include <stdio.h>

int check = 0, i = 0;

int lsearch(int *arr, int size, int num)
{
    for (i = 0; i < size; i++)
    {
        if (arr[i] == num)
        {
            check = 1;
            return i; 
        }
    }
    return -1;
}

int main()
{
    int arr[100], size, num, result;

    printf("Array (enter numbers separated by space): ");
    size = 0;  

    while (scanf("%d", &arr[size]) == 1)
    {
        size++;
    }

    while (getchar() != '\n');

    printf("Number to search for: ");
    scanf("%d", &num);

    result = lsearch(arr, size, num);  

    if (result != -1)
    {
        printf("%d found on index %d\n", num, result);
    }
    else
    {
        printf("%d not found\n", num);
    }

    return 0;
}