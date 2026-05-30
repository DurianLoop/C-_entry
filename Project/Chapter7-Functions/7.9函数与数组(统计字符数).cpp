//#include <iostream>
//unsigned int c_in_str(const char* str, char ch);
//unsigned int c_instr(const char* str, char ch);
//int main()
//{
//	using namespace std;
//	char mmm[15] = "minimum";
//	const char* wail = "ululate";  // 右边是常量 所以左边也需要加const
//	unsigned int ms = c_in_str(mmm, 'm');
//	unsigned int us = c_instr(wail, 'u');
//	cout << ms << " m characters in " << mmm << endl;
//	cout << us << " u characters in " << wail << endl;
//
//	return 0;
//}
//
//unsigned int c_in_str(const char* str, char ch)
//{
//	unsigned int count = 0;
//	while (*str)  //str指向第一个元素的地址 *str则为第一个元素的值 不确定有多少个字符-->用while(能取出来值就行)
//	{
//		if (*str == ch)
//			count++;
//		str++;  // 指向下一个元素
//	}
//	return count;
//}
//
//unsigned int c_instr(const char* str, char ch)
//{
//	unsigned int count = 0;
//	while (*str)
//	{
//		if (*str == ch)
//			count++;
//		str++;
//	}
//	return count;
//}