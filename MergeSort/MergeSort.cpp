// InsertionSort.cpp 

#include <iostream>

void mergeSort(int data[], int size);
void swap(int& x, int& y);
void printArray(int data[], int size);


int main()
{
    int data[] = { 3, 8, 9, 2, 4, 7, 1 };

    printArray(data, sizeof(data) / sizeof(1));

    mergeSort(data, sizeof(data) / sizeof(1));

    printArray(data, sizeof(data) / sizeof(1));

}


void mergeSort(int data[], int size)
{
    int startScan;
    int index;
    int minIndex;
    int minValue;

    for (startScan = 0; startScan < (size - 1); startScan++)
    {
        minIndex = startScan;
        minValue = data[startScan];

        for (int index = startScan + 1; index < size; index++)
        {
            if (data[index] < minValue)
            {
                minValue = data[index];
                minIndex = index;
            }
        }

        swap(data[minIndex], data[startScan]);
    }
}

void swap(int& x, int& y)
{
    int temp = x;
    x = y;
    y = temp;
}

void printArray(int data[], int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << data[i] << ", ";
    }
    std::cout << std::endl;
}
