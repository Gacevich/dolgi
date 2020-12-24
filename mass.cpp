#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	srand(2);//генератор случайных чисел
	const int n = 8; //кол-во строк и столбцов
	int arr[n][n];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			arr[i][j] = rand() % 10;
		}
	}

	cout << "Двумерный массив: \n";
	for (int i = 0; i < n; i++) {

		for (int j = 0; j < n; j++) {

			cout << arr[i][j];
		}
		cout << endl;
	}

	cout << "\nСумма элементов строк: \n";
	int sum[n];
	for (int i = 0; i < n; i++)
	{
		sum[i] = 0;
		for (int j = 0; j < n; j++)
		{
			sum[i] += arr[i][j];
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << "Сумма элементов строки = " << sum[i] << endl;
	}


	cout << "\nСумма элементов столбцов: \n";
	int sum2[n];
	for (int i = 0; i < n; i++)
	{
		sum2[i] = 0;
		for (int j = 0; j < n; j++)
		{
			sum2[i] += arr[j][i];
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << "Сумма элементов столбца = " << sum2[i] << endl;
	}

	void SumMax(float a[n][n]);
	{
		float sumM = 0;
		for (int i = 0; i < n; ++i)
		{
			sum[i] = 0;
			for (int j = 0; j < n; j++)
				sum[i] += arr[i][j];
			if (sumM < sum[i])
			{
				sumM = sum[i];
			}
		}
		for (int i = 0; i < n; ++i)
		{
			sum2[i] = 0;
			for (int j = 0; j < n; j++)
				sum2[i] += arr[j][i];
			if (sumM < sum2[i])
			{
				sumM = sum2[i];
			}
		}
		cout << "\nСамая большая сумма среди элементов: " << sumM << endl;
	}

	return 0;
}