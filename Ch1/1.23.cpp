// 寫一個程式，讀取數筆交易記錄，並計數每個 ISBN 出現幾次。
#include <iostream>
#include <vector>
#include "../header_files/Sales_item.h"

// 尋找特定的 ISBN


int main()
{
    std::vector<Sales_item> vec;
    Sales_item in;
    if (std::cin >> in)
    {
        vec.push_back(in);
        while (std::cin >> in)
        {
        }
    }
    return 0;
}