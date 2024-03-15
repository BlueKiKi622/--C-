//给出年月日输出下一天的日期
#include<iostream>
using namespace std;
const int num[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};

bool check(int x)//判断是否是闰年
{	
	if((x%100==0)&&(x%400==0)){//判断世纪闰年
		return true;
	}else//判断普通的闰年
	{
		if((x%4==0)&&(x%100!=0)){
			return true;
		}
	
		else{
			return false;/*  */
		}
	}
	
}

void nextdate(int &a,int &b,int &c)
{
	
	if(a < 1 || b < 1 || b > 12 ||c < 1 )
	{
		cout << "Wrong input(非法数据)"<< endl;
		return;
	}
	else if (!check(a) && b == 2 && c > 28 ){
		cout << "Wrong input(非法数据)"<< endl;
		return;
	}
	else if(check(a) && b == 2 && c > 29){
		cout << "Wrong input(非法数据)"<< endl;
		return;
	}
	else
		{
			if(b==2&&check(a)&&c==28)
			{
				cout<< "the next day is:"<<a<<" "<<b<<" "<<1+c<<endl;
				return;
			}
			else
			{
				if(++c > num[b]){
					b++;
					c=1;
				}
				if(b > 12)
				{
					a++;
					b=1;
				}
			}
			cout<< "the next day is:"<<a<<" "<<b<<" "<<c<<endl;
			return;

		}
}
int main()
{
	int temp = 0;
    int year,month,date;
	cout << "Plz enter the year,month and day.(divide by enter)"<<endl;
	cin>>year>>month>>date;
	nextdate(year,month,date);
	
	cin >>temp;
    return 0;
}