#include <iostream>
#include <string>

using std::cout;
using std::endl;

template<typename T>
void myQuicksort(T * arr, int low, int high)
{
    if (low >= high)
    {
        return;
    }

    int left = low;
    int right = high;
    T pivot = arr[low];

    while (left < right)
    {
        while (arr[right] >= pivot && left < right)
        {
            --right;
        }

        arr[left] = arr[right];

        while (arr[left] <= pivot && left < right)
        {
            ++left;
        }

        arr[right] = arr[left];
    }

    arr[left] = pivot;
    myQuicksort(arr, low, left-1);
    myQuicksort(arr, left+1, high);
}

int main()
{
    int arr[10] = {2, 6, 8, 4, 10, 1, 7, 5, 3, 9};
    myQuicksort(arr, 0, 9);

    for (auto item : arr)
    {
        cout << item << endl;
    }

    cout << "==========" << endl;
    std::string sArr[] = {"bb", "cc", "ee", "ff", "aa", "dd"};
    myQuicksort(sArr, 0, 5);

    for (auto &item: sArr)
    {
        cout << item << endl;
    }

    return 0;
}