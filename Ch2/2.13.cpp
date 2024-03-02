// 下列程式中的 j 值為何？
// int i = 42;
// int main()
// {
//     int i = 100;
//     int j = i;
// }

// 我改寫為直接把答案輸出
#include <iostream>

int i = 42;

int main()
{
    int i = 100;
    int j = i;
    std::cout << j << std::endl; // 答案為 100
    // 在局部中定義相同名稱的變數會導致原本的全域變數被隱藏
    // 若在此時仍想要使用全域中的 i，可以用 ::i
    std::cout << "Global i: " << ::i << std::endl;
    return 0;
}