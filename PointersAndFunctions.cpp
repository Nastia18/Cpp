#include "pch.h"
#include <iostream>
#include <time.h> 
using namespace std;

int min_elem(int [], int);
void pos_num(int [], int);
void sel_num(int [], int);

void fill_array(int[], int);
void display_array(int[], int);

int main()
{
	int NA = 7;
	int *A = new (nothrow) int[NA];

	fill_array(A, NA);
	
	cout << "Array A: ";
	display_array(A, NA);

	cout << "\n";

	cout << "Min value of array A: " << min_elem(A, NA);

	cout << "\n";

	cout << "Positive values of array A: ";
	pos_num(A, NA);

	cout << "\n";

	cout << "Only even values of array A: ";
	sel_num(A, NA);

	cout << "\n\n\n\n";

	delete[] A;

	int NB = 14;
	int *B = new (nothrow) int[NB];

	fill_array(B, NB);

	cout << "Array B: ";
	display_array(B, NB);

	cout << "\n";

	cout << "Min value of array B: " << min_elem(B, NB);

	cout << "\n";

	cout << "Positive values of array B: ";
	pos_num(B, NB);

	cout << "\n";

	cout << "Only even values of array B: ";
	sel_num(B, NB);

	cout << "\n\n\n\n";

	delete[] B;

	int NC = 21;
	int *C = new (nothrow) int[NC];

	fill_array(C, NC);

	cout << "Array C: ";
	display_array(C, NC);

	cout << "\n";

	cout << "Min value of array C: " << min_elem(C, NC);

	cout << "\n";

	cout << "Positive values of array C: ";
	pos_num(C, NC);

	cout << "\n";

	cout << "Only even values of array C: ";
	sel_num(C, NC);

	cout << "\n\n\n\n";

	delete[] C;
}

//1
int min_elem(int array[], int array_length)
{
	int min_value = array[0];

	for (int i = 0; i < array_length; i++)
	{
		if (min_value > array[i])
		{
			min_value = array[i];
		}
	}

	return min_value;
}


//5
void pos_num(int array[], int array_length)
{

	for (int i = 0; i < array_length; i++)
	{
		if (array[i] > 0)
		{
			cout << array[i] << " ";
		} 
		else if (array[i] < 0)
		{
			cout << abs(array[i]) << " ";
		}
	}
}

//9
void sel_num(int array[], int array_length)
{
	for (int i = 0; i < array_length; i++)
	{
		if (array[i] % 2 == 0)
		{
			cout << array[i] << " ";
		}
	}
}

void fill_array(int array[], int array_length)
{
	srand((time(NULL)));
	for (int i = 0; i < array_length; i++)
	{
		array[i] = rand() % 40 - 20;
	}
}

void display_array(int array[], int array_length)
{
	for (int i = 0; i < array_length; i++)
	{
		cout << array[i] << " ";
	}
}




