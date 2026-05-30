//#include<iostream>
//
//int main()
//{
//	using namespace std;
//	int rats = 101;
//	int& rodents = rats;  // 引用变量并进行初始化
//	cout << "rats = " << rats << endl;
//	cout << ", rodents = " << rodents << endl;
//
//	cout << "rats address = " << &rats;
//	cout << ", rodents = " << &rodents << endl;
//
//	int bunnies = 50;
//	rodents = bunnies; // 将值赋给rodents 等效于rats = bunnies
//	cout << "bunnies = " << bunnies << endl;
//	cout << "rats = " << rats << endl;  // rats也会改变 因为他们在同一个内存空间
//	cout << "rodents = " << rodents << endl;
//
//	cout << "bunnies address = " << &bunnies << endl;
//	cout << "rodents address = " << &rodents << endl;
//	cout << "rats address = " << &rats << endl;
//	 
//}