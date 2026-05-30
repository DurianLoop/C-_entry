//#include<iostream>
//
//double cube(double a);
//double recube(const double& ra);
//int main()
//{
//	using namespace std;
//	double x = 3.0;
//	cout << cube(x);
//	cout << " cube of " << x << endl;
//
//	cout << recube(x+2);  // 右值引用需要加const
//	cout << " cube of " << x << endl;
//
//	cout << recube('a');  // 右值引用需要加const
//	cout << " cube of " << x << endl;
//
//	cout << recube(10);  // 右值引用需要加const
//	cout << " cube of " << x << endl;
//
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
//double recube(const double& ra)
//{
//	return ra * ra * ra;
//}