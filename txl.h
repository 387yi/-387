#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//#define MAX 100
#define MAX_NAME 10
#define MAX_DIANHUA 20
#define MAX_SEX 5
#define MAX_DIZI 20
#define REN 3



typedef struct s {
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char dianhua[MAX_DIANHUA];
	char dizi[MAX_DIZI];
}sd;
typedef struct ps {
	struct s* renshu;
	int size;
	int cont;
}ps;
enum s1 {
	tuichu,
	tianjia,
	shanchu,
	xiugai,
	chazhao,
	chakan
};
//初始化数据
void Contacth(struct ps* s);
//添加数据
void Contacttj(struct ps* s);
//删除数据
void Contactsc(struct ps* s);
//修改数据
void Contactxg(struct ps* s);
//查找数据
void Contactcz(const struct ps* s);
//查看所以数据
void Contactck(const struct ps* s);
//退出程序，归还动态内存
void Contacttc(struct ps* s);
