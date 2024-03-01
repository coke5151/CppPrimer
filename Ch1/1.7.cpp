// 成對註解不能內嵌的錯誤示範

/*
 * comment pairs /* */ cannot nest
 * "cannot nest" 會被視為原始碼，
 * 就跟程式的其他部分一樣
/* 

int main()
{
    return 0;
}