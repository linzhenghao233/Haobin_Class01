#include <stdio.h>
#include <string.h>
/*
int main(void) {
	double* p;	//ָ�������32λϵͳռ4�ֽڣ�64λϵͳռ8�ֽ�
	double x = 66.6;

	p = &x;		//xռ8���ֽڣ�1���ֽ���8λ��1���ֽ�һ����ַ

	double arr[3] = { 1.1, 2.2, 3.3 };
	double* q;

	q = &arr[0];
	printf("%p\n", q);		//%pʵ�ʾ�����ʮ���������
	q = &arr[1];
	printf("%p\n", q);		//��������double��ַ��8���ֽ�

	return 0;
}
*/

/*
void f(int **);

int main(void) {
	int i = 10;
	int* p = &i;

	printf("%p\n", p);
	f(&p);
	printf("%p\n", p);

	return 0;
}

void f(int** p) {
	*p = (int*)0xFFFFFFFF;
}
*/


/*�ṹ��*/
/*
struct Student {
	int sid;
	char name[20];
	int age;
};//�ֺŲ���ʡ

int main(void) {
	struct Student st = { 1000, "zhangsan", 20};
	printf("%d %s %d\n", st.sid, st.name, st.age);

	st.sid = 99;
	//st.name = "lisi";	//error
	strcpy(st.name, "lisi");
	st.age = 22;

	return 0;
}
*/

/*
struct Student {
	int sid;
	char name[20];
	int age;
};

int main(void) {
	struct Student st = { 1000, "zhangsan", 20 };
	//st.sid = 99;	//��һ�ַ�ʽ

	struct Student* pst;
	pst = &st;
	pst->sid = 9;	//�ڶ��ַ�ʽ��pst->sid �ȼ��� (*pst).sid

	return 0;
}
*/

/*
struct Student {
	int sid;
	char name[20];
	int age;
};

void f(struct Student* pst);
void g(struct Student pst);
void g2(struct Student* st);

int main(void) {
	struct Student st;

	f(&st);
	g(st);
	g2(&st);

	//printf("%d %s %d\n", st.sid, st.name, st.age);

	return 0;
}

void f(struct Student* pst) {
	(*pst).sid = 99;
	strcpy_s(pst->name, sizeof(pst->name),  "zhangsan");		//û��s�Ļ᲻֪��ָ��Ŀ�껺�����Ĵ�С���Ӷ������������
	pst->age = 22;
}

//���ַ�ʽ���ڴ棬��ʱ�䣬���Ƽ�
void g(struct Student st) {
	printf("%d %s %d\n", st.sid, st.name, st.age);
}

void g2(struct Student* st) {
	printf("%d %s %d\n", st->sid, st->name, st->age);
}
*/


