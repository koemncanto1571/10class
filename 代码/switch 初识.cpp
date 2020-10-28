#include <stdio.h>
int main()
{
	//switch结构的用法
	//一般处理数轴中某几个点的情况
	//想知道某个月有多少天 
	//逻辑：用户输入月份，根据月份判断当月的天数
	int month;//用户输入的月份
	printf("请输入月份，我来判断天数：");
	scanf("%d",&month);
	switch(month)
	{
		case 1:
			printf("1月有31天！\n");
			printf("1月过完就是年！\n");
			break;
		case 2:
			printf("2月有28天！\n");
			printf("2月有传说中的年假！\n");
			break;
		case 3:
			printf("3月有31天！\n");
			printf("三月烟花下扬州！\n"); 
			break; 
		case 4:
			printf("4月有30天！\n");
			break;
		default:
			printf("当前程序暂时只能判断1-4月的情况！\n");
			
	 } 
}
