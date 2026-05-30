//#include <iostream>
//#include<cstring>
//#pragma warning(disable:4996)
//int main()
//{
//	using namespace std;
//	char animal[20] = "bear";  // char比较特殊
//	cout << animal << endl;  // 会打印地址对应的字符
//
//	double people[10] = { 1,2,3 };  // 一般情况
//	cout << people << endl;  // people默认为第一个元素的地址
//	cout << &people[0] << endl;
//	cout << people[0] << endl;
//	cout << *people << endl;
//
//	const char* bird = "wren";
//	cout << *bird << endl;
//	cout << bird << endl;
//	cout << &bird << endl;
//	cout << bird[0] << endl;
//	cout << &bird[0] << endl;
//
//	char* ps;
//	cout << "Enter a kind of animal： " << endl;
//	cin >> animal;
//	cout << animal << " at " << (int*)animal << endl;  // 强制类型转化打印animal的首地址
//	ps = animal;  // 使指针ps指向animal的首地址
//	cout << ps << " at " << (int*)ps << endl;
//
//	ps = new char[strlen(animal) + 1];  //开辟了一个新的属于ps的空间
//	strcpy(ps, animal);  // 把animal地址里的内容赋值给ps的空间
//	cout << ps << " at " << (int*)ps << endl;
//	delete[] ps;  // new知后一定要记得delete
//	
//
//	return 0;
//}