#include<stdio.h>
main()
{
	double flowerPrice;//�ʻ��ļ۸� 
 printf("��һ��ҹ�ڷ�ߵ�ҹ��\n");
 printf("һ��С�������Լ����㻨Ǯ��СŮ������һ���ʻ�\n");
 printf("СŮ����С�����ʻ��ļ۸�.���⻨����Ǯ����\n");
 printf("С������");
 //¼���ʻ��ļ۸� 
 scanf("%lf", &flowerPrice);
 //������ģ��СŮ���ķ�Ӧ 
 if(flowerPrice > 999999)
 {
 	printf("СŮ��ֱ�����˹�ȥ��\n");
  } 
  else if(flowerPrice >= 100000 && flowerPrice <= 999999)
  {
  	printf("�����ȥ��飡\n");
  }
  else if(flowerPrice >= 10000 && flowerPrice < 100000)
  {
  	printf("��������˼��˼��������Լ��\n");
  }
  else
  {
  	printf("�ðɣ�����ֻ����ͨ���ѣ����Ǹ����ˣ�\n");
  }
 
 	 
}


 
