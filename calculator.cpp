#include <iostream>
#include <vector>
using namespace std;

int main() {
   char oper;
   vector<float> numbers;
   float num, result;

   cout << "Введите операцию (+, -, *, /): ";
   cin >> oper;

   cout << "Введите числа, разделяя их пробелом: ";
   while(cin >> num) {
      numbers.push_back(num);
      if (cin.peek() == '\n') break;
   }

   switch(oper) {
      case '+':
         result = 0.0;
         for (int i = 0; i < numbers.size(); i++) {
            result += numbers[i];
         }
         break;

      case '-':
         result = numbers[0];
         for (int i = 1; i < numbers.size(); i++) {
            result -= numbers[i];
         }
         break;

      case '*':
         result = 1.0;
         for (int i = 0; i < numbers.size(); i++) {
            result *= numbers[i];
         }
         break;

      case '/':
         result = numbers[0];
         for (int i = 1; i < numbers.size(); i++) {
            if (numbers[i] == 0.0) {
               cout << "Деление на ноль невозможно" << endl;
               return 0;
            }
            result /= numbers[i];
         }
         break;

      default:
         cout << "Неправильная операция!";
         return 0;
   }

   cout << "Результат: " << result;
   return 0;
}
