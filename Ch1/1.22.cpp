// 讀取多組記錄並輸出
#include <iostream>
#include "../header_files/Sales_item.h"

int main()
{
    Sales_item item1, result;
    if (std::cin >> item1) // 輸入範例請參考 `1.20.cpp`
    {
        result = item1;
        while (std::cin >> item1)
        {
            result += item1;
        }
    }
    std::cout << result << std::endl;
    return 0;
}