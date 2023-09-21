#pragma once
#include <iostream>
#include <vector>
using namespace std;

template<class T>
class Container
{
private:
	// A vector to store elements of type T.
	vector<T> arr;
public:
	// Constructor to initialize the container with an initial field.
	Container(T field)
	{
		arr.push_back(field);
	}

	// Method to add an element of type T to the container.
	void add(T field)
	{
		arr.push_back(field);
	}

	// Method to search for an element of type T in the container.
	// Returns the index of the element if found, or -1 if not found.
	int search(T field)
	{
		int i = 0;
		for (T t : arr)
		{
			if (t == field)
			{
				// Found the element, return its index.
				return i;
			}
			i++;
		}
		// Element not found in the container.
		return -1;
	}

	void dell(T field)
	{
		int index = search(field);
		if (index != 0)
		{
			arr.erase(arr.begin() + index);
		}
		else
		{
			cout << field << " not found" << endl;
		}
	}

	// Method to sort the elements in the container in ascending order.
	void sort()
	{
		bool swaped = false;
		do
		{
			swaped = false;
			for (int i = 0; i < arr.size() - 1; i++)
			{
				if (arr[i] > arr[i + 1])
				{
					swap(arr[i], arr[i + 1]);
					swaped = true;
				}
			}
		} while (swaped);
	}

	// Method to display the elements in the container.
	void display()
	{
		for (T t : arr)
		{
			cout << t << " ";
		}
		cout << endl;
	}
};

