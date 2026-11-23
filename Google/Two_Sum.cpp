//TWO SUM

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the integer Array Size: ";
    cin >> n;

    int array[n];

    for(int i = 0; i < n; i++)
    {
        cout << "Enter Array Element: ";
        cin >> array[i];
    }

    int target;
    cout << "Enter the target: ";
    cin >> target;

    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(array[i] + array[j] == target)
            {
                cout << "Indices: [" << i << ", " << j << "]";
                return 0;
            }
        }
    }

    return 0;
}
