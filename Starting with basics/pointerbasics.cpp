#include <iostream>
using namespace std;
// int main()
// {
//     int a;
//     cout << "Enter a Value : ";
//     cin >> a;
//     int *x = &a;
//     cout << "The Value of A is : " << a << endl;
//     cout << "The Address of variable A is :" << &a << endl;
//     cout << "The Address Pointer points to is : " << x << endl;
//     cout << "The Address of Pointer is : " << &x << endl;
//     cout << "The Value Stored in Pointer is :  " << *x << endl;
//     system("pause");
//     return 0;
// }

// int main()
// {
//     int a[10], i;
//     int *x = a;
//     for (i = 0; i < 10; i++)
//     {
//         cout << "Value " << i + 1 << " : " << endl;
//         cin >> a[i];
//     }
//     cout << "The array of Numbers is :" << endl;
//     for (i = 0; i < 10; i++)
//     {
//         cout << *(x + i) << endl;
//     }
//     system("pause");
//     return 0;
// }

// class num
// {
// public:
//     int value;

// public:
//     void read()
//     {
//         cout << "Enter the value :";
//         cin >> value;
//     }
//     void display()
//     {
//         cout << "The value is :" << value << endl;
//     }
// };
// void swap(int *a, int *b)
// {
//     int temp;
//     temp = *a;
//     *a = *b;
//     *b = temp;
// }

// int main()
// {
//     num n1, n2;
//     n1.read();
//     n2.read();
//     n1.display();
//     n2.display();
//     swap(&n1.value, &n2.value);
//     cout << " ***** After swap ***** " << endl;
//     n1.display();
//     n2.display();
//     system("pause");
//     return 0;
// }

int main()
{
    int i, n;
    cout << "Enter the number of values in Array : ";
    cin >> n;

    int *ptr;
    ptr = new int[n];
    for (i = 0; i < n; i++)
    {
        cout << "Enter the value" << (i + 1) << endl;
        cin >> ptr[i];
    }
    cout << "Just printing the values : " << endl;
    for (i = 0; i < n; i++)
    {
        cout << ptr[i] << endl;
    }
    delete[] ptr;
    system("pause");
    return 0;
}