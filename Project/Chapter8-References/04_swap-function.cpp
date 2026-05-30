//#include<iostream>
//void swapr(int& a, int& b);
//void swapp(int* p, int* q);
//void swapv(int x, int y);
//int main()
//{
//	using namespace std;
//	int wallet1 = 100;
//	int wallet2 = 350;
//	cout << "wallet1 = " << wallet1 << " wallet2 = " << wallet2 << endl;
//	cout << "using references to swap contents:\n";
//	swapr(wallet1, wallet2);
//	cout << "wallet1 = " << wallet1 << " wallet2 = " << wallet2 << endl;
//	
//	cout << "using pointers to swaap sontents:\n";
//	swapp(&wallet1, &wallet2);
//	cout << "wallet1 = " << wallet1 << " wallet2 = " << wallet2 << endl;
//
//	cout << "using pointers to swaap sontents:\n";
//	swapv(wallet1, wallet2);
//	cout << "wallet1 = " << wallet1 << " wallet2 = " << wallet2 << endl;
//	// 第三个函数 swapv 实际上并没有改变 wallet1 和 wallet2 的值，因为它是通过值传递的，所以交换只发生在函数的局部副本之间。这就是为什么在调用 swapv 之后，wallet1 和 wallet2 的值没有改变的原因。
//
//	return 0;
//}
//
//void swapr(int& a, int& b)  // 引用传递
//{
//	int temp;
//	temp = a;
//	a = b;
//	b = temp;
//}
//
//void swapp(int* p, int* q)  // 指针传递
//{
//	int temp;
//	temp = *p;
//	*p = *q;
//	*q = temp;
//}
//
//void swapv(int x, int y)  // 按值传递
//{
//	int temp;
//	temp = x;
//	x = y;
//	y = temp;
//    /*在这个函数中，x 和 y 是 wallet1 和 wallet2 的副本。在函数内部，x 和 y 的值被交换了，但是这个交换只发生在这两个局部变量之间。一旦函数执行结束，这两个局部变量就会被销毁，对它们的修改不会反映到函数外部的 wallet1 和 wallet2 上。*/
//}