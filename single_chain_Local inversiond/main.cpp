#include<iostream>
using namespace std;

struct Number
{
	int number;
	Number *next;
};

int main()
{
	//��������
	int n = 0;
	cout << "�����������ȣ�" << endl;
	cin >> n;
	Number *head = new Number;
	Number *pass = head;
	Number *end = pass;
	Number *ePass = pass;
	cout << "�������������ݣ�" << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> end->number;
		pass = new Number;
		end->next = pass;
		end = pass;
	}
	cout << "���ɵ�����Ϊ��" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << ePass->number << ",";
		ePass = ePass->next;
	}
	cout << endl;

	//ԭ����������
	delete pass;
	Number *pass1 = head;
	Number *pass2 = head;
	//ͷ�巨
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
	cout << "���õ�����Ϊ��" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << head->number << ",";
		head = head->next;
	}
	cout << endl;
	system("pause");
	return 0;
}