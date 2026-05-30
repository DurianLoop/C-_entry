//#include <iostream>
//
//int main()
//{
//	using namespace std;
//	int ch1;
//	char ch2;
//	cin >> ch1; //将a赋值到ch1会使cin失效 此时缓存区含有a和回车
//	cout << "ch1 = " << ch1;
//	cin >> ch2;
//	cout << "ch2 = " << ch2;
//	cout << "ch1 = " << ch1;
//
//	// 在6.10的第一个cin中输入一个a 类型不匹配 
//	// 使第二个cin失效 会一直循环
//
//
//	int ch1;
//	char ch2;
//	cin >> ch1;
//	cout << "ch1 = " << ch1;
//	cin.clear();  //使cin重新恢复功能 把缓存区里的a赋值给ch2
//	cin >> ch2;
//	cout << "ch2 = " << ch2;
//	cout << "ch1 = " << ch1;
//	return 0;
//}