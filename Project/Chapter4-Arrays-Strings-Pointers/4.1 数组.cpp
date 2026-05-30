//#include<iostream>
//
//int main()
//{
//	using namespace std;
//	int yams[3];
//	yams[0] = 7;
//	yams[1] = 8;
//	yams[2] = 6;
//
//
//	int yamcosts[3] = { 20, 30, 5 };
//	cout << "Total yams = ";
//	cout << yams[0] + yams[1] + yams[2] << endl;
//	cout << "The packages with " << yams[1] << " yams costs";
//	cout << yamcosts[1] << " cents per yam.\n";
//	int total = yams[0] * yamcosts[0] + yams[1] * yamcosts[1];
//	total = total + yams[2] * yamcosts[2];
//	cout << "The total yam expense is " << total << " cents.\n";
//
//	cout << "\nSize of yams array = " << sizeof yams << endl;//sizeof 数组名 = 元素类型的字节*字节数
//	cout << "Size of yam array = " << sizeof yams[0] << endl; // sizeof 元素 = 字节数  每个int四个字节
//
//	return 0;
//}