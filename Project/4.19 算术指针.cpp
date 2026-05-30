//#include <iostream>
//
//int main()
//{
//	using namespace std;
//	double wages[3] = { 10000.0, 20000.0, 30000.0 };  // double的字节数是8
//	short stacks[3] = { 3,2,1 };  //short的字节数是2
//
//	double* pw = wages; //pw默认为wages第一位的地址 前面的double表示的是指针指向的数值类型
//	cout << "pw = " << pw << ", *pw = " << *pw << endl;
//	pw = pw + 1; // 新的pw和旧的pw在十六进制中相差8
//	cout << "pw = " << pw << ", *pw = " << *pw << endl;
//	cout << sizeof(wages) << endl; //3*8=24 此时不把wages解释成地址
//	cout << sizeof(pw) << endl; //64位的电脑/8 = 8 即创建8字节的pw
//
//	short* ps = stacks; //starks第一位的地址赋值给ps /或写作short* ps = &stacks[0]
//	cout << "ps = " << ps << ", *ps = " << *ps << endl;
//	ps = ps + 1; // 新的pw和旧的pw在十六进制中相差2
//	cout << "ps = " << ps << ", *ps = " << *ps << endl;
//
//	cout << "stacks[0]: " << stacks[0] << " " << "stacks[1]: " << stacks[1] << endl;
//	cout << "stacks = " << stacks << " &stacks[0] = " << &stacks[0] <<endl;
//	cout << "stacks + 1 = " << stacks + 1 << endl; // 从第一个元素地址的开头到第二个元素地址的开头
//	cout << "*(stacks + 1) = " << *(stacks + 1) << endl; // 给第一位的后面一位取值
//	//*(stacks + 1) 等价于stacks[1]   *(stacks + 2) 等价于stacks[2]
//	// stacks是数组一号位对应的地址 等价于&stack[0]
//	// cout << "*(stacks + 2) = " << *(stacks + 2) << endl; // 给第一位的后面两位取值
//	// 数组名和指针的使用方法类似但是
//	// 不能写stacks = stacks + 1 因为stacks是常量
//
//	cout << "stacks = " << stacks << " &stacks[0] = " << &stacks[0] << endl;
//	cout << "&stacks = " << &stacks << endl;
//
//	return 0;
//}