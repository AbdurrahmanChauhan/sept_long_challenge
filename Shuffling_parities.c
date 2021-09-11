#include <stdio.h>
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int T, N;
    scanf("%d", &T);             //3
    for (int i = 1; i <= T; i++) //0<3
    {
        scanf("%d", &N); //3
        int a[N];        //a[3]
        for (int j = 0; j < N; j++)
        {
            scanf("%d", &a[j]); //2 4 5
        }
        // for (int j = 0; j < N; j++) //N=3,N-1=2,0<2   1<2
        // {
        //     if (j % 2 == 0)//even
        //     {
        //         if (a[j] % 2 != 0) //2%2=0(odd)   4 2 5
        //         {
        //             // if (i % 2 == 0) //i=0(0%2=0(even))
        //             // {
        //             //{
        //             //if (a[j + 1] % 2 != 0)      //(odd)
        //             swap(&a[j], &a[j + 1]); //4 2 5
        //             //}
        //         }
        //     }
        //     j = j++;
        }
        for (int j = 0; j < N; j++)
        {
            printf("%d ", a[j]);
        }
        printf("\n");
    }
    return 0;
}

// #include <stdio.h>
// #include <stdlib.h>
// //#include<swapping.h>
// void swap(int *a, int *b)
// {
//     int temp;
//     temp = *a;
//     *a = *b;
//     *b = temp;
// }
// int main()
// {
//     int a1 = 1, b1 = 0;
//     swap(&a1, &b1);
//     printf("%d,%d", a1, b1);
//     return 0;
// }