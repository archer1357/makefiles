
// main.cpp : the application source code.
#include <iostream>
#include "main.h"
int main()
{
   std::cout << "Hello, from MSBuild!" << getmyval() << "\n";
   
   #ifdef DEFG2
   std::cout << "Hello, from MSBuild22!\n";
   
   #endif
   //system("pause");
   return 0;
}

