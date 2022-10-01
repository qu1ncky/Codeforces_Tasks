#include <stdio.h>

int main()
{
    int N, a, count = 0;

    scanf("%d", &N);
    int array[N];
    if (N <= 1)
    {
        scanf("%d", &a);
        printf("-1");
    }
    else
    {
        int proverka = 1;

        for (int i = 0; i < N; i++)
        {
            scanf("%d", &a);
            array[i] = a;
        }

        int max = array[0];

        for (int i = 0; i < N; i++)
        {
            if (array[i] == array[i + 1])
            {
                count++;
                if (count == N - 1)
                {
                    proverka = 0;
                }
            }
        }
        if (proverka == 0)
        {
            printf("-1");
        }
        else if (proverka == 1)
        {

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
                    array[i] = 0;
                }
            }
            int max2 = array[0];

            for (int i = 0; i < N; i++)
            {
                if (array[i] > max2)
                {
                    max2 = array[i];
                }
            }
            printf("%d", max2);
        }
    }

    return 0;
}