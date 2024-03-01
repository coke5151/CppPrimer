// 改寫 EX 1.9
// 寫一個程式用 for 將 50 到 100 的數字加總
#include <iostream>

int main()
{
    int sum = 0;
    for (int i = 50; i <= 100; i++)
    {
        sum += i;
    }
    std::cout << "50+51+52+...+100 = " << sum << std::endl;
    return 0;
}