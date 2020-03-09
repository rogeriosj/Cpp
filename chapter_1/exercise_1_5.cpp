// code that get the full name separatly and print it together

#include <iostream>
#include <string>

int main(int argc, char* argv[])
{
  std::string name1, name2;
  std::cout << "Enter your first name!!\n";
  std::getline(std::cin, name1);

  std::cout << "Enter yout family name!!\n";
  std::getline(std::cin, name2);

  std::cout << "Your full name is: " << name1 << " " << name2 << "\n";

  return 0;
}
