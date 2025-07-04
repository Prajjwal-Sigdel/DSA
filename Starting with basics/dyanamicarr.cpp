#include <iostream>
using namespace std;
class num
{
public:
    int value;

public:
    void read()
    {
        cout << "Enter the value:" << endl;
        cin >> value;
    }
    void add(int arr[], int N)
    {
        for (int i = 0; i < N; i++)
        {
            arr[i] += value;
        }
    }
    void display(const int arr[], int N)
    {
        for (int i = 0; i < N; i++)
        {
            cout << arr[i] << endl;
        }
    }
};
int *makeArray(int N)
{
    int *arr = new int[N];
    for (int i = 0; i < N; i++)
    {
        arr[i] = i;
    }
    return arr;
}
int main()
{
    int N;
    num n1, n2;
    n1.read();
    n2.read();
    cout << "Enter the number of terms in Array: ";
    cin >> N;
    int *arr1 = makeArray(N);
    int *arr2 = makeArray(N + 1);
    n1.add(arr1, N);
    n2.add(arr2, N + 1);
    cout << "The Final outputs : " << endl;
    n1.display(arr1, N);
    n2.display(arr2, N + 1);
    system("pause");
    delete[] arr1;
    delete[] arr2;
    return 0;
}