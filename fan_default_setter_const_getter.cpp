#include <iostream>
#include<string>
using namespace std;

class Fan
{
    private:
        float speed;

    public:
        Fan();
        void setSpeed(float speed);
        float getSpeed() const;
};

Fan::Fan()
{
	speed = 0;
}

void Fan::setSpeed(float speed)
{
	this->speed = speed;
}   

float Fan::getSpeed() const
{
	return speed;
}   

int main()
{
    Fan my_fan;
    float input_speed;

    cout << "Enter fan speed: ";
    cin >> input_speed;

    my_fan.setSpeed(input_speed);

    cout << "Fan speed: " << my_fan.getSpeed() << endl;  

    return 0;
}

