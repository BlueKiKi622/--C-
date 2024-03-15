#include <stdio.h>

int main(){
    int x;
    int n = 0;
    printf("请输入一个正整数： \n");
    scanf("%d" , &x);
    //无论如何都要循环一次！（do-while）
    do
    {
        n ++;
        x /= 10;
    }while (x > 0);//此处记得加分号！

    printf("输入的数是个 %d 位数\n", n);
    
    return 0;
}