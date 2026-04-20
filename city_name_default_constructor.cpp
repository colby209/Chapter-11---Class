#include <iostream>
#include<string>
using namespace std;

class City
{
private:
    string city_name;

public:
    City();
    void displayCity();
};

City::City()
{
    city_name = "Montgomery";
}

void City::displayCity()
{
    cout << "City Name: " << city_name << endl;
}

int main()
{
    City my_city;

    my_city.displayCity();

    return 0;
}

