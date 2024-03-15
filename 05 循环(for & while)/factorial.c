#include <stdio.h>

int main(){
    int i;
    int x;
    int result = 1;
    printf("请输入要计算谁的接乘: \n");
    scanf("%d", &x);

    for (i = x; i > 0; i--)
    {
        result *= i;
    }
    
    printf("%d 的阶乘是: %d", x , result);
}