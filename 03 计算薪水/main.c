#include <stdio.h>

int main(){
    const double RATE = 8.25;//时薪
    const int STANDARD = 40;//法定工作时间
    double pay = 0.0;
    int hours;

    printf("请输入工作时长：");
    scanf("%d", &hours);
    printf("\n");

    if (hours > STANDARD)
    {
        pay = STANDARD * RATE + (hours - STANDARD) * (RATE * 1.5);
    }else{
        pay = hours * RATE;
    }
    
    printf("应该获得薪水：%f \n", pay);

    return 0;
}