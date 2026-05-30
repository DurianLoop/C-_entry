//#include <iostream>
//
//int main()
//{
//	using namespace std;
//	/*int a = 10;
//	int* pt = &a;
//	cout << *pt << endl;
//	*pt = 20;
//	cout << a << endl;*/
//
//	//int a = 10;
//	//const int* pt = &a;
//	//cout << *pt << endl;
//	//*pt = 20;  // 会报错因为加上了const不能通过指针修改数值
//	//cout << a << endl;
//
//	//int a = 10;
//	//const int* pt = &a;  // *pt是常量 不能更改pt指向空间的值 同上
//	//cout << *pt << endl;
//	//a = 20;
//	//cout << *pt << endl;  // 20 因为a前没加const且指针依旧指向a
//	//int b = 30;
//	//pt = &b;
//	//cout << *pt << endl;  // 指针可以改指向
//
//	//int a = 10;
//	//int b = 30;
//	//int* const pt = &a;  //不能改变pt指针的指向
//	////pt = &b;  //会报错
//	//*pt = 20;  // 地址里的值可以改变
//	//cout << *pt << endl;
//	//cout << a << endl;  // a也同时改变
//
//	//int a = 10;
//	//int b = 30;
//	//const int* const pt = &a;  //既不能通过指针更改地址的数值 也不能更改指针的指向
//	///*pt = &b;  // 会报错
//	//*pt = 20;*/  // 会报错
//
//
//
//	return 0;
//}