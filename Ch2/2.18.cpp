// 寫出一個程式來變更一個指標的值。寫出程式碼來變更該指標所指的值。
#include <iostream>

int main()
{
    int i = 5;
    int j = 10;
    int *p = &i; // p 為指向 i 的指標
    p = &j;      // 將 p 的值改為 j 的記憶體位址
    *p = 15;     // 將 p 指向的位址的值改為 15 (j)
    std::cout << "i: " << i << ", j: " << j << std::endl;
    return 0;
}