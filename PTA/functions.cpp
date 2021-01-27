int Count_Digit(const int N, const int D) {
    int i = N > 0 ? N : -N; // 对N取绝对数
    int j = 0, b = 0; // b用来统计出现D的次数，i/10= j，j用来保存结果
    do
    {
        j = i % 10;
        if (j == D)
            b++;
        i /= 10;
    } while (i > 0);
    return b;
}