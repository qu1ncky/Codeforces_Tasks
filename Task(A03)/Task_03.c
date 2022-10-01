#include <stdio.h>

int main()
{
    int N, a, max, maxCount = 0;

    printf("Put the N value: ");
    scanf("%d", &N);

    int array[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &a);
        array[i] = a;
    }

    max = array[0];

    for (int i = 0; i < N; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }

    for (int i = 0; i < N; i++)
    {
        if (array[i] == max)
        {
            maxCount++;
        }
    }

    printf("%d %d", max, maxCount);

    return 0;
}
