//#include<iostream>
//
//double cube(double a);
//double recube(double& ra);
//int main()
//{
//	using namespace std;
//	double x = 3.0;
//	cout << cube(x);
//	cout << " cube of " << x << endl;
//
//	cout << recube(x);
//	cout << " cube of " << x << endl;  // x和ra绑定 一起改变
//	return 0;
//
//}
//
//double cube(double a)  // 按值传递
//{
//	a *= a * a;  // a *= a * a; 这行代码等价于 a = a * a * a;
//	return a;
//}
//
//double recube(double& ra)
//{
//	ra *= ra * ra;
//	return ra;
//}