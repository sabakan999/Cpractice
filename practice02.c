#include <stdio.h>
#define diff(x,y) ((x)-(y))
int main(void)
{
int x,y;

printf("整数Aを入力");
scanf("%d",&x);
printf("整数Bを入力");
scanf("%d",&y);

if (x>=y)
{
    printf("A-B=%dです。", diff(x,y));
}
else
{
    printf("不正です。");
}

}
