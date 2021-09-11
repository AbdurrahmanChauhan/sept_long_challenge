#include <stdio.h>
int main()
{
    int T, N, X;
    scanf("%d", &T);
    int n_equal_int[T], n_operations[T];
    int x, y, maxElement = 1, count;
    int maxCount = 0;
    for (int i = 0; i < T; i++)
    {
        n_equal_int[i] = 1;
        n_operations[i] = 0;
        scanf("%d %d", &N, &X);
        int A[N];
        for (int j = 0; j < N; j++)
        {
            scanf("%d", &A[j]);
        }
        for (int j = 0; j < N; j++)
        {
            for (int k = j + 1; k < N; k++)
            {
                if ((A[j] ^ X) == A[k])
                {
                    A[j] = A[j] ^ X;
                    n_operations[i]++;
                    break;
                }
            }
        }
        for (x = 0; x < N; x++)
        {
            count = 1;
            for (y = x + 1; y < N; y++)
            {
                if (A[y] == A[x])
                {
                    count++;
                    if (count > maxCount)
                    {
                        n_equal_int[i] = count;
                        maxElement = A[y];
                    }
                }
            }
        }
    }
    for (int i = 0; i < T; i++)
    {
        printf("%d %d\n", n_equal_int[i], n_operations[i]);
    }
    return 0;
}
// #include <stdio.h>
// int main()
// {
//     int T, N, X;
//     scanf("%d", &T);
//     int n_equal_int[T], n_operations[T],maxCount=0,count=0;
//     for (int i = 0; i < T; i++)
//     {
//         n_operations[i] = 0;
//         scanf("%d %d", &N, &X);
//         int A[N];
//         for (int j = 0; j < N; j++)
//         {
//             scanf("%d", &A[j]);
//             for(int b=j;b>0;b--)
//                 if (A[j] == A[j - 1])
//                     count++;
//                 if (count > maxCount)
//                     maxCount = count;

//             n_equal_int[i] = maxCount;
//         }
//         for (int j = 0; j < N; j++)
//         {
//             for (int k = j + 1; k < N; k++)
//             {
//                 if ((A[j] ^ X) == A[k])
//                 {
//                     A[j] = A[j] ^ X;
//                     n_operations[i]++;
//                     break;
//                 }
//             }
//         }
//         // for (x = 0; x < N; x++)
//         // {
//         //     count = 1;
//         //     for (y = x + 1; y < N; y++)
//         //     {
//         //         if (A[y] == A[x])
//         //         {
//         //             count++;
//         //             if (count > maxCount)
//         //             {
//         //                 n_equal_int[i] = count;
//         //                 maxElement = A[y];
//         //             }
//         //         }
//         //     }
//         // }
//     }
//     for (int i = 0; i < T; i++)
//     {
//         printf("%d %d\n", n_equal_int[i], n_operations[i]);
//     }
//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     int T, N, X;
//     scanf("%d", &T);
//     int n_equal_int[T], n_operations[T];
//     int x, y, maxElement = 1, count;
//     int maxCount = 0;
//     for (int i = 0; i < T; i++)
//     {
//         n_equal_int[i] = 1;
//         n_operations[i] = 0;
//         scanf("%d %d", &N, &X);
//         int A[N];
//         for (int j = 0; j < N; j++)
//         {
//             scanf("%d", &A[j]);
//         }
//         for (int j = 0; j < N; j++)
//         {
//             for (int k = j + 1; k < N; k++)
//             {
//                 if ((A[j] ^ X) == A[k])
//                 {
//                     A[j] = A[j] ^ X;
//                     n_operations[i]++;
//                     break;
//                 }
//             }
//         }
//         for (x = 0; x < N; x++)
//         {
//             count = 1;
//             for (y = x + 1; y < N; y++)
//             {
//                 if (A[y] == A[x])
//                 {
//                     count++;
//                     if (count > maxCount)
//                     {
//                         n_equal_int[i] = count;
//                         maxElement = A[y];
//                     }
//                 }
//             }
//         }
//         // for (int l = 0; l < N; l++)
//         // {
//         //     if (A[l] == maxElement)
//         //     {
//         //         n_equal_int[i]++;
//         //     }
//         // }
//     }
//     for (int i = 0; i < T; i++)
//     {
//         printf("%d %d\n", n_equal_int[i], n_operations[i]);
//     }
//     return 0;
// }

// #include <stdio.h>
// int getMaxRepeatingElement(int array[], int n)
// {
//     int i, j, maxElement = 1, count;
//     int maxCount = 0;
//     for (i = 0; i < n; i++)
//     {
//         count = 1;
//         for (j = i + 1; j < n; j++)
//         {
//             if (array[j] == array[i])
//             {
//                 count++;
//                 if (count > maxCount)
//                 {
//                     maxElement = array[j];
//                 }
//             }
//         }
//     }
//     return maxElement;
// }
// int main()
// {
//     int T, N, X;
//     scanf("%d", &T);
//     int n_equal_int[T], n_operations[T], max;
//     for (int i = 0; i < T; i++)
//     {
//         scanf("%d %d", &N, &X);
//         int A[N];
//         for (int j = 0; j < N; j++)
//         {
//             scanf("%d", &A[j]);
//         }
//         n_operations[i] = 0;
//         n_equal_int[i] = 0;
//         max = getMaxRepeatingElement(A, N);
//         for (int j = 0; j < N; j++)
//         {
//             for (int k = j + 1; k < N; k++)
//             {
//                 if ((A[j] ^ X) == A[k])
//                 {
//                     A[j] = A[j] ^ X;
//                     n_operations[i]++;
//                     break;
//                 }
//             }
//         }
//         int j = 0;
//         while (j < N)
//         {
//             if (A[j] == max)
//                 n_equal_int[i]++;
//             j++;
//         }
//     }
//     for (int i = 0; i < T; i++)
//     {
//         printf("%d %d\n", n_equal_int[i], n_operations[i]);
//     }
//     return 0;
// }
// #include <stdio.h>
// int *ptr;
// int getMaxRepeatingElement(int array[], int n)
// {
//     int i, j, maxElement = 0, count;
//     int maxCount = 0;
//     for (i = 0; i < n; i++)
//     {
//         count = 1;
//         for (j = i + 1; j < n; j++)
//         {
//             if (array[j] == array[i])
//             {
//                 count++;
//                 if (count > maxCount)
//                 {
//                     maxElement = array[j];
//                 }
//             }
//         }
//     }
//     ptr = &count;
//     return maxElement;
// }
// int main()
// {
//     int T, N, X;
//     scanf("%d", &T);
//     int n_equal_int[T], n_operations[T], max;
//     for (int i = 0; i < T; i++)
//     {
//         scanf("%d %d", &N, &X);
//         int A[N];
//         for (int j = 0; j < N; j++)
//         {
//             scanf("%d", &A[j]);
//         }
//         n_operations[i] = 0;
//         for (int j = 0; j < N; j++)
//         {
//             for (int k = j + 1; k < N; k++)
//             {
//                 if ((A[j] ^ X) == A[k])
//                 {
//                     A[j] = A[j] ^ X;
//                     n_operations[i]++;
//                     break;
//                 }
//             }
//         }
//         max = getMaxRepeatingElement(A, N);
//         n_equal_int[i] = *ptr;
//         // if (max == 0)
//         // {
//         //     n_equal_int[i]++;
//         // }
//         // else
//         // {
//         //     for (int l = 0; l < N; l++)
//         //     {
//         //         if (A[l] == max)
//         //         {
//         //             n_equal_int[i]++;
//         //         }
//         //     }
//         // }
//     }
//     for (int i = 0; i < T; i++)
//     {
//         printf("%d %d\n", n_equal_int[i], n_operations[i]);
//     }
//     return 0;
// }
// #include <stdio.h>
// int getMaxRepeatingElement(int array[], int n)
// {
//     int i, j, maxElement = 0, count;
//     int maxCount = 0;
//     for (i = 0; i < n; i++)
//     {
//         count = 1;
//         for (j = i + 1; j < n; j++)
//         {
//             if (array[j] == array[i])
//             {
//                 count++;
//                 if (count > maxCount)
//                 {
//                     maxElement = array[j];
//                 }
//             }
//         }
//     }
//     return maxElement;
// }
// int main()
// {
//     int T, N, X;
//     scanf("%d", &T);
//     int n_equal_int[T], n_operations[T], max;
//     for (int i = 0; i < T; i++)
//     {
//         scanf("%d %d", &N, &X);
//         int A[N];
//         for (int j = 0; j < N; j++)
//         {
//             scanf("%d", &A[j]);
//         }
//         n_operations[i] = 0;
//         for (int j = 0; j < N; j++)
//         {
//             for (int k = j + 1; k < N; k++)
//             {
//                 if ((A[j] ^ X) == A[k])
//                 {
//                     A[j] = A[j] ^ X;
//                     n_operations[i]++;
//                     break;
//                 }
//             }
//         }
//         n_equal_int[i] = 0;
//         max = getMaxRepeatingElement(A, N);
//         if (max == 0)
//         {
//             n_equal_int[i]++;
//         }
//         else
//         {
//             for (int l = 0; l < N; l++)
//             {
//                 if (A[l] == max)
//                 {
//                     n_equal_int[i]++;
//                 }
//             }
//         }
//     }
//     for (int i = 0; i < T; i++)
//     {
//         printf("%d %d\n", n_equal_int[i], n_operations[i]);
//     }
//     return 0;
// }
// #include <stdio.h>
// int getMaxRepeatingElement(int array[], int n)
// {
//     int i, j, maxElement = 0, count;
//     int maxCount = 0;
//     /* Frequency of each element is counted and checked.If it's greater than the utmost count element we found till now, then it is updated accordingly  */
//     for (i = 0; i < n; i++) //For loop to hold each element
//     {
//         count = 1;
//         for (j = i + 1; j < n; j++) //For loop to check for duplicate elements
//         {
//             if (array[j] == array[i])
//             {
//                 count++; //Increment  count
//                 /* If count of current element is more than
//                 maxCount, then update maxElement */
//                 if (count > maxCount)
//                 {
//                     maxElement = array[j];
//                 }
//             }
//         }
//     }
//     // if (maxElement==0)
//     // {
//     //     return 0;
//     // }
//     return maxElement;
// }
// int main()
// {
//     int T, N, X;
//     scanf("%d", &T);
//     int n_equal_int[T], n_operations[T], max;
//     for (int i = 0; i < T; i++)
//     {
//         scanf("%d %d", &N, &X);
//         //scanf("%d",&X);
//         int A[N], B[N];
//         for (int j = 0; j < N; j++)
//         {
//             scanf("%d", &A[j]);
//             //B[j] = A[j];
//         }
//         n_operations[i] = 0;
//         for (int j = 0; j < N; j++)
//         {
//             for (int k = j + 1; k < N; k++)
//             {
//                 if ((A[j] ^ X) == A[k])
//                 {
//                     A[j] = A[j] ^ X;
//                     n_operations[i]++;
//                     break;
//                 }
//             }
//         }
//         // for (int i = 0; i < N; i++)
//         // {
//         //     for (int j = i + 1; j < N; j++)
//         //     {
//         //         if (A[i] == A[j])
//         //             n_equal_int++;
//         //     }
//         // }
//         // for (int i = 1; i < N; i++)
//         // {
//         //     if (A[0]!=A[i])
//         //        c++;
//         // }
//         n_equal_int[i] = 0;
//         max = getMaxRepeatingElement(A, N);
//         if (max == 0)
//         {
//             n_equal_int[i]++;
//         }
//         else
//         {
//             for (int l = 0; l < N; l++)
//             {
//                 if (A[l] == max)
//                 {
//                     n_equal_int[i]++;
//                 }
//             }
//         }
//     }
//     for (int i = 0; i < T; i++)
//     {
//         printf("%d %d\n", n_equal_int[i], n_operations[i]);
//     }
//     // for (int i = 0; i < N; i++)
//     // {
//     //     printf("%d ", A[i]);
//     // }
//     // printf("\n%d\n", max);
//     return 0;
// }