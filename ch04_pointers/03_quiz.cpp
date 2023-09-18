// TODO: Add the relevant arguments into the function below
void Doubler(int& value) {
  // TODO: your code for Doubler here!
  value *= 2;
}


#include <iostream>

int main() {
  int value = 25;
    
  std::cout << "Original value: " << value << std::endl;
    
  Doubler(value);
    
  std::cout << "Doubled value: " << value << std::endl;
    
  return 0;
}
