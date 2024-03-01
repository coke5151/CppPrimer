// 本檔案為書中的範例程式，一樣未考慮到亂序 aabba 時最後加入的 a 書怎麼處理
#include <iostream>
#include "../header_files/Sales_item.h"

int main()
{
    Sales_item total; // 存放下一筆記錄資料的變數
    // 讀取第一筆交易記錄，並確保有資料可以處理
    if (std::cin >> total) // eg: "0-201-70353-X 4 24.99"
    {
        Sales_item trans; // 用來存放運行總和的變數
        // 讀取並處理剩餘的交易記錄
        while (std::cin >> trans) // eg: "0-303-10343-X 2 30"
        {
            // 如果我們仍然是在處理同一本書
            if (total.isbn() == trans.isbn())
                total += trans; // 更新累計的 total
            else
            {
                // 印出前一本書的結果
                std::cout << total << std::endl;
                total = trans; // total 現在指向下一本書
            }
        }
        std::cout << total << std::endl; // 印出最後一筆交易記錄
    }
    else
    {
        // 沒有輸入！警示使用者
        std::cerr << "No data?!" << std::endl;
        return -1;
    }
    return 0;
}