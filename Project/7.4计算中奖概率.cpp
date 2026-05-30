//#include <iostream>
//long double probability(unsigned numbers, unsigned picks);
//
//int main()
//{
//	using namespace std;
//	double total, choices;
//	cout << "Enter the total number of choices on the game card and ";
//	cout << "the number of picks allowed: " << endl;
//	while (cin >> total >> choices && choices <= total)  // 用字母跳出循环
//	{
//		cout << "You have one chance in ";
//		cout << probability(total, choices);
//		cout << " of winning." << endl;
//		cout << "Next two numbers(q to quit): ";
//	}
//	cout << "Bye";
//
//	return 0;
//}
//
//long double probability(unsigned numbers, unsigned picks)
//{
//	long double result = 1.0;
//	long double n;  // 避免精度下降
//	unsigned p;
//	for (n = numbers, p = picks; p > 0; n--, p--)
//		result *= n / p;
//	return result;
//}