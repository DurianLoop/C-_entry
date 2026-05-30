//#include <iostream>
//
//int main()
//{
//	using namespace std;
//	char ch;
//	cout << "Type, and I shall repeat" << endl;
//	cin.get(ch);
//	while (ch != '.')
//	{
//		if (ch == '\n')
//			cout << ch;
//		else
//			// cout << ch + 1 得到的是数字
//			//ch = ch + 1;
//			//cout << ch; 
//			cout << ++ch;//当char型和整形相加char会自动转化为int型 cout会再把'a'转化为int型 可以用cout << int(ch)强制转化
//		cin.get(ch);
//	}
//	cout <<  "please excuse the slight confusion." << endl;
//	return 0;
//}