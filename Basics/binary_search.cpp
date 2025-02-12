#include <iostream>
#include <vector>
using namespace std;
// Recursive way
int Rbinary_search(vector<int> arr, int key, int low, int high)
{
    int mid = (low + high) / 2;
    if (low > high)
        return -1;
    if (arr.at(mid) == key)
        return mid;
    else if (key > arr.at(mid))
    {
        low = mid + 1;
        return Rbinary_search(arr, key, low, high);
    }
    else
    {
        high = mid - 1;
        return Rbinary_search(arr, key, low, high);
    }
}

// Iterative way
int binary_search(vector<int> arr, int key)
{
    int low = 0, high = arr.size()-1, mid = (low + high) / 2;
    while (low < high)
    {
        if (arr.at(mid) == key)
            return mid;
        else if (key > arr.at(mid))
        {
            low = mid + 1;
            mid = low / 2 + high / 2;
            // return binary_search(arr, key, low, high);
        }
        else
        {
            high = mid - 1;
            mid = low / 2 + high / 2;
            // return binary_search(arr, key, low, high);
        }
    }
}

    int main()
    {
        vector<int> arr{2, 4, 6, 7, 9, 45, 67, 89};
        int key = 45;
        // cout << arr.size();
        cout << binary_search(arr, key)<<endl;
        cout << Rbinary_search(arr, key, 0, arr.size()-1);
    }