#include "pch.h"
#include <iostream>
using namespace std;

int getIndexOf(int array[], int array_length, int value);
void getSimpleNumbers(int array[], int array_length);
void drawBorder(int width, int heigth, int thick);

int main()
{	
	int array_length = 10;
	int *array = new(nothrow) int[array_length];

	cout << "Prime array: ";

	for (int i = 0; i < array_length; i++) 
	{
		array[i] = i;
	}

	int find_value = 5;

	cout << "\n\nIndex of " << find_value << " : " << getIndexOf(array, array_length, find_value) << "\n\n";

	cout << "Simple numbers: ";
	getSimpleNumbers(array, array_length);

	delete[] array;

	cout << endl;

	//drawBorder(10, 5, 2);

}


int getIndexOf(int array[], int array_length, int value)
{
	for (int i = 0; i < array_length; i++)
	{
		cout << array[i] << " ";
	}

	int index = -1;

	for (int i = 0; i < array_length; i++)
	{
		if (value == array[i])
		{
			index = i;
		}
	}

	return index;
}

void getSimpleNumbers(int array[], int array_length)
{
	for (int i = 0; i < array_length; i++)
	{
		if (array[i] % 2 != 0 && array[i] % 3 != 0)
		{
			cout << array[i] << " ";
		}
	}
}

void drawBorder(int width, int heigth, int thick)
{
	int full_height = heigth + thick * 2;
	int full_width = width + thick * 2;

	string **array = new(nothrow) string*[full_height];

	for (int i = 0; i < full_height; i++)
	{
		array[i] = new string[full_width];
	}

	for (int i = 0; i < full_height; i++)
	{
		for (int j = 0; j < full_width; i++)
		{
			if (i < thick)
			{
				array[i][j] = "*";
			} 
			else if ((i > thick && i < full_height - thick) && (j < thick && j > full_width - thick))
			{
				array[i][j] = " ";
			} 
			else if (i > full_height - thick && j > full_width)
			{
				array[i][j] = "*";
			}
		}
	}

	for (int i = 0; i < full_height; i++)
	{
		delete[] array[i];
	}
}

