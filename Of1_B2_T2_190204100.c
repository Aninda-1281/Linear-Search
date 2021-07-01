#include <stdio.h>
int main()
{
    int search, c, i;

    printf("Enter the number of elements you want to enter\n");
    scanf("%d", &c);
    int array[c];
    printf("Enter the elements\n");

    for (i = 0; i < c; i++)
        scanf("%d", &array[i]);

    printf("Enter a number to search\n");
    scanf("%d", &search);

    for (i = 0; i < c; i++)
    {
        if (array[i] == search)
        {
            printf("The number is found.\n");
            break;
        }
    }
    if (c == i)
        printf("Sorry, not found.\n");

    return 0;
}
