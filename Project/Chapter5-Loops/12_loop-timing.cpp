//#include <iostream>
//// word=="mate" 没法比较 因为数组名word是数组的地址 用括号引起的字符串常量也是其地址 没法比较
//// string类字符串可以直接比较
//int main()
//{
//	using namespace std;
//	string word = "?ate";  // 两个字符的首字母不同时 
//	for (char ch = 'a'; word !="mate" ; ch++)  // 相等则false跳出循环 没有while好用
//	{
//		cout << word << endl;
//		word[0] = ch;
//	}
//	cout << "after loop ends, word is " << word << endl;
//
//	return 0;
//}