//#include <iostream>·
//const double* f1(const double* ar, int n);
//const double* f2(const double ar[], int n);
//const double* f3(const double[], int);
//int main()
//{
//	using namespace std;
//	double av[3] = { 1112.3, 1543.5, 2227.9 };
//	const double* (*p1)(const double*, int) = f1;  // f1为函数的入口地址赋给了函数指针
//	auto p2 = f2;
//	// const double* (*p2)(const double*, int) = f2; 与上面同义
//	cout << "Address           value" << endl;
//	cout << (*p1)(av, 3) << ": " << *(*p1)(av, 3) << endl; // *(*p1)(av, 3)把第一个元素的值取出来
//	cout << p1(av, 3) << ": " << *p1(av, 3) << endl;  // *p1 和p1 等价   *的优先级低
//	cout << p2(av, 3) << ": " << *p2(av, 3) << endl;  // 取出第二个元素的值
//	const double* ()
//	return 0;
//}
//
//const double* f1(const double* ar, int n)
//{
//	return ar;  // ar = ar + 0 = &ar[0]
//}
//
//const double* f2(const double ar[], int n)
//{
//	return ar + 1;  // ar + 1 = &ar[1]
//}
//
//const double* f3(const double ar[], int n)
//{
//	return ar + 2;  // ar + 2 = &ar[2]
//}