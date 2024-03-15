#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
    int a = -1;//保障循环开始不会一直进行
    int number;
    int count;

    srand(time(0));
    number = rand()%100 + 1;

    printf("我想好了一个1-100的数正整数，请你猜猜：\n");
    do
    {
        count ++;
        printf("请输入一个1-100的正整数：\n");
        scanf("%d", &a);
        if (a < number)
        {
            printf("太小了\n");
        }
        else if(a > number)
        {   
            printf("太大了\n");
        }
    } while (a != number);
    
    printf("恭喜你猜对了,这个数就是：%d" , number);

}