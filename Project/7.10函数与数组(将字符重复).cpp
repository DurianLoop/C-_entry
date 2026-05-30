//#include <iostream>
//char* buildstr(char c, int n);
//int main()
//{
//	using namespace std;
//	int times;
//	char ch;
//	cout << "Enter a character: ";
//	cin >> ch;
//	cout << "Enter an integer: ";
//	cin >> times;
//	char* ps = buildstr(ch, times);
//	cout << ps << endl;  //cout会把字符串地址打成对应的字符
//	delete[] ps;  // 删掉的是ps指向的值 ps指针仍然存在还可以指向其他地方
//	ps = buildstr('+', 20);
//	cout << ps << endl;
//	delete[] ps;
//
//	return 0;
//}
//
//char* buildstr(char c, int n)
//{
//	char* pstr = new char[n + 1];
//	pstr[n] = '\0';  // 最后一项 下标为n 第n+1个数
//	while (n-- > 0)  // 下标比元素少1
//		pstr[n] = c;
//	return pstr;
//}