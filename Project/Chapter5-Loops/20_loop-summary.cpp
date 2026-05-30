//#include <iostream>
//#include <string>
//const int Cities = 5;
//const int Years = 4;
//int main()
//{
//	using namespace std;
//	//const char* cities[Cities] = //指针只需要开辟八个字节更省内存 怀疑你有可能用指针去改值 *cities[0] = awen 而字符串常量是只读的不能更改
//	//const char cities[Cities][25] =  //这里的const可以省略 数组自己有内存空间可读可写
//	string cities[Cities]  // const可加可不加
//	{
//		"Gribble City",
//		"Gribbletown",
//		"New Gribble",
//		"San Gribble",
//		"Gribble Vista"
//	};
//	int maxtemps[Years][Cities] =
//	{
//		{96, 100, 87, 101, 105}, // maxtemps[0]
//		{96, 98, 91, 107, 104},  // maxtemps[1]
//		{97, 101, 93, 108, 107},  // maxtemps[2]
//		{98, 103, 95, 109, 108}  // maxtemps[3]
//	};
//
//	cout << "Maximum temperatures for 2008 - 2011" << endl;
//	for (int city = 0; city < Cities; ++city)
//	{
//		cout << cities[city] << ":\t";
//		for (int year = 0; year < Years; ++year)
//			cout << maxtemps[year][city] << "\t";
//		cout << endl;
//	}
//	return 0;
//}