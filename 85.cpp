#include <string>
#include <iostream>

int main()
{
  std::string s( "expletive" );

  s.replace( 1, s.size() - 2, s.size() - 2, '*' );
  std::cout << s << std::endl;
  return 0;
}
