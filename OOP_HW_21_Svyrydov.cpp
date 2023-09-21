// Create a template class called Container 
// that implements a container for storing objects of any type. 
// Your container should have methods for 
// adding, removing, searching for objects, and sorting. 
// Implement this class so that it can work with any data type.
//

#include <iostream>
#include "Container.h"
using namespace std;

int main()
{
    // Create a Container of integers
    Container<int> intContainer(5);

    // Add some integers to the container
    intContainer.add(3);
    intContainer.add(8);
    intContainer.add(1);
    intContainer.add(12);

    // Display the current elements in the container
    cout << "Current elements in the integer container: ";
    intContainer.display(); // Output: 5 3 8 1 12

    // Search for an element in the container
    int searchValue = 8;
    int index = intContainer.search(searchValue);

    if (index != -1) {
        cout << searchValue << " found at index " << index << endl;
    }
    else {
        cout << searchValue << " not found in the container" << endl;
    }

    // Sort the elements in the container
    intContainer.sort();

    // Display the sorted elements
    cout << "Sorted elements in the integer container: ";
    intContainer.display(); // Output: 1 3 5 8 12

    // Create a Container of strings
    Container<string> stringContainer("cherry");

    // Add some strings to the container
    stringContainer.add("date");
    stringContainer.add("apple");
    stringContainer.add("banana");

    // Display the current elements in the string container
    cout << endl << "Current elements in the string container: ";
    stringContainer.display(); // Output: cherry date apple banana  

    // Search for a string in the container
    string searchString = "cherry";
    index = stringContainer.search(searchString);

    if (index != -1) {
        cout << searchString << " found at index " << index << endl;
    }
    else {
        cout << searchString << " not found in the container" << endl;
    }

    // Sort the elements in the string container
    stringContainer.sort();

    // Display the sorted elements
    cout << "Sorted elements in the string container: ";
    stringContainer.display(); // Output: apple banana cherry date
}