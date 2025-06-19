#include <cstdio>
#include <string>
#include <iostream>

// Функция принимает строку "по занчению"
void foo(std::string qwe)
{
    // Здесь мы хотим добавить к принятой строке другую строку.
    // Как бы обновить внешнюю строку которую нам дали.
  qwe += std::string("testest");
}

int main()
{
  std::string firstString("fancy_string_");
    std::cout << firstString << std::endl;
  
    foo(firstString);
  
    std::cout << firstString << std::endl;
  
}
