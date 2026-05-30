//#include<iostream>
//#include<cstring> // for the strlen()function 使用了string就要加
//int main()
//{
//	using namespace std;
//	const int Size = 15; // 不加const会报错
//	char name1[Size];
//	char name2[Size] = "C++owboy";  // C风格字符串 最后有一个隐藏的\0
//	cout << "Howdy! I'm " << name2;
//	cout << " What's your name?\n";
//	cin >> name1;
//	cout << "Well." << name1 << ", your name has ";
//	cout << strlen(name1) << " letters and is stored\n";  // strlen( )指出“可见”字符串的长度即字母数量
//	cout << "in an array of " << sizeof(name1) << " bytes.\n";  // sizeof( ) 字节数 char类型一个字节 一共十五个
//	cout << "your initial is " << name1[0] << ".\n";
//	name2[3] = '\0';
//	cout << "Here are the first 3 characters of my name: ";
//	cout << name2 << endl;
//	using namespace std;
//	char cat[4] = "bea"; // 初始化字符串的简单方法不用加\0但是要留一位
//	char dog[4] = { 'b', 'e', 'a', '\0' }; // char数组 初始化字符串
//	char mouse[4] = { 'b','e', 'a', 'r' }; // char数组 not初始化字符串
//	cout << cat << endl;
//	cout << dog << endl;
//	cout << mouse << endl; // won't stop until it come across /0
//	
//	
//	return 0;
//}