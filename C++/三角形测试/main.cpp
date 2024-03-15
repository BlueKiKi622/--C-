#include<iostream>
using namespace std;

//222018321062108 罗中天
int main()
{
	int a,b,c,temp;
	cout << "请输入三角形得三条边 ,三边均在(1,200)范围内:"<<endl;
    cout << "输入a" <<endl;
	cin >> a;
    cout << "输入b" <<endl;
	cin >> b;
    cout << "输入c" <<endl;
    cin >> c;
    if (a < 1||b < 1||c < 1||a > 200||b > 200||c > 200)
    {
         cout << "错误输入!" <<endl;
         return 0;
    }
    
	if(a+b>c&&a+c>b&&b+c>a)
	{	if(a==b&&a==c&&b==c)
			cout << "构成等边三角形" <<endl;
		else if(a==b||a==c||b==c)
			cout << "构成等腰三角形" <<endl;
		else
			cout << "构成一般三角形" <<endl;
	}
	else
	    cout << "无法构成三角形!" <<endl;
    cin >> temp;
        return 0;
}


