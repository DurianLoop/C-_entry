//#include <iostream>
//#include <string> // 用了string
//#include <cstring> // 用了strlen（）
//
//int main()
//{
//	using namespace std;
//	char charr[20];
//	string str;// string可以自动调节长度， 未初始化的string默认为零
//	cout << "Length of string in charr before input:" << strlen(charr) << endl;
//	// 从数组的第一个元素开始计算字节数 直到遇到空字符 而空字符的位置是随机的 所以值会不同
//	cout << "Length of string in charr before input:" << str.size() << endl;
//	cout << "Enter a line of text: " << endl;
//	cin.getline(charr, 20); //cin是一个istream对象
//	// cin.getline 将输入读取到数组
//	cout << "You entered: " << charr << endl;
//	getline(cin, str); // getline不是类方法
//	// getline 将输入读取到string对象
//	cout << "You entered: " << str << endl;
//
//
//	return 0;
//}