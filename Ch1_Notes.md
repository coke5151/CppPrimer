# Ch1 Notes

## Namespace

Namespace（命名空間）是用來避免我們在不經意見讓變數或函數的名稱撞名。舉例來說標準函式庫中的函數和變數都在 `std` 這個 namespace 中。

使用的方式：
1. 直接在使用時在前方加上 `命名空間::`，例如：`std::cout`, `std::cin`, `std::endl`...
2. 先在使用前進行一次的 `using std::cin`，爾後就可以使用 `cin` 而不用輸入 `std::cin`
3. `using namespace std;`：直接把整個 `std` 命名空間納進來，爾後就可以自由使用 `cin`, `cout`, `endl`, `string`... 但這樣用可能會很雜亂，你自己也不知道納入了多少個名稱進來。

## 標頭檔引入

1. 標準函式庫中的標頭檔：`#include <標頭檔>`，例如：`#include <iostream>`
2. 自定義的標頭檔：`#include "標頭檔目錄"`，例如：`#include "../header_files/Sales_item.h"`