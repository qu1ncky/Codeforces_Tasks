#include <stdio.h>

int main()
{

    int N, count = 0, maxCount = 0, a;
    scanf("%d", &N);
    int array[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &a);
        array[i] = a;
    }
    for (int i = 0; i < N; i++)
    {
        if (array[i] == 1)
        {
            count++;
        }
        else
        {
            if (count >= maxCount)
            {
                maxCount = count;
            }
            count = 0;
        }
    }
    if (count >= maxCount)
    {
        printf("%d", count);
    }
    else
    {
        printf("%d", maxCount);
    }
    return 0;
}
