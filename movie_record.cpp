#include <iostream>
#include <string>
using namespace std;

class Movie
{
private:
    string movie_name;
    float ticket_price;

public:
    void setMovie(string name, float price);
    void displayMovie();
};

void Movie::setMovie(string name, float price)
{
    movie_name = name;
    ticket_price = price;
}

void Movie::displayMovie()
{
    cout << "Movie Name: " << movie_name << endl;
    cout << "Ticket Price: " << ticket_price << endl;
}

int main()
{
    Movie my_movie;
    string input_name;
    float input_price;

    cout << "Enter movie name: ";
    getline(cin, input_name);

    cout << "Enter ticket price: ";
    cin >> input_price;

    my_movie.setMovie(input_name, input_price);
    my_movie.displayMovie();

    return 0;
}
