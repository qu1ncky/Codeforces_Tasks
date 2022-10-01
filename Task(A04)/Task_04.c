#include <stdio.h>

int main()
{
    int N, a, temp, x;
    scanf("%d", &N);
    int array[N];
    if (N <= 1)
    {
        scanf("%d", &a);
        printf("-1");
    }
    else
    {
        for (int i = 0; i < N; i++)
        {
            scanf("%d", &a);
            array[i] = a;
        }

        for (int i = 0; i < N; i++)
        {
            int minPos = i;
            for (int j = i + 1; j < N; j++)
            {
                if (array[minPos] > array[j])
                {
                    minPos = j;
                }
            }
            temp = array[minPos];
            array[minPos] = array[i];
            array[i] = temp;
        }
        printf("%d", array[N - 2]);
    }

    return 0;
}