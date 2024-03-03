# Ch2 Notes

## 指標與參考

1. 指標的型別必須跟它指向的變數相符合。除非是 `void*` 指標
2. 指標與參考的比較請見 [Ch2/2.19.md](Ch2/2.19.md)
3. 指標在宣告時使用 `int *p` 或 `int* p` 都可以，但要注意的是不論 `*` 貼在 `int` 上或是變數名稱 `p` 上面，都只有指定一個變數為指標。

    舉例：`int* p, i, j` 中只有 p 是指標，i 跟 j 只是一般的 `int` 而已，若要全部都是指標必須寫 `int *p, *i, *j`。所以我一律把 `*` 貼在變數名稱上。

## extern

我會把 extern 分為四種情況：

1. extern 出現在**非** `const` 的變數前、在全域中
2. extern 出現在**非** `const` 的變數前、在函數中 (`main` 也算函數)
3. extern 出現在 `const` 的變數前、在全域中
4. extern 出現在 `const` 的變數前、在函數中 (`main` 也算函數)

### 1. extern 出現在**非** `const` 的變數前、在全域中

假設有兩個檔案 `cal.cpp`, `main.cpp`，若我們希望在 `main.cpp` 中的變數可以被 `cal.cpp` 取用，則可以這樣寫：

main.cpp:
```c++
int a = 0;
int main()
{
    // call cal.cpp
    return 0;
}
```

cal.cpp:
```c++
extern int a;
int be_call()
{
    // do something with the var a
}
// do something
```

在此例中，`a` 在 `main.cpp` 中被定義 (definition)；在 `cal.cpp` 中被宣告 (declaration)

特別的是如果你 `main.cpp` 中也使用 `extern`:

```c++
extern int a = 0;

int main()
{
    // do something
}
```

這個操作雖然有 extern，但因為有初始化 (`a = 0`)，所以`定義`這個操作還是在本檔案執行的。不過通常不會這樣寫就是了。


### 2. extern 出現在**非** `const` 的變數前、在函數中 (`main` 也算函數)

main.cpp:
```c++
int main()
{
    extern int a = 0;
    return 0;
}
```

這個 `extern` 基本上沒什麼意義，因為變數 `a` 在 `main` 結束時就被銷毀了。

### 3. extern 出現在 `const` 的變數前、在全域中

case 1:
```c++
const int a = 0;
int main()
{
    // do something
    return 0;
}
```

case 2:
```c++
extern const int a = 0;
int main()
{
    // do something
    return 0;
}
```

如果定義的變數沒有 `const` 性質，那定義時只需要類似 `int a = 0;` 的 statement 就可以了。(case 1)

但當我們在變數定義時加上 `const`，編譯器預設在編譯時會直接把所有出現這個變數的位置換成你定義時初始化的值（反正這個變數也不會改變了）

如果此時我們還想要在多個檔案中都使用這個 `const` 變數，這就會產生問題。解決方法就是使用 `extern const int a = 0;`。(case 2)

### 4. extern 出現在 `const` 的變數前、在函數中 (`main` 也算函數)

```c++
int main()
{
    extern const int a = 0;
    return 0;
}
```

這個 `extern` 基本上沒什麼意義，因為變數 `a` 在 `main` 結束時就被銷毀了。