// 用 while 和 i-- 印出 10 遞減到 0 的數字
#include <iostream>

int main()
{
    int i = 10;
    while (i >= 0)
    {
        std::cout << i << " ";
        i--;
    }
    std::cout << std::endl;
    return 0;
}