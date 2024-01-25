#include<iostream>
#include<cmath>// cmath for sqrt
using namespace std;

class point 
{
private:
    double a, b;

public:
    point(double a = 0, double b = 0) : a(a), b(b) {}

    double geta() const 
    {
        return a;
    }

    void seta(double a)
    {
        this->a = a;
    }

    double getb() const
    {
        return b;
    }

    void setb(double b)
    {
        this->b = b;
    }

    double dis() {
        double x, y, distance;
        cout << "enter first point:" << endl;
        cin >> x;
        cout << "enter the second point:" << endl;
        cin >> y;
        distance = sqrt(((x - a) * (x - a)) + ((y - b) * (y - b)));
        cout << "distance is: " << distance << endl;
        return distance;
    }
};

int main() 
{
    point p1(2, 2);
    p1.dis();

    return 0;
}
