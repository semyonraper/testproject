#include "Point2D.h"

int main() {
	Point2D point1(3, 6);
	Point2D point2(5, 7);

	Point2D point3;// = point1.sum(point2);

	point3 = point1 + point2;
	/*point3 = point1 - point2;
	point3 = point1 * point2;*/

	cout << point1.getInfo() << endl;
	cout << point2.getInfo() << endl;
	cout << point3.getInfo() << endl;

	return 0;
}
