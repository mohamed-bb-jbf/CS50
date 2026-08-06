#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Array of numbers to search through
    int numbers[] = {20, 500, 10, 5, 100, 1, 50};

    // Get input from user
    int n = get_int("Number: ");

    // Linear search algorithm
    for (int i = 0; i < 7; i++)
    {
        if (numbers[i] == n)
        {
            printf("Found\n");
            return 0;
        }
    }

    printf("not found\n");
    return 1;
}
