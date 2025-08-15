#include <iostream>
using namespace std;

void isPrime(int num)
{
    bool prime = true;
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            prime = false;
            break;
        }
    }
    if (prime == true)
    {
        cout << num;
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "enter the number :";
    cin >> n;

    for (int i = 2; i < n; i++)
    {
        isPrime(i);
    }
}
