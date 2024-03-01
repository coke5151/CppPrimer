// 讀取兩組記錄並輸出
#include <iostream>
#include "../header_files/Sales_item.h"

int main()
{
    Sales_item item1, item2;
    std::cin >> item1 >> item2; // 輸入範例請參考 `1.20.cpp`
    std::cout << item1 + item2 << std::endl;
    return 0;
}