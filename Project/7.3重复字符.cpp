//#include <iostream>
//void n_chars(char c, int n);
//int main()
//{
//	using namespace std;
//	int times;
//	char ch;  // char类型变量 只有一个字节
//	cout << "Enter a character: " << endl;
//	cin >> ch;  // 与cin.get(ch)的区别是这个函数读取输入的所有字符 而cin会跳过空格和回车换行符
//     //此处如果用了cin.get(ch) 并且下面也是cin.get 考虑的就多了 详见 4.5 4.6 和 6.12
//	while (ch != 'q')  // 用q跳出循环
//	{
//		cout << "Enter a integer: " << endl;
//		cin >> times;  // 这里的times是实参=5
//		n_chars(ch, times);  // 下面的times是形参 会另外开辟内存空间 二者不会互相影响 
//		cout << "\nEnter another character of press the q-key to quit: ";
//		cin >> ch;  // 接着执行
//
//	}
//	cout << "times in main() is " << times << endl;
//	return 0;
//}
//
//void n_chars(char c, int times)  // 此处的形参在函数结束后会被删除
//{
//	while (times-- > 0)  // 确保循环n次的写法
//		std::cout << c << std::endl;
//	std::cout << "times in n_chars() is " << times << std::endl;
//}