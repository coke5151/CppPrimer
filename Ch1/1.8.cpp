// 更正在 1.8.md 中遇到的錯誤

#include <iostream>

int main()
{
    std::cout << "/*";
    std::cout << "*/";
    // std::cout << /* "*/ " */; // 此行會出錯
    std::cout << /* "*/ " /* " /*" */;
}