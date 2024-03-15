#include<stdio.h>
struct Student{
	int num;
};

int main()
{
	struct Student stu[5],*p,*temp,*q;
	int i,j,max = 0;
	p = stu;

	for(i = 0;i < 5;i ++,p ++)
  {printf("enter the num \n");
		scanf("%d",&p->num);}
	p = stu;

  for (int i = 0; i < 4; i++,p++)
  {	p = stu;
    for (int j = 0; j < 4-i; j++)
    {
      if(stu[i]>stu[j]){

      }
    }
    
  }
  




	for(i = 0;i < 5;i ++,p ++)
  {
		printf("%d",p->num);}

	return 0;
}
