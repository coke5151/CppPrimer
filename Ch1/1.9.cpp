// 寫一個程式用 while 將 50 到 100 的數字加總
#include <iostream>

int main()
{
    int sum = 0;
    int i = 50;
    while (i <= 100)
    {
        sum += i;
        i++;
    }
    std::cout << "50+51+52+...+100 = " << sum << std::endl;
    return 0;
}