#include <stdio.h>

int main()
{
    int N, a;
    printf("Put the N value: ");
    scanf("%d", &N);

    int array[N];

    for (int i = 0; i < sizeof(array) / sizeof(int); i++)
    {
        scanf("%d", &a);
        array[i] = a;
    }

    for (int i = sizeof(array) / sizeof(int) - 1; i >= 0; i--)
    {
        printf("%d ", array[i]);
    }

    return 0;
}