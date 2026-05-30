//#include<iostream>
//struct inflatable
//{
//	char name[20];
//	float volumn;
//	double price;
//};
//int main()
//{
//	using namespace std;
//	inflatable* ps = new inflatable;
//	cout << "Enter name of inflatable item: ";
//	cin.get(ps->name, 20); // 不需要再来一个cin.get() 因为只有名字可能有空格存在空格 需要一整行
//	cout << "Enter volumn in cubic feet: ";
//	cin >> (*ps).volumn; // cin>>会忽略掉回车换行符
//	cout << "Enter price: $";
//	cin >> ps->price;
//	cout << "Name: " << (*ps).name << endl;  //*ps可以当作为结构 用结构的用法
//	cout << "Volumn: " << ps->volumn << endl;  // ps需要指针专用的新用法->
//	cout << "Price: " << ps->price << endl;
//	delete ps;
//
//	return 0;
//}