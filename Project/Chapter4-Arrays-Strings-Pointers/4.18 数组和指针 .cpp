//#include <iostream>
//
//int main()
//{
//	using namespace std;
//	double* p3 = new double[3];  //  把指针 = 数组名 = 数组的第一个元素的地址
//	p3[0] = 0.2;
//	p3[1] = 0.5;
//	p3[2] = 0.8;
//	cout << "p3 = " << p3 << endl;
//	cout << "*p3 = " << *p3 << endl;// p3指向数组的第一个元素
//	cout << "p3[0]: " << p3[0] << endl;
//	cout << "p3[1]: " << p3[1] << endl;
//	p3 = p3 + 1;  // p3往后移动一位 将指针变量加一后 增加的量等于它指向的类型的字节数
//	cout << "p3[0]: " << p3[0] << endl;
//	cout << "p3[1]: " << p3[1] << endl;
//	p3 = p3 - 1;
//	cout << "p3[0]: " << p3[0] << endl;
//	cout << "p3[1]: " << p3[1] << endl;
//	delete[] p3;
//
//	return 0;
//}