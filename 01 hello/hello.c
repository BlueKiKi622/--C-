#include <stdio.h>

int main(){
    int hour1,minute1;
    int hour2,minute2;
    int reslut_hour,reslut_min;

    printf("请输入时间1（小时与分钟用空格隔开）\n");
    scanf("%d %d",&hour1,&minute1);
    printf("请输入时间2（小时与分钟用空格隔开）\n");
    scanf("%d %d",&hour2,&minute2);

    int time1 = hour1 * 60 + minute1;
    int time2 = hour2 * 60 + minute2;
    reslut_hour = (time2 - time1) / 60;
    reslut_min = (time2 - time1) % 60;

    printf("时间相差%d 小时 %d 分钟", reslut_hour,reslut_min);

    return 0;
}