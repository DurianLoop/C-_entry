//#include <iostream>
//const int ArSize = 80;
//int main()
//{
//	using namespace std;
//	char line[ArSize];  // char类型的数组 可以包含ArSize个数字符
//	int spaces = 0;
//	cout << "Enter a line of text:" << endl;
//	cin.get(line, ArSize); // 缓存区最大上限是ArSize 并存到line里
//	cout << "Complete line:\n" << line << endl;
//	cout << "Line through first period:\n";
//	for (int i = 0; line[i] != '\0'; i++)
//	{
//		cout << line[i];
//		if (line[i] == '.')
//			break;
//		if (line[i] != ' ')  //或者写作if(line[i] = ' ') \n spaces++
//			continue; // 跳到下一个循环 不执行下面的statement
//		spaces++;
//	}
//	cout << "\n" << spaces << "spaces\n";
//	cout << "Done!" << endl;
//
//	return 0;
//}