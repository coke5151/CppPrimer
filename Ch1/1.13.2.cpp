// 改寫 EX 1.10
// 用 for 印出 10 遞減到 0 的數字
#include <iostream>

int main()
{
    int i = 10;
    for (int i = 10; i >= 0; i--)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    return 0;
}