#include <iostream>

int main()
{
    int sum = 0;
    // Problem: 下列 for 迴圈會做什麼呢？sum 的最終值是什麼呢？
    for (int i = -100; i <= 100; i++)
    {
        sum += i;
    }
    // Ans: for 迴圈從 -100 加到 100，sum 的最終值為 0。
    std::cout << sum << std::endl;
    return 0;
}