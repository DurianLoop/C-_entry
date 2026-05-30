//#include <iostream>
//#include<cctype>
//int main()
//{
//	using namespace std;
//	cout << "Enter text for analysis, and type @ to terminate input. " << endl;
//	char ch;
//	int whitespace = 0;
//	int digits = 0;
//	int chars = 0;
//	int punct = 0;
//	int others = 0;
//
//	cin.get(ch);
//	while (ch != '@')  //输入@来结束循环
//	{
//		if (isalpha(ch))  //如果参数是字母，则返回true
//			chars++;
//		else if (isspace(ch))  //空格 换行符 回车 制表符
//			whitespace++;
//		else if (isdigit(ch))  //数字
//			digits++;
//		else if (ispunct(ch))  //标点符号
//			punct++;
//		else
//			others++;
//		cin.get(ch);
//	}
//	cout << chars << " letters, " << whitespace << " whitespaces," << digits << " digits,"
//		<< punct << " punctuations," << others << " others." << endl;
//	return 0;
//}