#include <stdio.h>

long long Pow(int x)
/* PreCondition:
      x �Ƿ�ΧΪ 0-62 ��һ��������
   PostCondition:
      ���� 2 �� x �η���ֵ
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