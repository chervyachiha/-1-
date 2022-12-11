#include <iostream>

int main()
{
    std::string n1;
    std::string n2;
    std::cin >> n1 >> n2;
    const int N = 1000;
    int mas1[N];
    int mas2[N];
    for (int i = 0; i < size(n1); i++)
        mas1[i] = (int)n1[i] - 48;
    for (int i = 0; i < size(n2); i++)
        mas2[i] = (int)n2[i] - 48;
    int mas3[N + 1];
    for (int i = 0; i < size(n1) / 2; i++)
        std::swap(mas1[i], mas1[size(n1) - i -1]);
    for (int i = 0; i < size(n2) / 2; i++)
        std::swap(mas2[i], mas2[size(n2) - i - 1]);
    int t;
    if (size(n1) > size(n2))
        t = size(n1)+1;
    else
        t = size(n2)+1;
    int ost = 0;
    for (int i = 0; i < t; i++)
    {
        mas3[i] = (mas1[i] + mas2[i]) % 10 + ost;          
        ost = (mas1[i] + mas2[i]) / 10;
    }
    std::cout << std::endl;
    if (ost == 1)
        mas3[t] = 1;
    for (int i = 0; i < t/2; i++)
    {
        std::swap(mas3[i], mas3[t - i - 1]);
         
    }
    if (mas3[0] == 0)
    {
        t--;
        for (int i = 0; i < t; i++)
            mas3[i] = mas3[i + 1];
    }
    std::cout << "addition:";
    for (int i = 0; i < t; i++)
        std::cout << mas3[i];
    std::cout<<std::endl;

    int dl = size(n1) + size(n2) + 1;
    int d[100000]={0};

    for (int i = 0; i < size(n1); i++)
        for (int j = 0; j < size(n2); j++)
            d[i + j] += mas1[i] * mas2[j];

    for (int i = 0; i < dl; i++) {
        d[i + 1] += d[i] / 10;
        d[i] %= 10;
    }

    while (d[dl - 1] == 0)
    {
        dl--;
    }
    for (int i = 0; i < dl / 2; i++)
        std::swap(d[i], d[dl - i - 1]);
    std::cout << "multiplication:";
    for (int i = 0; i < dl; i++)
        std::cout << d[i];
    std::cout << std::endl;
}
