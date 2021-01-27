#include <stdio.h>

long long Pow(int x)
/* PreCondition:
      x 是范围为 0-62 的一个整数。
   PostCondition:
      返回 2 的 x 次方的值
*/
{
    long long data = 1;
    for (int i = 1; i <= x; i++)
    {
        data *= 2;
    }
    return data;
}
#if 0
int main() {
    int x;
    scanf("%d", &x);
    printf("%lld\n", Pow(x));
    return 0;
}
#endif