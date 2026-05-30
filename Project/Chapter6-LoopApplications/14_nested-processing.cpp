//#include <iostream>
//const int Max = 5;
//int main()
//{
//	using namespace std;
//	int golf[Max];
//	cout << "Please enter your golf scores." << endl;
//	cout << "You must enter " << Max << " rounds" << endl;
//	int i;
//	for (i = 0; i < Max; ++i)
//	{
//		cout << "round # " << i + 1 << ": ";
//		while (!(cin >> golf[i])) //成功放进去为真 没放进去为假
//		{
//			cin.clear();  // 重置cin以接受新的键入
//			while (cin.get() != '\n') // 消耗掉缓存区里的错误的东西
//				continue; //跳过当前(本轮)循环 接着while的下一次循环
//			cout << "Please enter a number: "; //让他重新输入
//		}
//	}
//	double total = 0.0;
//	for (i = 0; i < Max; i++)
//		total += golf[i];
//	cout << total / Max << " = average score " << Max << " rounds" << endl;
//
//	return 0;
//}