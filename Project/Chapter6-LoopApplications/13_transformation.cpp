//#include <iostream>
//const int Max = 10;
//int main()
//{
//	using namespace std;
//	double fish[Max];
//	cout << "Please enter the weights of your fish." << endl;
//	cout << "You may enter up to " << Max << "fish < q to terminate" << endl; //按q键退出的功能 其实按数字以外的东西都会退出
//	cout << "fish #1: ";
//	int i = 0;
//	while (i < Max && cin >> fish[i]) // q使cin失效 返回false 使循环结束----与6.5类似
//	{
//		if (++i < Max)
//			cout << "fish # " << i + 1 << ": ";
//	}
//	double total = 0.0;
//	for (int j = 0; j < i; j++)
//		total += fish[j];
//	if (i == 0)  // 说明第一个输入的就不是int
//		cout << "No fish" << endl;
//	else
//		cout << total / i << " = average weight of " << i << " fish" << endl;
//	cout << "Done!";
//
//	return 0;
//}