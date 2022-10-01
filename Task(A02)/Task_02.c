#include <stdio.h>

int main()
{
    int N, a;
    printf("Put the N value: ");
    scanf("%d", &N);

    int array[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &a);
        array[i] = a;
    }

    int max = array[0];
    int min = array[0];

    for (int i = 0; i < N; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }

    for (int i = 0; i < N; i++)
    {
        if (array[i] < min)
        {
            min = array[i];
        }
    }

    printf("%d %d", min, max);
    return 0;
}