#include "pch.h"
#include <ctime> 
#include <cstdlib> 
#include <iomanip>
#include <iostream>
using namespace std;

float random_number(float a, float b);

int main(int argc, char* argv[])
{
	//Приклад
	//int *x = new int(9);
	//cout << "змінна х = " << *x << endl;
	//delete x;
	//Приклад
	/*srand(time(NULL));
	float *mas = new float[10];

	for (int i = 0; i < 10; i++)
		mas[i] = (rand() % 10 + 1) / float((rand() % 10 + 1));

	cout << "mas = " << endl;

	for (int i = 0; i < 10; i++)
		cout << setprecision(2) << mas[i] << endl;

	delete[] mas;
	cout << endl;*/
	//Приклад
	/*srand(time(NULL));
	float **mas = new float*[2];

	for (int count = 0; count < 2; count++)
		mas[count] = new float[5];

	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 5; j++)
			mas[i][j] = (rand() % 10 + 1) / float((rand() % 10 + 1));

	for (int i = 0; i < 2; i++) 
	{ 
		for (int j = 0; j < 5; j++)
		cout << '\t' << setprecision(2) << mas[i][j] << '\t';        
	cout << endl; 
	}

	for (int count = 0; count < 2; count++)        
		delete[] mas[count];*/

	//one dimension dynamic array

	srand(time(NULL));

	cout << "One dimension dynamic array task \n" << endl;

	float temp;
	float* one_dim_arr = new float[10];
	
	for (int i = 0; i < 10; i++)
	{
		one_dim_arr[i] = random_number(0.0f, 10.0f);
	}
		
	
	cout << "prime one dim array: ";
	
	for (int i = 0; i < 10; i++)
	{
		cout << setprecision(2) << one_dim_arr[i] << "  ";
	}
		
	
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10 - i; j++)
		{
			if (*(one_dim_arr + j) < *(one_dim_arr + j + 1))
			{
				temp = *(one_dim_arr + j);
				*(one_dim_arr + j) = *(one_dim_arr + j + 1);
				*(one_dim_arr + j + 1) = temp;
			}
		}
	}
		
	cout << endl;

	cout << "sorted one dim array: ";

	for (int i = 0; i < 10; i++)
	{
		cout << setprecision(2) << one_dim_arr[i] << "  ";
	}
		
	delete[] one_dim_arr;

	cout << "\n\n*****************************************************************************\n" << endl;

	////////////////////////////////////////////////

	//two dimension dynamic array
	
	cout << "Two dimension dynamic array task\n" << endl;

	float average_summ = 0;
	float** two_dim_arr = new float*[2];

	for (int i = 0; i < 2; i++) 
	{
		two_dim_arr[i] = new float[5];
	}

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			two_dim_arr[i][j] = random_number(-1.0f, 1.0f);
		}	
	}
		
	cout << "Prime two dim arr: \n";

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << '\t' << setprecision(2) << two_dim_arr[i][j] << '\t';
		}
		cout << endl;
	}

	cout << endl;
 
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			average_summ += two_dim_arr[i][j];
		}
	}
		
	average_summ /= 10.0F;

	cout << "It's average summ: " << average_summ << "\n" << endl;

	cout << "Sorted two dim arr: \n";
 
	for (int i = 0; i < 2; i++) 
	{
		for (int j = 0; j < 5; j++) 
		{
			if (two_dim_arr[i][j] < -0.5)
			{
				two_dim_arr[i][j] = average_summ;
			}
			cout << '\t' << setprecision(2) << two_dim_arr[i][j] << '\t';
		}
		cout << endl;
	}

	for (int i = 0; i < 2; i++)
	{
		delete[] two_dim_arr[i];
	}
		
	return 0;
}

float random_number(float a, float b)
{
	float random = ((float)rand()) / (float)RAND_MAX;
	float diff = b - a;
	float r = random * diff;

	return a + r;
}

