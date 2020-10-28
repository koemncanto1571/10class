#include<stdio.h>
int main()
{
	//使用循环实现三次密码输错退出系统
	int i =0 ;//循环变量 
	int password; //密码
	
	while(i<3) 
  {
  	printf("请输入密码：");
	scanf("%d", &password);
  	if(123456 != password)
  	{
  		printf("密码错误，当前输入%d次密码\n",i+1);
	  }
	  //三次错误，自动退出系统
	  if(i==2)
	  {
	  	printf("密码错误三次，系统强制退出！\n");
	int main(0);//告诉操作系统，程序正常退出 
	   } 
	  i++; 
  }
}
 
