//#include <iostream>
//const int MAX = 5;
//int fill_array(double* ar, int limit);
//void show_array(const double* ar, int n);
//void revalue(double r, double ar[], int n);
//int main()
//{
//	using namespace std;
//	double properties[MAX];
//	int size = fill_array(properties, MAX);
//	show_array(properties, size);
//	if (size > 0)
//	{
//		cout << "Enter revalution factor: ";
//		double factor;
//		while (!(cin >> factor) || factor < 0)  
//		{
//			cin.clear();
//			while (cin.get() != '\n')
//				continue;
//			cout << "Bad input, please input a number.";
//		}
//		revalue(factor, properties, size);
//	}
//	cout << "Done!";
//	return 0;
//}
//
//int fill_array(double* ar, int limit)
//{
//	using namespace std;
//	double temp;
//	int i;
//	for (i = 0; i < limit; i++)
//	{
//		cout << "Enter value # " << (i + 1) << ":";
//		cin >> temp;
//		if (!cin)  // while(cin >> temp)
//		{
//			cin.clear();
//			while (cin.get() != '\n')
//				continue;
//			cout << "Bad input; input process terminated." << endl;
//			break;  // 跳出for循环
//		}
//		else if (temp < 0)
//			break;
//		ar[i] = temp;
//	}
//	return i;
//}
//
//void show_array(const double* ar, int n)  // 把*ar当成数值并定为常量 不更改数组里的数值
//{
//	using namespace std;
//	for (int i = 0; i < n; i++)
//	{
//		cout << "Property #" << (i + 1) << ": $";
//		cout << ar[i] << endl;
//	}
//}
//
//void revalue(double r, double ar[], int n)  // 没有加const可以通过指针修改数组的数值
//{
//	using namespace std;
//	for (int i = 0; i < n; i++)
//	{
//		ar[i] *= r;
//		cout << ar[i] << endl;
//	}
//}