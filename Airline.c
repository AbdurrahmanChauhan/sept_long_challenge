//in branch updates lets try
#include <stdio.h>
int main()
{
    int T;
    scanf("%d", &T);
    int A[T], B[T], C[T], D[T], E[T];
    for (int i = 0; i < T; i++)
    {
        scanf("%d%d%d%d%d", &A[i], &B[i], &C[i], &D[i], &E[i]);
    }
    for (int i = 0; i < T; i++)
    {
        if ((((A[i] + B[i]) <= D[i]) && (C[i] <= E[i])) || (((B[i] + C[i]) <= D[i]) && (A[i] <= E[i])) || (((A[i] + C[i]) <= D[i]) && (B[i] <= E[i])))
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
// #include <stdio.h>
// int main()
// {
//     int T;
//     //printf("Enter number of test cases:\n");
//     scanf("%d", &T);
//     int A[T], B[T], C[T], D[T], E[T];
//     for (int i = 0; i < T; i++)
//     {
//         //printf("Enter your %d test cases\n", i + 1);
//         scanf("%d%d%d%d%d", &A[i], &B[i], &C[i], &D[i], &E[i]);
//     }
//     // for (int i = 0; i < T; i++)
//     // {
//     //     printf("Your %d test cases is\n", i + 1);
//     //     printf("%d %d %d %d %d \n", A[i], B[i], C[i], D[i], E[i]);
//     // }
//     for (int i = 0; i < T; i++)
//     {
//         if ((((A[i] + B[i]) <= D[i]) && (C[i] <= E[i])) || (((B[i] + C[i]) <= D[i]) && (A[i] <= E[i])) || (((A[i] + C[i]) <= D[i]) && (B[i] <= E[i])))
//             printf("YES\n");
//         else
//             printf("NO\n");
//     }
//     return 0;
// }