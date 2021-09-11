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
    int N = 3;
    int a[3] = {2,4,5};
    for (int j = 0; j < N; j++) //N=3,N-1=2,0<2   1<2
    {
        if (j % 2 == 0.0) //even yani i odd
        {
            if (a[j] % 2 != 0.0) //2%2=0(odd)   4 2 5
            {
                // if (i % 2 == 0) //i=0(0%2=0(even))
                // {
                //{
                //if (a[j + 1] % 2 != 0)      //(odd)
                swap(&a[j], &a[j + 1]); //4 2 5
                //}
            }
        }
       // j = j++;
    }
     for (int j = 0; j < N; j++)
        {
            printf("%d ", a[j]);
        }
        return 0;
}