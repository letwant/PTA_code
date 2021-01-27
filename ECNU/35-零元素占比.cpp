#include <stdio.h>

#define M 100

double Ratio(int(*p)[M], int n, int m)
/* PreCondition:
 p points to a two-dimensional array with n lines and m integers in each line
    PostCondition: array is sorted satisfying to the specification
*/

{
    double count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (p[i][j] == 0)
            {
                count++;
            }
        }
    }
    printf("count = %f\n", count);
    return count / (n * m);
}

int main(void) {
    int a[100][M], m, n, i, j;
    scanf_s("%d%d", &n, &m);
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            scanf_s("%d", &a[i][j]);
    printf("%.9f\n", Ratio(a, n, m));
    return 0;
}