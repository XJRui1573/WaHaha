#include <stdio.h>

extern int Add(int x, int y);   //声明来自外部文件的函数
int main()
{
    int a = 10;
    int b = 20;
    int sum = Add(a,b);
    printf("%d\n",sum);

    return 0;
}