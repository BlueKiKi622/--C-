#include <stdio.h>

int main(){
    int type;
    printf("请输入情况(int)[1-3]\n");
    scanf("%d", &type);
    //switch是流水线执行的！
    
    //括号里的tpye
    //一定要是int类型才可以
    switch (type)
    {
    case 1:
        printf("早上好!\n");
        break;//如果前面的case没有break，那么就会继续往下执行！！！
    case 2:
        printf("中午好\n!");
        break;
    case 3:
        printf("晚上好!\n");
        break;
    default://当所有的输入都不满足，或者前面没有跳出，就会执行此语句！！！
        printf("错误的输入!");
    }

}