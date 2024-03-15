#include <stdio.h>

int main(){
    //初始化
    int price;
    int bill;
    int temp;
    //读入金额和票面
    printf("请输入金额：");
    scanf("%d", &price);
    printf("请输入票面：");
    scanf("%d", &bill);
    temp = bill;
    //判断
    //当面值大于金额，直接找零
    if (price < bill)
    {   
        printf("应该找零：%d \n",  bill - price);  
    }else{
        //当面值小于金额，需要多张，之后找零
         while (price > bill)
        {
            bill += temp;
        }
        printf("应该找零：%d \n",  bill - price);
    }
    
     return 0;
}