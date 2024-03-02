// 下列程式合法嗎？若是，印出的會是什麼值呢？
// 合法，我直接寫出程式運行展示結果
#include <iostream>

int main()
{
    int i = 100, sum = 0;
    for (int i = 0; i != 10; i++)
    {
        sum += i;
    }
    std::cout << i << " " << sum << std::endl; // 結果為 100 45
    // 因為當程式離開 for 迴圈，局域的 i 就消失，所以此時取的 i 會是 main 中的 i
    return 0;
}