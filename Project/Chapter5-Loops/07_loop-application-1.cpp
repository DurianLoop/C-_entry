//#include <iostream>
//
//int main()
//{
//	using namespace std;
//	int a = 20;
//	int b = 20;
//	cout << "a = " << a << "; b = " << b << endl;
//	cout << "a++ = " << a++ << "; ++b = " << ++b << endl;
//	cout << "a = " << a << "; b = " << b << endl;
//
//	int x = 5;
//	int y = ++x; // 前缀只有一步
//	cout << "x = " << x << endl;
//	cout << "y = " << y << endl;
//
//	int n = 5;
//	int m = n++;  // 后缀分两步 assign to m, then change n
//	cout << "n = " << n << endl;
//	cout << "m = " << m << endl;
//
//	double arr[5] = { 21.1, 32.8, 23.4, 2, 47.4 };
//	double* pt = arr;
//	cout << "*pt = " << *pt << endl;
//	//cout << "*(pt + 1) = " << *(pt + 1) << endl;  // 指针加一就是移到下一个元素地址的开头
//	cout << "*++pt = " << *++pt << endl;  //这行执行之后pt指针已经指向了第二个元素开头的内存地址
//	cout << "++*pt = " << ++*pt << endl;  //从右往左看 此时第二个元素的值已经变成了33.8
//	cout << "(*pt)++ = " << (*pt) ++ << endl;  //后缀分两步 所以此时cout出来的还没来得及+1 分号结束后完成加一
//	cout << "*pt = " << *pt << endl;  // 现在第二个元素才加上第二次一
//	cout << "*pt++ = " << *pt++ << endl;  //后缀的优先级高于* 但因为他是后缀所以此时的pt还没指向第三个元素的地址
//	cout << "*pt = " << *pt << endl;  // 此时指针指向了第三个元素
//
//	return 0;
//}