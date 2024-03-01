// 寫一個程式，讀取數筆交易記錄，並計數每個 ISBN 出現幾次。
#include <iostream>
#include <algorithm>
#include <map>
#include "../header_files/Sales_item.h"

int main()
{
    std::map<std::string, int> isbn_count;
    Sales_item in;

    if (std::cin >> in) // eg: "0-201-70353-X 4 24.99"
    {
        isbn_count[in.isbn()] = 1;
        while (std::cin >> in)
        {
            auto iter = isbn_count.find(in.isbn());
            if (iter != isbn_count.end())
            {
                iter->second++; // 如果此 ISBN 已存在，加 1
            }
            else
            {
                isbn_count[in.isbn()] = 1;
            }
        }
    }

    // output
    for (const auto &pair : isbn_count)
    {
        std::cout << "ISBN: " << pair.first << ", Count: " << pair.second << std::endl;
    }
    return 0;
}