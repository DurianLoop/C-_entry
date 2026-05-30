////#include <iostream>
//////Write a program that prompts the user to enter two points (x1, y1) and (x2, y2) and displays their distances. The formula for computing the distance is . Note you can use pow(a, 0.5) to compute . Here is a sample run.
////int main()
////{
////	using namespace std;
////	cout << "Please enter two points " << endl;
////	double X1, Y1, X2, Y2;
////	cin >> X1;
////	cin >> Y1;
////	cin >> X2;
////	cin >> Y2;
////	double distance = sqrt(pow(X1 - X2, 2) + pow(Y1 - Y2, 2));
////	cout << distance;
////
////	return 0;
////}


//#include <iostream>
//#include <cmath> // 包含sqrt函数
//using namespace std;
//struct Point
//{
//	double X;
//	double Y;
//};
//double Distance(Point A, Point B);
//
//int main()
//{
//	double X1, Y1, X2, Y2;
//	cin >> X1 >> Y1 >> X2 >> Y2; // 合并输入语句
//	Point A = { X1, Y1 };
//	Point B = { X2, Y2 };
//	double dis = Distance(A, B);
//	cout << "The distance between A and B is " << dis << endl;
//	return 0;
//}
//
//double Distance(Point A, Point B)
//{
//	double distance2D = sqrt(pow(A.X - B.X, 2) + pow(A.Y - B.Y, 2));
//	return distance2D;
//}