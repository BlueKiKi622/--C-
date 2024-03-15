#include <stdio.h>

int main(){
    int number;
    int sum = 0;
    int count = 0;
    //启动循环
    printf("\n请输入数字,想要停止请输入-1 \n");
    scanf("%d",&number);
    //循环核心
    while (number != -1)
    {   
        sum += number;
        count ++;
        scanf("%d",&number);
    }
    //输出
    printf("%f \n" , 1.0 * sum / count);

    return 0;
}