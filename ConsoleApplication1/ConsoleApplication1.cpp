// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

void func(int A[], int m)
{
	int num_neg = 0, num_pos = 0, num_nul = 0;
	for (int i = 0; i < m; i++)
	{
		if (A[i] < 0) num_neg++;
		if (A[i] > 0) num_pos++;
		if (A[i] == 0) num_nul++;
	}
	int *neg = new int[num_neg];
	int *pos = new int[num_pos];
	int *nul = new int[num_nul];

	num_neg = 0;
	num_pos = 0;
	num_nul = 0;
	for (int i = 0; i < m; i++)
	{
		if (A[i] < 0)
		{
			neg[num_neg] = A[i];
			num_neg++;
		}
		if (A[i] > 0)
		{
			pos[num_pos] = A[i];
			num_pos++;
		}
		if (A[i] == 0)
		{
			nul[num_nul] = A[i];
			num_nul++;
		}
	}
}


int main()
{
	int m;
	cout << "Input the size of array: ";
	cin >> m;
	int * A = new int[m];
	cout << "\nArray A:\n";
	for (int i = 0; i < m; i++)
	{
		A[i] = rand() % 20;
		cout << A[i] << " ";
	}
	func(A, m);
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
