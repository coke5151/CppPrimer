// 下列程式碼會印出什麼呢？
#include <iostream>

int main()
{
    int i, &ri = i;
    i = 5;
    ri = 10;
    std::cout << i << " " << ri << std::endl; // 輸出為 10 10
    return 0;
}