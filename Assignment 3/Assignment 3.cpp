#include<iostream>
#include<String>
#include "Selection Sort.h"
using namespace std;

void BinarySearch(string names[], string item, bool& found);

int main()
{
	//create string array with const instead of 14
	string names[] = { "Jon", "Dot", "Eva", "Roy", "Guy", "Jan", "Tom", "Jim", "Ann", "Kim", "Ron", "Tim", "Kay", "Amy" };

	int counter = 0;
	int size = sizeof(names) / sizeof(names[0]);

	cout << "The class list before sorting : \n\n";
	for (int i = 0; i < size; i++)
	{
		cout << names[i] << "\n";
	}

	
	SelectionSort(names, size);

	cout << "\nThe class list after sorting : \n\n";
	

	for (int i = 0; i < size; i++)
	{
		cout << names[i] << "\n";
	}


	string target;
	bool found;
	cout << "\nPlease enter a name  : ";
	cin >> target;



	BinarySearch(names, target, found);

	if (found)
	{
		cout << "\nElement found !";
	}
	else
	{
		cout << "\n Not Found";
	}


}

void BinarySearch(string names[], string item, bool& found)
{
	int MidPoint, First = 0, Last = 13;
	//of the first is equal to the last
	bool MoreToSearch = First <= Last;
	found = false;
	while (MoreToSearch && !found)
	{
		MidPoint = (First + Last) / 2;
		if (item < names[MidPoint])
		{
			Last = MidPoint - 1;
			MoreToSearch = First <= Last;
		}
		else if (item > names[MidPoint])
		{
			First = MidPoint + 1;
			MoreToSearch = First <= Last;
		}
		else
		{
			cout << "Index in array :  " << MidPoint << "\n\n";
			cout << "Name in array :  " << names[MidPoint] << "\n\n";
			found = true;
		}
	}
}