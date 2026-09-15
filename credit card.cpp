#include <iostream>
using namespace std;

bool isValid(long long number);
int sumOfDoubleEvenPlace(long long number);
int getDigit(int number);
int sumOfOddPlace(long long number);
bool prefixMatched(long long number, int d);
int getSize(long long d);
long long getPrefix(long long number, int k);

int main()
{
    long long number;

    cout << "Enter a credit card number: ";
    cin >> number;

    if (isValid(number))
        cout << number << " is valid" << endl;
    else
        cout << number << " is invalid" << endl;

    return 0;
}

bool isValid(long long number)
{
    int size = getSize(number);

    if (size < 13 || size > 16)
        return false;

    if (!(prefixMatched(number, 4) ||
          prefixMatched(number, 5) ||
          prefixMatched(number, 37) ||
          prefixMatched(number, 6)))
        return false;

    int sum = sumOfDoubleEvenPlace(number) + sumOfOddPlace(number);

    return (sum % 10 == 0);
}

int sumOfDoubleEvenPlace(long long number)
{
    int sum = 0;

    number /= 10;

    while (number > 0)
    {
        int digit = number % 10;
        sum += getDigit(digit * 2);
        number /= 100;
    }

    return sum;
}

int getDigit(int number)
{
    if (number < 10)
        return number;

    return (number / 10) + (number % 10);
}

int sumOfOddPlace(long long number)
{
    int sum = 0;

    while (number > 0)
    {
        sum += number % 10;
        number /= 100;
    }

    return sum;
}

bool prefixMatched(long long number, int d)
{
    long long prefix = getPrefix(number, getSize(d));

    return prefix == d;
}

int getSize(long long d)
{
    int count = 0;

    while (d > 0)
    {
        count++;
        d /= 10;
    }

    return count;
}

long long getPrefix(long long number, int k)
{
    int size = getSize(number);

    if (size < k)
        return number;

    for (int i = 0; i < size - k; i++)
    {
        number /= 10;
    }

    return number;
}