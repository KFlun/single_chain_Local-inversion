#include<iostream>
using namespace std;

struct Number
{
	int number;
	Number *next;
};

int main()
{
	//创建链表
	int n = 0;
	cout << "请输入链表长度：" << endl;
	cin >> n;
	Number *head = new Number;
	Number *pass = head;
	Number *end = pass;
	Number *ePass = pass;
	cout << "请输入各结点数据：" << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> end->number;
		pass = new Number;
		end->next = pass;
		end = pass;
	}
	cout << "生成的链表为：" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << ePass->number << ",";
		ePass = ePass->next;
	}
	cout << endl;

	//原地逆置链表
	delete pass;
	Number *pass1 = head;
	Number *pass2 = head;
	//头插法
	pass1 = head->next;
	pass2 = pass1;
	head->next = NULL;
	for (int i = 1; i < n; i++)
	{
		pass1 = pass1->next;
		pass2->next = head;
		head = pass2;
		pass2 = pass1;
	}
	cout << "逆置的链表为：" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << head->number << ",";
		head = head->next;
	}
	cout << endl;
	system("pause");
	return 0;
}