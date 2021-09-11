#include <stdio.h>
int main()
{
    int T, c;
    scanf("%d", &T);
    int N[T], cmp[T], K[T], C[T];
    for (int i = 0; i < T; i++)
    {
        C[i] = 0;
        scanf("%d", &N[i]);
        int arr[2][N[i]];
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < N[i]; k++)
            {
                scanf("%d", &arr[j][k]);
            }
        }
        for (int c = 0; c < N[i]; c++)
        {
            if (arr[0][c] == arr[1][c])
            {
                cmp[i] = arr[0][c];
                break;
            }
            else
                cmp[i] = 0;
        }
        for (int c = 0; c < N[i]; c++)
        {
            if (arr[0][c] == arr[1][c] && arr[0][c] != cmp[i]) //x=y
            {
                if (cmp[i] < arr[0][c])
                {
                    if (arr[0][c] >= cmp[i])
                        K[i] = (cmp[i] - arr[0][c]);
                    else
                        K[i] = (arr[0][c] - cmp[i]);
                    arr[0][c] = (arr[0][c] + K[i]);
                    arr[1][c] = (arr[1][c] + K[i]);
                    C[i]++;
                }
                else
                {
                    if (arr[0][c] >= cmp[i])
                        K[i] = (cmp[i] - arr[0][c]);
                    else
                        K[i] = (arr[0][c] - cmp[i]);
                    arr[0][c] = (arr[0][c] - K[i]);
                    arr[1][c] = (arr[1][c] - K[i]);
                    C[i]++;
                }
            }
            else if (arr[0][c] == -(arr[1][c])) //x=-y or y=-x
            {
                if (arr[0][c] >= 0)
                {
                    if (arr[0][c] >= cmp[i])
                        K[i] = (cmp[i] - arr[0][c]);
                    else
                        K[i] = (arr[0][c] - cmp[i]);
                    arr[0][c] = (arr[0][c] + K[i]);
                    arr[1][c] = -((arr[1][c] - K[i]));
                    C[i]++;
                }
                else
                {
                    if (arr[1][c] >= cmp[i])
                        K[i] = (cmp[i] - arr[1][c]);
                    else
                        K[i] = (arr[1][c] - cmp[i]);
                    arr[0][c] = -(arr[0][c] - K[i]);
                    arr[1][c] = ((arr[1][c] + K[i]));
                    C[i]++;
                }
            }
            else //x!=y
            {
                while (arr[0][c] != cmp[i])
                {
                    if (cmp[i] < arr[0][c]) //for x
                    {
                        if (arr[0][c] >= cmp[i])
                            K[i] = (cmp[i] - arr[0][c]);
                        else
                            K[i] = (arr[0][c] - cmp[i]);
                        arr[0][c] = (arr[0][c] + K[i]);
                        C[i]++;
                    }
                    else
                    {
                        if (arr[0][c] >= cmp[i])
                            K[i] = (cmp[i] - arr[0][c]);
                        else
                            K[i] = (arr[0][c] - cmp[i]);
                        arr[0][c] = (arr[0][c] - K[i]);
                        C[i]++;
                    }
                }
                while (arr[0][c] != cmp[i])
                {
                    if (cmp[i] < arr[1][c]) //for y
                    {
                        if (arr[1][c] >= cmp[i])
                            K[i] = (cmp[i] - arr[1][c]);
                        else
                            K[i] = (arr[1][c] - cmp[i]);
                        arr[1][c] = (arr[1][c] + K[i]);
                        C[i]++;
                    }
                    else
                    {
                        if (arr[1][c] >= cmp[i])
                            K[i] = (cmp[i] - arr[1][c]);
                        else
                            K[i] = (arr[1][c] - cmp[i]);
                        arr[1][c] = (arr[1][c] - K[i]);
                        C[i]++;
                    }
                }
            }
        }
    }
    for (int i = 0; i < T; i++)
    {
        printf("%d\n", C[i]);
    }
    return 0;
}

// #include <stdio.h>
// int main()
// {
//     int T, c;
//     scanf("%d", &T);
//     int N[T], cmp[T], K[T], C[T];
//     for (int i = 0; i < T; i++)
//     {
//         C[i] = 0;
//         scanf("%d", &N[i]);
//         int arr[2][N[i]];
//         for (int j = 0; j < 2; j++)
//         {
//             for (int k = 0; k < N[i]; k++)
//             {
//                 scanf("%d", &arr[j][k]);
//             }
//         }
//         // for (int j = 0; j < 2; j++)
//         // {
//         //     for (int k = 0; k < N[i]; k++)
//         //     {
//         //         printf("%d\t", arr[j][k]);
//         //     }
//         //     printf("\n");
//         // }
//         // for (int j = 0; j < 2; j++)
//         // {
//         //     for (int k = 0; k < N[i]; k++)
//         //     {
//         //         if(arr[j]==arr[k])
//         //         {
//         //         }
//         //     }
//         // }
//         for (int c = 0; c < N[i]; c++)
//         {
//             if (arr[0][c] == arr[1][c])
//             {
//                 cmp[i] = arr[0][c];
//                 break;
//             }
//             else
//                 cmp[i] = 0;
//         }
//         //printf("cmp=%d", cmp[i]);
//         for (int c = 0; c < N[i]; c++)
//         {
//             if (arr[0][c] == arr[1][c]&&arr[0][c] != cmp[i]) //x=y
//             {
//                 // if (arr[0][c] == cmp[i])
//                 //     continue;
//                 if (cmp[i] < arr[0][c])
//                 {
//                     if (arr[0][c] >= cmp[i])
//                         K[i] = (cmp[i] - arr[0][c]);
//                     else
//                         K[i] = (arr[0][c] - cmp[i]);
//                     arr[0][c] = (arr[0][c] + K[i]);
//                     arr[1][c] = (arr[1][c] + K[i]);
//                     C[i]++;
//                 }
//                 else
//                 {
//                     if (arr[0][c] >= cmp[i])
//                         K[i] = (cmp[i] - arr[0][c]);
//                     else
//                         K[i] = (arr[0][c] - cmp[i]);
//                     arr[0][c] = (arr[0][c] - K[i]);
//                     arr[1][c] = (arr[1][c] - K[i]);
//                     C[i]++;
//                 }
//             }
//             else if (arr[0][c] == -(arr[1][c])) //x=-y or y=-x
//             {
//                 if (arr[0][c] >= 0)
//                 {
//                     if (arr[0][c] >= cmp[i])
//                         K[i] = (cmp[i] - arr[0][c]);
//                     else
//                         K[i] = (arr[0][c] - cmp[i]);
//                     arr[0][c] = (arr[0][c] + K[i]);
//                     arr[1][c] = -((arr[1][c] - K[i]));
//                     C[i]++;
//                 }
//                 else
//                 {
//                     if (arr[1][c] >= cmp[i])
//                         K[i] = (cmp[i] - arr[1][c]);
//                     else
//                         K[i] = (arr[1][c] - cmp[i]);
//                     arr[0][c] = -(arr[0][c] - K[i]);
//                     arr[1][c] = ((arr[1][c] + K[i]));
//                     C[i]++;
//                 }
//             }
//             else //x!=y
//             {
//                 // if (arr[0][c] == cmp[i])
//                 //     continue;
//                 while (arr[0][c] != cmp[i])
//                 {
//                     if (cmp[i] < arr[0][c]) //for x
//                     {
//                         if (arr[0][c] >= cmp[i])
//                             K[i] = (cmp[i] - arr[0][c]);
//                         else
//                             K[i] = (arr[0][c] - cmp[i]);
//                         arr[0][c] = (arr[0][c] + K[i]);
//                         C[i]++;
//                     }
//                     else
//                     {
//                         if (arr[0][c] >= cmp[i])
//                             K[i] = (cmp[i] - arr[0][c]);
//                         else
//                             K[i] = (arr[0][c] - cmp[i]);
//                         arr[0][c] = (arr[0][c] - K[i]);
//                         C[i]++;
//                     }
//                 }
//                 while (arr[0][c] != cmp[i])
//                 {
//                     if (cmp[i] < arr[1][c]) //for y
//                     {
//                         if (arr[1][c] >= cmp[i])
//                             K[i] = (cmp[i] - arr[1][c]);
//                         else
//                             K[i] = (arr[1][c] - cmp[i]);
//                         arr[1][c] = (arr[1][c] + K[i]);
//                         C[i]++;
//                     }
//                     else
//                     {
//                         if (arr[1][c] >= cmp[i])
//                             K[i] = (cmp[i] - arr[1][c]);
//                         else
//                             K[i] = (arr[1][c] - cmp[i]);
//                         arr[1][c] = (arr[1][c] - K[i]);
//                         C[i]++;
//                     }
//                 }
//             }
//             // for (int c = 0; c < N[i]/2; c++)
//             // {
//             //     printf("%d ", arr[0][c]);
//             // }
//             // printf("\n");
//             // for (int c = 0; c < N[i]/2; c++)
//             // {
//             //     printf("%d ", arr[1][c]);
//             // }
//             // for (int j = 0; j < 2; j++)
//             // {
//             //     for (int k = 0; k < N[i]; k++)
//             //     {
//             //         printf("%d\t", arr[j][k]);
//             //     }
//             //     printf("\n");
//             // }
//         }
//     }
//     for (int i = 0; i < T; i++)
//     {
//         printf("%d\n", C[i]);
//     }
//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     int T, c;
//     scanf("%d", &T);
//     int N[T], cmp[T], K[T];
//     for (int i = 0; i < T; i++)
//     {
//         scanf("%d", &N[i]);
//         int arr[2][N[i]];
//         for (int j = 0; j < 2; j++)
//         {
//             for (int k = 0; k < N[i]; k++)
//             {
//                 scanf("%d", &arr[j][k]);
//             }
//         }
//         for (int j = 0; j < 2; j++)
//         {
//             for (int k = 0; k < N[i]; k++)
//             {
//                 printf("%d\t", arr[j][k]);
//             }
//             printf("\n");
//         }
//         // for (int j = 0; j < 2; j++)
//         // {
//         //     for (int k = 0; k < N[i]; k++)
//         //     {
//         //         if(arr[j]==arr[k])
//         //         {
//         //         }
//         //     }
//         // }
//         for (int c = 0; c < N[i]; c++)
//         {
//             if (arr[0][c] == arr[1][c])
//             {
//                 cmp[i] = arr[0][c];
//                 break;
//             }
//             else
//                 cmp[i] = 0;
//         }
//         //printf("cmp=%d", cmp[i]);
//         for (int c = 0; c < N[i]; c++)
//         {
//             if (arr[0][c] == arr[1][c])
//             {
//                 if (arr[0][c] == cmp[i])
//                     continue;
//                 if (cmp[i] < arr[0][c])
//                 {
//                     if (arr[0][c] >= cmp[i])
//                         K[i] = (cmp[i] - arr[0][c]);
//                     else
//                         K[i] = (arr[0][c] - cmp[i]);
//                     arr[0][c] = (arr[0][c] + K[i]);
//                     arr[1][c] = (arr[1][c] + K[i]);
//                 }
//                 else
//                 {
//                     if (arr[0][c] >= cmp[i])
//                         K[i] = (cmp[i] - arr[0][c]);
//                     else
//                         K[i] = (arr[0][c] - cmp[i]);
//                     arr[0][c] = (arr[0][c] - K[i]);
//                     arr[1][c] = (arr[1][c] - K[i]);
//                 }
//             }
//             else if (arr[0][c] == -(arr[1][c]))
//             {
//                 if (arr[0][c] >= 0)
//                 {
//                     if (arr[0][c] >= cmp[i])
//                         K[i] = (cmp[i] - arr[0][c]);
//                     else
//                         K[i] = (arr[0][c] - cmp[i]);
//                     arr[0][c] = (arr[0][c] + K[i]);
//                     arr[1][c] = -((arr[1][c] - K[i]));
//                 }
//                 else
//                 {
//                     if (arr[1][c] >= cmp[i])
//                         K[i] = (cmp[i] - arr[1][c]);
//                     else
//                         K[i] = (arr[1][c] - cmp[i]);
//                     arr[0][c] = -(arr[0][c] - K[i]);
//                     arr[1][c] = ((arr[1][c] + K[i]));
//                 }
//             }
//             else
//             {
//                 // if (arr[0][c] == cmp[i])
//                 //     continue;
//                 if (cmp[i] < arr[0][c])
//                 {
//                     if (arr[0][c] >= cmp[i])
//                         K[i] = (cmp[i] - arr[0][c]);
//                     else
//                         K[i] = (arr[0][c] - cmp[i]);
//                     arr[0][c] = (arr[0][c] + K[i]);
//                 }
//                 else
//                 {
//                     if (arr[0][c] >= cmp[i])
//                         K[i] = (cmp[i] - arr[0][c]);
//                     else
//                         K[i] = (arr[0][c] - cmp[i]);
//                     arr[0][c] = (arr[0][c] - K[i]);
//                 }
//                 if (cmp[i] < arr[1][c])
//                 {
//                     if (arr[1][c] >= cmp[i])
//                         K[i] = (cmp[i] - arr[1][c]);
//                     else
//                         K[i] = (arr[1][c] - cmp[i]);
//                     arr[1][c] = (arr[1][c] + K[i]);
//                 }
//                 else
//                 {
//                     if (arr[1][c] >= cmp[i])
//                         K[i] = (cmp[i] - arr[1][c]);
//                     else
//                         K[i] = (arr[1][c] - cmp[i]);
//                     arr[1][c] = (arr[1][c] - K[i]);
//                 }
//             }
//             // for (int c = 0; c < N[i]/2; c++)
//             // {
//             //     printf("%d ", arr[0][c]);
//             // }
//             // printf("\n");
//             // for (int c = 0; c < N[i]/2; c++)
//             // {
//             //     printf("%d ", arr[1][c]);
//             // }
//             for (int j = 0; j < 2; j++)
//             {
//                 for (int k = 0; k < N[i]; k++)
//                 {
//                     printf("%d\t", arr[j][k]);
//                 }
//                 printf("\n");
//             }
//         }
//     }
//     // for (int i = 0; i < T; i++)
//     // {
//     //     printf("%d",K[i]);
//     // }
//     return 0;
// }
// if (/* condition */)
// {
//     /* code */
// }
// else if (/* condition */)
// {
//     /* code */
// }
// else
// {
//     /* code */
// }