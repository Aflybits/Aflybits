#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//描述一个学生
//名字
//年龄
//电话
//性别
//struct Stu
//{//struct Stu-结构体类型
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}s1,s2,s3;//s1,s2,s3是三个全局结构体变量
//
////typedef struct Stu //typedef 将struct Stu-结构体类型改了名字叫Stu
////{
////	char name[20];
////	short age;
////	char tele[12];
////	char sex[5];
////}Stu;//此时Stu为类型
//
//struct S
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//
//struct T
//{
//	char ch[10];
//	struct S s;
//	char* pc;
//};
//int main()
//{//结构体：一些值的集合,可以不同类型
//	struct Stu s = { "张三", 12,"15616630652","男"};//s-局部结构体变量
//	//Stu s;
//	char arr[] = "hello bit\n";
//	struct T t = { "hehe",{10,'A',"hello world",2.00}, arr};//嵌套结构体初始化
//	printf("%s\n",t.ch);
//	printf("%s\n", t.s.arr);
//	printf("%.3lf\n", t.s.d);
//	printf("%d\n", t.s.a);
//	printf("%s\n", t.pc);
//	return 0;
//}

//struct Stu
//{//struct Stu-结构体类型
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//};
//
//void print1(struct Stu tmp)
//{
//	printf("%s\n",tmp.name);
//	printf("%d\n", tmp.age);
//	printf("%s\n", tmp.sex);
//	printf("%s\n", tmp.tele);
//}
//
//void print2(struct Stu* tmp)
//{
//	printf("%s\n", tmp->name);
//	printf("%d\n", tmp->age);
//	printf("%s\n", tmp->sex);
//	printf("%s\n", tmp->tele);
//}
//int main()
//{
//	struct Stu s = { "张三", 12,"15616630652","男" };
//	print1(s);
//	print2(&s);//首选指针，传结构体地址，节省空间
//	return 0;
//}

int Add(int a, int b)
{
	return a + b;
}
int main()
{
	int a = 10;
	int b = 20;
	int ret = Add(a,b);
	printf("%d\n",ret);
	return 0;
}
