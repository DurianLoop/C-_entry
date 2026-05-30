//#include <iostream>
//#include <cstring>
//// word=="mate" 想知道字符数组中的字符串是不是mate 没法比较 因为数组名word是数组的地址 用括号引起的字符串常量也是其地址 没打比较
//int main()
//{
//	using namespace std;
//	char word[5] = "?ate";  // 两个字符的首字母不同时 strcmp不为零接着循环
//	for (char ch = 'a'; strcmp(word, "mate"); ch++)  //char=char+1 ASC2码的下一个 若两个字符首字母相同则输出0 则false跳出循环
//	{
//		cout << word << endl;
//		word[0] = ch;
//	}
//	cout << "after loop ends, word is " << word << endl;
//
//	return 0;
//}