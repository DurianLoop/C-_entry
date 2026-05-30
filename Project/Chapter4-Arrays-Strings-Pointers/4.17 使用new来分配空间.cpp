//#include <iostream>
//
//int main()
//{
//	using namespace std;
//	int nights = 1001;
//	cout << "nights value = ";
//	cout << nights << " location: " << &nights << endl;
//
//	int * pt = new int;
//	*pt = 1001;
//	cout << "int ";
//	cout << *pt << " location: " << pt << endl;
//
//	double * pd = new double;
//	*pd = 10000001.0;
//	cout << "pd ";
//	cout << *pd << " location: " << pd << endl;
//	cout << "size of pt = " << sizeof pt << endl;  // 根据64位计算机实际开辟的空间
//	cout << "size of *pt = " << sizeof * pt << endl; //int
//	cout << "size of pd = " << sizeof (pd) << endl;  // 根据64位计算机实际开辟的空间
//	cout << "size of *pd = " << sizeof * (pd) << endl;  //double
//	return 0;
//}