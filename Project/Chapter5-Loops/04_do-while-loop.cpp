//#include <iostream>
//const int ArSize = 16;
//int main()
//{
//	using namespace std;
//	long long a[ArSize];
//	a[1] = a[0] = 1LL;
//	for (int i = 2; i < 16; i++)
//		a[i] = i * a[i - 1];  // 循环结束后值已经存在数组了 i会消失
//	for (int i = 0; i < ArSize; i++)
//		cout << i << "! = " << a[i] << endl; // 此i不等于彼i 
//
//	return 0;
//}