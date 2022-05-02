/* Jonathan Hall
10/17/2021*/

#include <iostream>
using namespace std;

void bubbleSort(int[], int, int&);
void selectionSort(int[], int, int&);
void numOfExchanges(int, int);

int main() {
	const int size = 20;
	int list1[size] = { 15, 43, 56, 7, 83, 11, 47, 3, 24, 57, 13, 31, 27, 9, 52, 14, 66, 71, 90, 34 };
	int list2[size] = { 15, 43, 56, 7, 83, 11, 47, 3, 24, 57, 13, 31, 27, 9, 52, 14, 66, 71, 90, 34 };
	int bubbleExchanges = 0;
	int selectionExchanges = 0;

	bubbleSort(list1, size, bubbleExchanges);
	selectionSort(list2, size, selectionExchanges);
	numOfExchanges(bubbleExchanges, selectionExchanges);
}

//number of exchanges output
void numOfExchanges(int bubbleExchanges, int selectionExchanges) {
	cout << "The bubble sort algorithm took " << bubbleExchanges << " exchanges to complete." << endl;
	cout << "The selection sort algorithm took " << selectionExchanges << " exchanges to complete." << endl;
}

//bubble sort algorithm
void bubbleSort(int array[], int size, int &bubbleExchanges)
{
    bool swap;
    int temp;

    do
    {
        swap = false;
        for (int count = 0; count < (size - 1); count++)
        {
            if (array[count] > array[count + 1])
            {
                temp = array[count];
                array[count] = array[count + 1];
                array[count + 1] = temp;
                swap = true;
                bubbleExchanges++;
            }
        }
    } while (swap);
}

//selection sort algorithm
void selectionSort(int array[], int size, int &selectionExchanges)
{
    int startScan, minIndex, minValue;

    for (startScan = 0; startScan < (size - 1); startScan++)
    {
        minIndex = startScan;
        minValue = array[startScan];
        for (int index = startScan + 1; index < size; index++)
        {
            if (array[index] < minValue)
            {
                minValue = array[index];
                minIndex = index;
                selectionExchanges++;
            }
        }
        array[minIndex] = array[startScan];
        array[startScan] = minValue;
    }
}