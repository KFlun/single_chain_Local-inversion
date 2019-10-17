#include<iostream>
using namespace std;

void inersion(int chain[], int size);

int main()
{
	int n;
	cout << "请输入数组元素个数：" << endl;
	cin >> n;
	int *chain = new int[n];
	cout << "请输入数组元素：" << endl;
	for (int i = 0; i < n; i++)
		cin >> chain[i];
	cout << "你输入的元素：" << endl;
	for (int i = 0; i < n; i++)
		cout << chain[i] << ",";
	cout << endl;
	inersion(chain, n);
	cout << "原地转置后的元素：" << endl;
	for (int i = 0; i < n; i++)
		cout << chain[i] << ",";
	cout << endl;
	system("pause");
	return 0;
}

void inersion(int chain[], int size)
{
	for (int i = 0; i < (size / 2); i++)
	{
		int before = chain[i];
		int back = chain[size - 1 - i];
		chain[i] = back;
		chain[size - 1 - i] = before;
	}
	
}