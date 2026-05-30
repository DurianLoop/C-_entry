//#include <iostream>
//const int Len = 66;
//const int Divs = 6;
//void subdivide(char* ar, int high, int low, int level);
//int main()
//{
//	using namespace std;
//	char ruler[Len];  // 这个ruler数组一共包含'\0'在内的66个值
//	int i;
//	for (i = 1; i < Len - 2; i++)  // 1 <= i <= 64
//		ruler[i] = ' ';  // 第2个数到第65个数都是' '
//	ruler[Len - 1] = '\0';  // 得保证第66个数得是'\0'
//	int max = Len - 2;
//	int min = 0;
//	ruler[max] = ruler[min] = '|';
//	cout << ruler << endl;
//	for (i = 0; i <= Divs; i++)
//	{
//		subdivide(ruler, min, max, i);
//		cout << ruler << endl;
//		for (int j = 1; j < Len - 2; j++)
//		{
//			ruler[j] = ' ';
//		}
//	}
//	return 0;
//}
//
//void subdivide(char* ar, int high, int low, int level)
//{
//	if (level == 0)
//		return;
//	int mid = (high + low) / 2;
//	ar[mid] = '|';
//	subdivide(ar, low, mid, level - 1);
//	subdivide(ar, mid, high, level - 1);
//}