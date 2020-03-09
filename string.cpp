#include <iostream>
#include <string>

int main(int argc, char* argv[])
{
  std::string city;	// note the std
  city = "Oxford";	// note the quotation
  std::cout << "String length = " << city.length() << "\n";
  std::cout << "Third character = " << city.at(2) << "\n";
  std::cout << "Third character = " << city[2] << "\n";
  std::cout << city << "\n"; // prints the string in city
  std::cout << city.c_str() << "\n"; // also prints city

  return 0;
}
 
