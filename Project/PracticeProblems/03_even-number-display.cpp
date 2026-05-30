//#include <iostream>
//#include <string>
//
//// 函数用于显示整数中的偶数数字
//void displayEven(int number) {
//    // 将整数转换为字符串，以便逐个检查每个数字
//    std::string numStr = std::to_string(number);
//
//    // 遍历字符串中的每个字符
//    for (char digit : numStr) {
//        // 检查字符是否为偶数数字
//        if ((digit - '0') % 2 == 0) {
//            std::cout << digit; // 输出偶数数字
//        }
//    }
//    std::cout << std::endl; // 输出换行
//}
//
//int main() {
//    int number;
//    std::cout << "Enter an integer: ";
//    std::cin >> number; // 读取用户输入的整数
//
//    std::cout << "Even digits in the number: ";
//    displayEven(number); // 调用displayEven函数
//
//    return 0;
//}