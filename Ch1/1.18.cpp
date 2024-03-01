// 這個書中範例的寫法沒有考慮若出現像 aaabba 時，最後面的 a 與最前面的 a 無法合併計算
#include <iostream>

int main()
{
    // currVal 是我們要計數的數字；我們會將新的值讀入 val
    int currVal = 0, val = 0;
    if (std::cin >> currVal)
    {
        int cnt = 1;            // 儲存我們目前正在處理的值出現之次數
        while (std::cin >> val) // 讀取剩於的數字
        {
            if (val == currVal)
                cnt++;
            else // 否則，印出前一個值的出現次數
            {
                std::cout << currVal << " occurs " << cnt << " times" << std::endl;
                currVal = val; // 記住新的值
                cnt = 1;
            }
        } // while 迴圈結束
        // 記得為檔案中最後一個值印出次數
        std::cout << currVal << " occurs " << cnt << " times" << std::endl;
    } // if 結束
    return 0;
}