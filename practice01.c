#include <stdio.h>
int main(void)
{
int x;
int y;

printf("二つの整数を入力せよ：");

printf("整数A：");
scanf("%d",&x);

printf("整数B：");
scanf("%d",&y);

if (x % y == 0)
    puts("BはAの約数です。");
else
    puts("BはAの約数ではありません");
    
}
