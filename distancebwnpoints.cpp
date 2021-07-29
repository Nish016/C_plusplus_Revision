#include <iostream>
#include <math.h>
using namespace std;

class point
{
    int x;
    int y;

    public:
        friend void difference(point, point);
        point(int a, int b)
        {
            x = a;
            y = b;
        }
        void display()
        {
            cout << "Points are: (" << x << "," << y << ")" << endl;
        }
};

void difference(point o1, point o2)
{
    int x_diff =o2.x-o1.x;
    int y_diff = o2.y - o1.y;

    double dist = sqrt((x_diff) * (x_diff) + (y_diff) * (y_diff));
    cout << "Distance Between the Points is: " << dist;
}

int main()
{
    point c(1, 2), c1(3, 4);
    c.display();
    c1.display();
    cout << endl;

    difference(c, c1);

    return 0;
}