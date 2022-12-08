#include <iostream>
#include <math.h>
using namespace std;
class Point
{
public:
	float x, y;

	Point(float x, float y)
	{
		this->x = x;
		this->y = y;
	}
};
class Ñircle
{
public:
	float x, y, R;

	Ñircle(float x, float y, float R)
	{
		this->x = x;
		this->y = y;
		this->R = R;
	}
};
int main()
{
	float x, y, R;

	cout << "Enter the x coordinate of the point: ";
	cin >> x;
	cout << "Enter the y coordinate of the point: ";
	cin >> y;
	Point point(x, y);

	cout << "Enter a value for the radius of the circle: ";
	cin >> R;

	if ((x >= -R && x <= 0 && y >= -R && y <= 0 && y <= sqrt(abs(pow(x, 2) - pow(R, 2)))) || (x >= 0 && x <= R && y >= (pow(x - 1, 2)) && y <= sqrt(abs(pow(x, 2) - pow(R, 2)))))
		cout << "\nThe point with coordinates (" << point.x << ";" << point.y << ") FALLS into the shaded area!\n";
	else
		cout << "\nThe point with coordinates (" << point.x << ";" << point.y << ") does NOT fall into the shaded area!\n";
}