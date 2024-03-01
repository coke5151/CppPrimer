#include <iostream>

int main()
{
    std::cout << "請輸入若干個整數，以求和（以空格相隔）" << std::endl;
    int i;
    int sum = 0;
    while (std::cin >> i) // UNIX 系統可以用 Ctrl+D 輸入 EOF 以結束此程式
    {
        sum += i;
    }
    std::cout << "它們的和為：" << sum << std::endl;
    return 0;
}