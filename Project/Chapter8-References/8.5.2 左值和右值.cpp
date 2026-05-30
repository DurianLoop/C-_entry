//#include <iostream>
//
//// 非常量的引用必须为左值 能加取址的就是左值
//int main()
//{
//	using namespace std;
//	int a = 5; // 'a' 是一个左值，因为它是一个持久的对象
//	int b = a; // 'a' 是一个左值，被赋值给 'b'
//	int c = 10; // '10' 是一个右值，因为它是一个字面量
//	// 像10、表达式x+3、字符'a'都是字面值
//
//	int a = 10; // 10, a+2, 'a'
//	cout << &"abc" << endl;
//	const string& b = "abc";  // 需要加const的原因是防止b去改变字符串常量"abc"
//	const int& c = 'a';  // 需要加const是因为'a'是左值
//
//	// 右值引用
//	int&& a = 10;
//
//	return 0;
//}