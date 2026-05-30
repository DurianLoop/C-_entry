//# include <iostream>
//#include <cmath>   // 对于 std::fabs 计算浮点数的绝对值
//struct point
//{
//	double x;
//	double y;
//};
//struct circle
//{
//	point c;
//	double r;
//};
//double Distance(point A, point B);
//int main()
//{
//	using namespace std;
//	double x1, y1, r1;
//	cout << "Please enter the x coordinate, y coordinate and the radius of the first circle " << endl;
//	cin >> x1 >> y1 >> r1;
//	point A = { x1, y1 };
//	double x2, y2, r2;
//	cout << "Please enter the x coordinate, y coordinate and the radius of the second circle " << endl;
//	cin >> x2 >> y2 >> r2;
//	point B = { x2, y2 };
//	double dis = Distance(A, B);
//	if (dis <= fabs(r1 - r2))
//	{
//		cout << "One circle is inside the other circle1" << endl;
//	}
//	else {
//		if (dis <= r1 + r2)
//		{
//			cout << "circle2 overlaps circle1" << endl;
//		}
//		else {
//			cout << "The two circles do not intersect" << endl;
//		}
//	}
//
//	return 0;
//}
//
//double Distance(point A, point B)
//{
//	double distance = sqrt(pow(A.x - B.x, 2) + pow(A.y - B.y, 2));
//	return distance;
//}