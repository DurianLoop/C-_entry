//#include <iostream>
//#include <limits> // For numeric_limits
//
//// Function to find the smallest element in an array of integers
//double min(double array[], int size) {
//    if (size <= 0) {
//        throw std::invalid_argument("Array size must be greater than 0.");
//    }
//
//    double minElement = array[0]; // Assume the first element is the smallest
//    for (int i = 1; i < size; ++i) {
//        if (array[i] < minElement) {
//            minElement = array[i]; // Update minElement if a smaller element is found
//        }
//    }
//    return minElement;
//}
//
//int main() {
//    const int NUM_ELEMENTS = 10;
//    double numbers[NUM_ELEMENTS];
//
//    // Prompt the user to enter ten numbers
//    std::cout << "Please enter ten numbers:" << std::endl;
//    for (int i = 0; i < NUM_ELEMENTS; ++i) {
//        std::cin >> numbers[i];
//    }
//
//    // Invoke the min function and display the minimum value
//    try {
//        double minValue = min(numbers, NUM_ELEMENTS);
//        std::cout << "The minimum value is: " << minValue << std::endl;
//    }
//    catch (const std::invalid_argument& e) {
//        std::cerr << "Error: " << e.what() << std::endl;
//    }
//
//    return 0;
//}