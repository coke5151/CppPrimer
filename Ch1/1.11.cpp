// 使用者輸入兩個整數，印出範圍內的每個數字
#include <iostream>

int main()
{
    int a = 0, b = 0;
    std::cout << "請輸入兩個整數，以空格隔開：" << std::endl;
    std::cin >> a >> b;
    if (a > b) // 始終讓 a 比 b 小
    {
        int temp = a;
        a = b;
        b = temp;
    }
    while (a <= b)
    {
        std::cout << a << " ";
        a++;
    }
    std::cout << std::endl;
    return 0;
}