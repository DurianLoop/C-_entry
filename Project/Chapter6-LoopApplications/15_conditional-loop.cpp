//#include <iostream>  // input output stream(流) cout输出到屏幕上
//#include <fstream>  // inputfile outfile outFile输出到文件里
//
//int main()
//{
//	using namespace std;
//	
//	char automobile[50];
//	int year;
//	double a_price;
//	double d_price;
//
//	ofstream outFile;
//	outFile.open("carinfo.txt");
//
//	cout << "Enter the make and model of automobile: ";
//	cin.getline(automobile, 50);
//	cout << "Enter the model year: ";
//	cin >> year;
//	cout << "Enter the original asking price: ";
//	cin >> a_price;
//	d_price = 0.913 * a_price;
//
//	cout << fixed;
//	cout.precision(2);
//	cout.setf(ios_base::showpoint);  // 使输出的数都调整成浮点数
//	cout << "Make and model: " << automobile << endl;
//	cout << "year: " << year << endl;
//	cout << "was asking $" << a_price << endl;
//	cout << "Now asking $" << d_price << endl;
//
//	outFile << fixed;
//	outFile.precision(2);
//	outFile.setf(ios_base::showpoint);
//	outFile << "Make and model: " << automobile << endl;
//	outFile << "year: " << year << endl;
//	outFile << "was asking $" << a_price << endl;
//	outFile << "Now asking $" << d_price << endl;
//
//	outFile.close();
//	return 0;
//}