//#include <iostream>
//const int ArSize = 8;
//int sum_arr(int* arr, int n);
//int main()
//{
//	using namespace std;
//	int cookies[ArSize] = { 1,2,3,4,16,32,64,128 };
//	/*int* test = nullptr;
//	int testsum = sum_arr(test, 10);*/
//	int sum = sum_arr(cookies, ArSize);  // cookies = &cookies[0]代表第一个元素的地址
//	cout << cookies << "   " << &cookies << endl;
//	cout << sizeof cookies << endl;  // 8个int（4字节）=32
//	cout << sizeof & cookies << endl;  // 8位 虽然cookies和&cookies都代表第一个元素的地址 但长度不同
//	cout << "Total cookies eaten: " << sum << endl;
//
//	return 0;
//}
//
//int sum_arr(int* arr, int n)  //  等价于int* arr = cookies, 把这两边都当成地址 即arr是指针指向第一个元素的地址 arr是指针
//// int sum_arr(int arr[], int n) //等价于int arr[] = cookies 把这两边都当成数组 arr是指针
//{
//	int total = 0;
//	for (int i = 0; i < n; i++)
//		total = total + arr[i];  // 指针与数组等价 arr[i] == *(arr + i) |  &arr[i] == arr + i
//	return total;  // 函数结束后 里面初始化的变量全都被删掉 return的东西赋值完也被删掉
//
//}