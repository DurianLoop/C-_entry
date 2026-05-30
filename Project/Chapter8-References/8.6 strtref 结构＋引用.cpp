//#include <iostream>
//#include <string>
//
//struct free_throws
//{
//	std::string name;
//	int made;
//	int attempts;
//	float percent;
//};
//
//void set_pc(free_throws& ft);
//void display(const free_throws& ft);
//free_throws& accumulate(free_throws& target, const free_throws& source);
//
//int main()
//{
//	using namespace std;
//	free_throws one = { "aa", 13, 14 };
//	free_throws two = { "bb", 10, 16 };
//	free_throws three = { "cc", 7, 9 };
//	free_throws four = { "dd", 5, 9 };
//	free_throws five = { "ee", 6, 14 };
//	free_throws team = { "Throwgoods", 0, 0 };
//	free_throws dup;
//
//	set_pc(one);
//	display(one);
//	accumulate(team, one);
//	display(team);
//	display(accumulate(team, two));
//	accumulate(accumulate(team, three), four);
//	display(team);
//	dup = accumulate(team, five);
//	display(team);
//	display(dup);
//	set_pc(four);
//	accumulate(dup, five) = four;
//	display(dup);
//
//	return 0;
//}
//
//void set_pc(free_throws& ft)  // 需要修改数据不加const
//{
//	if (ft.attempts != 0)
//		ft.percent = 100.0f * float(ft.made) / float(ft.attempts);
//	else
//		ft.percent = 0;
//}
//
//void display(const free_throws& ft)  // 不修改数据加const
//{
//	using std::cout;
//	cout << "name: " << ft.name << "\n";
//	cout << " made: " << ft.made << "\t";
//	cout << "attempts: " << ft.attempts << "\t";
//	cout << "percents: " << ft.percent << "\n";
//}
//
//free_throws& accumulate(free_throws& target, const free_throws& source)
//{
//	target.attempts += source.attempts;
//	target.made += source.made;
//	set_pc(target);
//	return target;  // target和结构共用一个内存空间，return只是为了把他当作一个参数来使用
//}