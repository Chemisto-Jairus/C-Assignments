// (Population projection) UBoS projects population based on the
// following assumptions:
// One birth every 7 seconds
// One death every 13 seconds
// One new immigrant every 45 seconds
// Write a program to display the population for each of the next five years. Assume the current population is 312032486 and one year has 365 days.

#include <iostream>

int main()
{
    const long long currentPopulation = 312032486;
    const int secondsPerYear = 365 * 24 * 60 * 60;
    const int secondsPerBirth = 7;
    const int secondsPerDeath = 13;
    const int secondsPerImmigrant = 45;

    long long population = currentPopulation;

    for (int year = 1; year <= 5; ++year)
    {
        long long births = secondsPerYear / secondsPerBirth;
        long long deaths = secondsPerYear / secondsPerDeath;
        long long immigrants = secondsPerYear / secondsPerImmigrant;

        population += births - deaths + immigrants;

        std::cout << "Year " << year << ": " << population << std::endl;
    }

    return 0;
}
