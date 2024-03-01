// 讀取一組記錄並輸出
#include <iostream>
#include "../header_files/Sales_item.h"

int main()
{
    Sales_item item1;
    std::cin >> item1; // eg. "0-201-70353-X 4 24.99"
    std::cout << item1 << std::endl; // eg. "0-201-70353-X 4 99.96 24.99"
    return 0;
}