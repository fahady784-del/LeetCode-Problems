/*Input
nums = [2, 7, 11, 15]
target = 9

Output:
[0, 1]
*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the integer Array Size:";
    cin >> n;

    int array[n];

    for(int i = 0;i<n;i++)
    {
        cout << "Enter the Array Elements:";
        cin >> array[i];
    }

    int target;
    cout<<"Add the target you want to Achieve: ";
    cin>>target;

    int index = 0;
    int index1 = 1;
    for(int i=0;i<n;i++){
        if(array[index]+array[index1] == target){
            cout<<index,index1;
        }
    }

    return 0;
}
