#include <stdio.h>

int main()
{

    int N, maxCount = 0, count = 1, a, temp;
    float p;
    scanf("%d", &N);

    int array[N];
    for (int i = 0; i < sizeof(array) / sizeof(int); i++)
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

    if (N == 1)
    {
        printf("100%%");
    }
    else
    {
        for (int i = 0; i < (N - 1); i++)
        {
            if (array[i] == array[i + 1])
            {
                count++;
            }
            else
            {
                count = 1;
            }
            if (count > maxCount)
            {
                maxCount = count;
            }
        }
        p = (maxCount * 100 / N);
        printf("%.f%%", p);
    }

    return 0;
}
