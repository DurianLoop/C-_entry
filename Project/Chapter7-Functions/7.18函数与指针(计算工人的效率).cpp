//#include <iostream>
//double betsy(int lns);
//double pam(int lns);
//void estimate(int lines, double (*pf)(int lns));
//int main()
//{
//	using namespace std;
//	int code;
//	cout << "How many lines of code do you need? ";
//	cin >> code;
//	cout << "Here's Betsy's estimate: " << endl;
//	estimate(code, betsy);  //地址就是函数名
//	cout << "Here's Pam's estimate: " << endl;
//	estimate(code, pam);
//
//	return 0;
//}
//
//double betsy(int lns)
//{
//	return 0.05 * lns;
//}
//
//double pam(int lns)
//{
//	return 0.03 * lns + 0.0004 * lns;
//}
//
//void estimate(int lines, double (*pf)(int lns))  // 与betsy相匹配
//{
//	using namespace std;
//	cout << lines << " lines will take ";
//	cout << (*pf)(lines) << " hours." << endl;
//}