//#include <iostream>
//
//int main()
//{
//	using namespace std;
//	int quizscores[10] = { 20, 20, 20 ,20 ,20, 19, 20, 18, 20, 20 };
//	cout << "doing it right:\n";
//	int i;
//	for (i = 0; quizscores[i] == 20; i++)
//		cout << "quiz " << i << " is a 20" << endl;  //i = 5不满足跳出循环
//	cout << "doing it dangerously wrong:\n";
//	//for (i = 0; quizscores[i] = 20; i++)  // 赋值语句 将一个非零赋值给数组元素 所以始终为true 跳不出循环
//	//	cout << "quiz " << i << " is a 20" << endl;
//	
//	return 0;
//}