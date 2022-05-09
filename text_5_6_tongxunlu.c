#include"txl.h"


void mom()
{
	printf("***************************************\n");
	printf("*****    1.添加          2.删除   *****\n");
	printf("*****    3.修改          4.查找   *****\n");
	printf("*****    5.查看          0.退出   *****\n");
	printf("***************************************\n");
	printf("***************************************\n");
}
        
int main()
{
	int p= 1;
	struct ps con;
	Contacth(&con);
	do
	{
		mom();
		int input = 0;
		scanf("%d", &input);
		switch (input)
		{
		case tianjia:
			Contacttj(&con);
			break;
		case shanchu:
			Contactsc(&con);
			break;
		case xiugai:
			Contactxg(&con);
			break;
		case chazhao:
			Contactcz(&con);
			break;
		case chakan:
			Contactck(&con);
			break;
		case tuichu:
			Contacttc(&con);
			printf("退出成功");
			p = 0;
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
	} while (p);
	return 0;
}