#include <iostream>
#include <string>
using namespace std;

class BusSeat
{
    private:
        int seat_number;

    public:
        BusSeat(int seat);
        int getSeatNumber() const;
};

BusSeat::BusSeat(int seat)
{
	seat_number = seat;
}   

int BusSeat::getSeatNumber() const
{
	return seat_number;
}   

int main()
{
    BusSeat my_seat(12);

    cout << "Seat Number: " << my_seat.getSeatNumber() << endl;   

    return 0;
}

