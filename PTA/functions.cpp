int Count_Digit(const int N, const int D) {
    int i = N > 0 ? N : -N; // ��Nȡ������
    int j = 0, b = 0; // b����ͳ�Ƴ���D�Ĵ�����i/10= j��j����������
    do
    {
        j = i % 10;
        if (j == D)
            b++;
        i /= 10;
    } while (i > 0);
    return b;
}