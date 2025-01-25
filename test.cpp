#include <iostream>
using namespace std;
// void NaturalNumbers()
// {
//     int n;

//     cout << "Enter the no." << endl;
//     cin >> n;

//     int i = 1;

//     cout << "The Natural Number are :" << endl;

//     while (i <= n)
//     {

//         cout << i << "\t";

//         i++;
//     }
//     cout << endl;
// }

// void NaturalNumbersReverse()
// {

//     int n;

//     cout << "Enter the no." << endl;
//     cin >> n;

//     int i = n;

//     cout << "The Natural Numbers Reverse:" << endl;

//     while (i >= 1)
//     {

//         cout << i << "\t";

//         i--;
//     }
//     cout << endl;
// }

// void AllAlphabets()
// {
//     cout << "A to Z alphabets:";
//     for (int i = 65; i <= 90; i++)
//     {
//         cout << (char)i << " " << endl;
//     }

//     cout << "a to z alphabets";
//     for (int i = 97; i <= 122; i++)
//     {
//         cout << (char)i << " " << endl;
//     }
// }

// void EvenNumbers()
// {
//     int n;

//     cout << "Enter the no." << endl;
//     cin >> n;

//     cout << "The even number are :" << endl;
//     int i = 2;

//     while (i <= n)
//     {

//         if (i % 2 == 0)
//         {

//             printf("%d \n", i);
//         }

//         i++;
//     }
// }

// void OddNumbers()
// {

//     int n;

//     cout << "Enter the no." << endl;
//     cin >> n;

//     cout << "The Odd Number are :" << endl;
//     int i = 0;

//     while (i <= n)
//     {

//         if (i % 2 != 0)
//         {

//             printf("%d \n", i);
//         }

//         i++;
//     }
// }

// void SumofAllNaturalNumbers()
// {
//     int n;

//     cout << "Enter the no." << endl;
//     cin >> n;

//     int sum = 0;

//     for (int i = 1; i <= n; i++)
//     {

//         cout << i << endl;

//         sum = sum + i;
//     }
//     cout << " The Sum is " << sum << endl;
// }

// void SumofAllevenNumbers()
// {

//     int n;

//     cout << "Enter the no." << endl;
//     cin >> n;
//     cout << endl;

//     int sum = 0;

//     for (int i = 1; i <= n; i++)
//     {

//         if (i % 2 == 0)
//         {
//             cout << i << endl;
//             sum = sum + i;
//         }
//     }
//     cout << "The Sum is " << sum << endl;
// }

// void SumofAlloddNumbers()
// {

//     int n;

//     cout << "Enter the no." << endl;
//     cin >> n;
//     cout << "\n";

//     int sum = 0;

//     for (int i = 1; i <= n; i++)
//     {

//         if (i % 2 != 0)
//         {
//             cout << i << endl;
//             sum = sum + i;
//         }
//     }
//     cout << " The Sum is " << sum << endl;
// }

// void Multiplicationtable()
// {
//     int n;

//     cout << "Enter the no." << endl;
//     cin >> n;

//     cout << "\n";

//     for (int i = 1; i <= 10; i++)
//     {

//         cout << n * i << endl;
//     }
// }

void CountNumber()
{

    int n;

    cout << "Enter the no." << endl;
    cin >> n;

    cout << "\n";

    int sum = 0;

    while (n > 0)
    {

        int rem = n % 10;
        sum = sum + rem;

        n = n / 10;
    }

    cout << "The sum of the number is:  " << sum << endl;
}

int main()
{
    // NaturalNumbers();
    // NaturalNumbersReverse();
    // AllAlphabets();
    // EvenNumbers();
    // OddNumbers();
    // SumofAllNaturalNumbers();
    // SumofAllevenNumbers();
    // SumofAlloddNumbers();
    // Multiplicationtable();
    CountNumber();
    return 0;
}