//#include<iostream>
//#include<cstring>
//#pragma warning (disable:4996)
//using namespace std;
//char* getname(void);
//int main()
//{
//	//using namespace std;
//	char* name;
//	name = getname();
//	cout << name << " at " << (int*)name << endl;  //因为name是char* 所以需要(int*)强制转化出内存
//	delete[] name;  //手动删除new出来的地址
//	return 0;
//}
//
//char* getname()
//{
//	//using namespace std;
//	char temp[80];
//	cout << "Enter last name: ";
//	cin >> temp;
//	char* pn = new char[strlen(temp) + 1];
//	strcpy(pn, temp);
//	return pn; //此时pn和temp的地址返回了但是里面的东西清空了
//}