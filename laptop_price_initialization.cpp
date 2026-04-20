#include <iostream>
using namespace std;

class Laptop
{
private:
    float laptop_price;

public:
    Laptop(float price);
    void displayPrice();
};

Laptop::Laptop(float price) 
{
    laptop_price = price;
}

void Laptop::displayPrice()
{
    cout << laptop_price << endl;
}

int main()
{
    float input_price;

    Laptop laptop_a(45000);
    Laptop laptop_b(62000);
    Laptop laptop_c(81000);

    cout << "Laptop A Price: ";
    laptop_a.displayPrice();

    cout << "Laptop B Price: ";
    laptop_b.displayPrice();

    cout << "Laptop C Price: ";
    laptop_c.displayPrice();

    return 0;
}
