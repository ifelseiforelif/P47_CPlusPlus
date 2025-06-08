#include <iostream>

//Тема: Константні методи.

class Array
{
    int* data;
    int size;



public:
    Array() : data(nullptr), size(0) {}



    Array(int newSize) : size(newSize)
    {
        data = new int[size] {};
    }



    Array(const Array& other) : size(other.size)
    {
        data = new int[size];
        for (int i = 0; i < size; ++i)
        {
            data[i] = other.data[i];
        }
    }



    ~Array()
    {
        delete[] data;
    }



    void fill()
    {
        if (size == 0) {
            std::cout << "ERROR." << std::endl;
            return;
        }
        for (int i = 0; i < size; ++i)
        {
            std::cout << "Element [" << i << "]: ";
            std::cin >> data[i];
        }
    }



    void display() const
    {
        if (size == 0 || data == nullptr) {
            std::cout << "List is empty" << std::endl;
            return;
        }
        for (int i = 0; i < size; ++i)
        {
            std::cout << data[i] << " ";
        }
        std::cout << std::endl;
    }



    void resize(int newSize)
    {
        int* newData = new int[newSize] {};
        int minSize = (newSize < size) ? newSize : size;
        for (int i = 0; i < minSize; ++i)
        {
            newData[i] = data[i];
        }
        delete[] data;
        data = newData;
        size = newSize;
    }



    void sortArray()
    {
        for (int i = 0; i < size - 1; ++i)
        {
            for (int j = 0; j < size - i - 1; ++j)
            {
                if (data[j] > data[j + 1])
                {
                    int temp = data[j];
                    data[j] = data[j + 1];
                    data[j + 1] = temp;
                }
            }
        }
    }



    int min()
    {
        if (size == 0)
        {
            std::cout << "ERROR. Array is empty" << std::endl;
            return 0;
        }
        int minVal = data[0];
        for (int i = 1; i < size; ++i)
        {
            if (data[i] < minVal)
            {
                minVal = data[i];
            }
        }
        return minVal;
    }



    int max() 
    {
        if (size == 0)
        {
            std::cout << "ERROR. Array is empty" << std::endl;
            return 0;
        }
        int maxVal = data[0];
        for (int i = 1; i < size; ++i)
        {
            if (data[i] > maxVal)
            {
                maxVal = data[i];
            }
        }
        return maxVal;
    }
};



int main() {
    Array arr;
    int choice;
    int size;



    do {
        std::cout << "1. Make list" << std::endl;
        std::cout << "2. Fill in" << std::endl;
        std::cout << "3. Display list" << std::endl;
        std::cout << "4. Find min" << std::endl;
        std::cout << "5. Find max" << std::endl;
        std::cout << "6. Sort list" << std::endl;
        std::cout << "7. Resize" << std::endl;
        std::cout << "0. Exit" << std::endl;
        std::cout << "Choice: ";
        std::cin >> choice;



        switch (choice) {
        case 1:
            std::cout << "Enter size: ";
            std::cin >> size;
            arr = Array(size);
            break;
        case 2:
            arr.fill();
            break;
        case 3:
            arr.display();
            break;
        case 4:
            std::cout << "Min: " << arr.min() << std::endl;
            break;
        case 5:
            std::cout << "Max: " << arr.max() << std::endl;
            break;
        case 6:
            arr.sortArray();
            std::cout << "List is sorted." << std::endl;
            break;
        case 7:
            std::cout << "New size: ";
            std::cin >> size;
            arr.resize(size);
            break;
        case 0:
            std::cout << "Exit." << std::endl;
            break;
        default:
            std::cout << "ERROR wrong choice." << std::endl;
        }



    } while (choice != 0);



    return 0;
}