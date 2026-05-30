//#include <iostream>
//
//int main()
//{
//	using namespace std;
//	char ch = 'M';  // 名为ch的char类型
//	int i = ch;  // 名为i的整形
//	cout << "The ASC2 code for " << ch << " is " << i << endl;
//
//	cout << "Add one to the character code: " << endl;
//	ch = ch + 1;
//	i = ch;
//	cout << "The ASC2 code for " << ch << " is " << i << endl; // cout会把ASC2码转化成字符
//
//	cout << "Displaying char ch uing.put(ch): ";
//	cout.put(ch);
//	cout.put('!');
//	cout << endl << "Done" << endl;
//
//	char a = 88;
//	cout << "a = " << a << endl;
//	// 在 ASCII 编码中，数字 88 对应于大写字母 ‘X’。
//	// 因此，尽管你赋值的是一个数字，但当你输出 char 类型的变量 a 时，它会被转换为对应的字符X
//
//	char b = '88';
//	cout << "b = " << b << endl;
//	// " " 不同于 ' ' 一个代表的是字符串 一个代表的是字符
//	// 这行代码会导致编译错误，因为 ‘88’ 包含两个字符，而 char 类型只能存储一个字符
//	// 要么换成char b[3] = "88" 要么换成std::string b = "88"
//
//	char d[3] = "88"; // 含有三个元素的char类型数组（有个\0）
//	cout << "d = " << d << endl;
//	cout << d[0] << endl; // 8
//	cout << d[1] << endl; // 8
//	cout << d[2] << endl; // 
//
//	char c[4] = "man";
//	cout << "c = " << c << endl;
//
//	cout << char(88) << endl;
//
//	return 0;
//}