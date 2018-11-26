#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main ()

{
  char str[] = "I have too much work";
  char * ptr = &str[0];
  ptr = ptr + 3;
  cout<< ptr[4];


return 0;
}















