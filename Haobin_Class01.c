#include <stdio.h>
#include <string.h>
/*
int main(void) {
	double* p;	//指针变量在32位系统占4字节，64位系统占8字节
	double x = 66.6;

	p = &x;		//x占8个字节，1个字节是8位，1个字节一个地址

	double arr[3] = { 1.1, 2.2, 3.3 };
	double* q;

	q = &arr[0];
	printf("%p\n", q);		//%p实际就是以十六进制输出
	q = &arr[1];
	printf("%p\n", q);		//两个相邻double地址差8个字节

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


/*结构体*/
/*
struct Student {
	int sid;
	char name[20];
	int age;
};//分号不能省

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
	//st.sid = 99;	//第一种方式

	struct Student* pst;
	pst = &st;
	pst->sid = 9;	//第二种方式，pst->sid 等价于 (*pst).sid

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
	strcpy_s(pst->name, sizeof(pst->name),  "zhangsan");		//没加s的会不知道指定目标缓冲区的大小，从而导致容易溢出
	pst->age = 22;
}

//这种方式耗内存，耗时间，不推荐
void g(struct Student st) {
	printf("%d %s %d\n", st.sid, st.name, st.age);
}

void g2(struct Student* st) {
	printf("%d %s %d\n", st->sid, st->name, st->age);
}
*/


