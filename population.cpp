
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
