#include<stdio.h>
main()
{
	double flowerPrice;//鲜花的价格 
 printf("在一个夜黑风高的夜晚\n");
 printf("一个小男生用自己的零花钱给小女生买了一束鲜花\n");
 printf("小女生问小男生鲜花的价格.“这花多少钱？”\n");
 printf("小男生答：");
 //录入鲜花的价格 
 scanf("%lf", &flowerPrice);
 //下面是模拟小女孩的反应 
 if(flowerPrice > 999999)
 {
 	printf("小女孩直接晕了过去！\n");
  } 
  else if(flowerPrice >= 100000 && flowerPrice <= 999999)
  {
  	printf("明天就去结婚！\n");
  }
  else if(flowerPrice >= 10000 && flowerPrice < 100000)
  {
  	printf("拉拉手意思意思，明天再约！\n");
  }
  else
  {
  	printf("好吧，我们只是普通朋友，你是个好人！\n");
  }
 
 	 
}


 
