#include"txl.h"

int kan(struct ps* s)
{
	printf("������Ҫ����������:>");
	char a[MAX_NAME];
	scanf("%s", a);
	int i = 0;
	for (i = 0; i < s->size; i++)
	{
		if (strcmp(s->renshu[i].name, a) == 0)
		{
			break;
		}
	}
	return i;
}
void Contacth(struct ps* s)
{
	s->renshu = (sd*)calloc(REN, sizeof(sd));
	if (s->renshu == NULL)
	{
		return;
	}
	s->size = 0;//����ͨѶ¼���Ԫ��Ϊ0
	s->cont = REN;
}
void kuoren(struct ps* s)
{
	if (s->size == s->cont)
	{
		struct ps* p = (struct ps*)realloc(s->renshu,sizeof(sd) * (s->cont+2));
		if (p != NULL)
		{
			s->renshu = p;
			printf("���ݳɹ�\n");
			s->cont += 2;
		}
		else
			printf("����ʧ��\n");
	}
}
void Contacttj(struct ps* s)
{
	kuoren(s);
	printf("���������֣�>\n");
	scanf("%s", s->renshu[s->size].name);
	printf("���������䣺>\n");
	scanf("%d", &(s->renshu[s->size].age));
	printf("�������Ա�>\n");
	scanf("%s", s->renshu[s->size].sex);
	printf("������绰��>\n");
	scanf("%s", s->renshu[s->size].dianhua);
	printf("�������ַ��>\n");
	scanf("%s", s->renshu[s->size].dizi);
	s->size++;
	printf("��ӳɹ�\n");
	/*if (s->size == MAX) 
	{
		printf("ͨѶ¼�Ѿ�����");
	}
	else
	{
		printf("���������֣�>\n");
		scanf("%s", s->renshu[s->size].name);
		printf("���������䣺>\n");
		scanf("%d", &(s->renshu[s->size].age));
		printf("�������Ա�>\n");
		scanf("%s", s->renshu[s->size].sex);
		printf("������绰��>\n");
		scanf("%s", s->renshu[s->size].dianhua);
		printf("�������ַ��>\n");
		scanf("%s", s->renshu[s->size].dizi);
		s->size++;
		printf("��ӳɹ�\n");
	}*/
}
void Contactck(const struct ps* s)
{
	if (s->size == 0)
		printf("ͨѶ¼Ϊ��\n");
	else
	{
		int i = 0;
		printf("%-5s\t%-4s\t%-5s\t%-12s\t%-20s\n","����","����","�Ա�","�绰","��ַ");
		for (i = 0; i < s->size; i++)
		{
			printf("%-5s\t%-4d\t%-5s\t%-12s\t%-20s\n",
				s->renshu[i].name,
				s->renshu[i].age,
				s->renshu[i].sex,
				s->renshu[i].dianhua,
				s->renshu[i].dizi);
		}
	}
}
void Contactsc(struct ps* s)
{
	
	int i=kan(s);
	if (i == s->size) {
		printf("ɾ�����󲻴���\n");
	}
	else
	{
		int j = i;
		for (j = i; j < (s->size) - 1; i++)
		{
			s->renshu[j] = s->renshu[j + 1];
		}
		s->size--;
		printf("ɾ���ɹ�\n");
	}
}
void Contactxg(struct ps* s)
{
	int i = kan(s);
	if (i == s->size)
	{
		printf("�������󲻴���\n");
	}
	else
	{
		printf("���������֣�>\n");
		scanf("%s", s->renshu[i].name);
		printf("���������䣺>\n");
		scanf("%d", &(s->renshu[i].age));
		printf("�������Ա�>\n");
		scanf("%s", s->renshu[i].sex);
		printf("������绰��>\n");
		scanf("%s", s->renshu[i].dianhua);
		printf("�������ַ��>\n");
		scanf("%s", s->renshu[i].dizi);
		printf("�޸ĳɹ�\n");
	}
}
void Contactcz(const struct ps* s)
{
	int i = kan(s);
	if (i == s->size)
	{
		printf("�������󲻴���\n");
	}
	else
	{
		printf("%-5s\t%-4s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
		printf("%-5s\t%-4d\t%-5s\t%-12s\t%-20s\n",
				s->renshu[i].name,
				s->renshu[i].age,
				s->renshu[i].sex,
				s->renshu[i].dianhua,
				s->renshu[i].dizi);
	}
}
void Contacttc(struct ps* s)
{
	free(s->renshu);
	s->renshu = NULL;
}