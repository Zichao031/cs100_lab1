#include <iostream>
#include "../header/rectangle.hpp"

using namespace std;

int main()
{
<<<<<<< HEAD
	Rectangle rect1, rect2, rect3;
	rect1.set_width(3);
	rect1.set_height(4);

	rect2.set_width(4);
	rect2.set_height(2);

	rect3.set_width(3);
        rect3.set_height(4);

	cout << "Rectangle 1 area:" << rect1.area() << endl;
	cout << "Rectangle 2 area:" << rect2.area() << endl;
	cout << "Rectangle 3 area:" << rect3.area() << endl;
=======
	Rectangle rect;
	rect.set_width(3);
	rect.set_height(4);
	cout << "Rectangle area:" << rect.area() << endl;
>>>>>>> b59516acf576372101bda676bd1968f2653ecc03
	return 0;
}
