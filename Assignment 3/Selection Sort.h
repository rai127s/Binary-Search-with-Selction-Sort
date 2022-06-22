#pragma once

template < class ItemType>
void Swap(ItemType& item1, ItemType& item2)
{
	ItemType tempItem;  // temporary holding area for swap

	tempItem = item1;
	item1 = item2;
	item2 = tempItem;
}

template  <class ItemType>
int minIndex(ItemType values[], int startIndex, int endIndex)
{
	int indexOfMin = startIndex;
	for (int index = indexOfMin + 1; index <= endIndex; index++)
	{
		if (values[index] < values[indexOfMin])
			indexOfMin = index;
	}
	return indexOfMin;
}

template  <class ItemType>
void SelectionSort(ItemType values[], int numValues)
{
	int endIndex = numValues - 1;
	for (int current = 0; current < endIndex; current++)
	{
		Swap(values[current], values[minIndex(values, current, endIndex)]);
	}
}
