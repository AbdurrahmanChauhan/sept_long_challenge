#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int T;
    scanf("%d", &T);
    int N[T], A[T], B[T], X[T], Y[T];
    char ans[T], *a;
    int d[T], s[T];
    for (int i = 0; i < T; i++)
    {
        scanf("%d%d%d", &N[i], &A[i], &B[i]);
        a = (char *)malloc(N[i]);
        scanf("%s", a);
        int x = 0, y = 0;
        for (int j = 0; j < strlen(a); j++)
        {
            if (a[j] == '0')
                x++;
            else
                y++;
        }
        d[i] = A[i] * x;
        s[i] = B[i] * y;
    }
    for (int i = 0; i < T; i++)
    {
        printf("%d\n", (d[i] + s[i]));
    }
    return 0;
}