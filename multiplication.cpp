#include<iostream>
using namespace std;

class multiplication {
public:
	double** multiplicator(double** matrix1, double** matrix2, double** matrix3, int p, int q, int r) {
		for (int j = 0; j < r; j++)
		{
			for (int i = 0; i < p; i++)
			{
				int sum_temp = 0;
				for (int k = 0; k < q; k++)
				{
					sum_temp = matrix1[i][k] * matrix2[k][j];
				}
				matrix3[i][j] = sum_temp;
				//matrix3[i][j] = ~~;
			}
		}
		return matrix3;
	}
};

int main()
{
	int size1, size2, size3;
	cout << "matrix size1 input : ";
	cin >> size1;
	cout << "matrix size2 input : ";
	cin >> size2;
	cout << "matrix size3 input : ";
	cin >> size3;

	double** matrix1 = new double* [size1];
	for (int i = 0; i <size1; i++)
	{
		matrix1[i] = new double[size2];
		for (int j = 0; j < size2; j++)
		{
			cout << "matrix1 [" << i << "]" << "[" << j << "]" << "factor input : ";
			cin >> matrix1[i][j];
		}
	}
	double** matrix2 = new double* [size2];
	for (int i = 0; i < size2; i++)
	{
		matrix2[i] = new double[size3];
		for (int j = 0; j < size3; j++)
		{
			cout << "matrix2 [" << i << "]" << "[" << j << "]" << "factor input : ";
			cin >> matrix2[i][j];
		}
	}
	double** matrix3 = new double* [size1];
	for (int i = 0; i < size1; i++)
	{
		matrix3[i] = new double[size3];
	}
	//m*n / n*r ũ���� ����� m*r���� 3���� ����� �����Ͽ���.

	//�Լ��� input : 
	multiplication m1;
	matrix3 = m1.multiplicator(matrix1, matrix2, matrix3, size1, size2, size3);

	cout << "matrixcoutput : " << endl;
	for (int i = 0; i < size1; i++)
	{
		for (int j = 0; j < size3; j++)
		{
			cout << "[" << i << "]" << "[" << j << "] : " << matrix3[i][j]<<" ";
		}
		cout<<endl;
	}
	//
	delete[]matrix3;
	delete[]matrix2;
	delete[]matrix1;
	
	return 0;
	//hi
}