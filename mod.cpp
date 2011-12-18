//streams
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <string.h>

//containors
#include <queue>
#include <vector>
#include <list>
#include <set>
#include <map>


#include <utility>
#include <iomanip>
#include <algorithm>


#include <stdio.h>
#include <stdlib.h>
#include <cstdio>
#include <cstdlib>
#include <errno.h>

using namespace std;

#define each(I) for( typeof( (I).begin() ) it=(I).begin(); it!=(I).end(); ++it)

int main(int argc, char* argv[])
{
  //change the directory to the home directory of the current user.
  chdir(getenv("HOME"));

  //*TAKE OUT*
  system("pwd");
  
  //Create a new directory called mctmp
  string exec1 = "mkdir mctmp";
  system(exec1.c_str());
  
  // open the directory mctmp(makes the contents of the directory visible
  // to user through a window.
  string exec2 = "open mctmp";
  system(exec2.c_str());
  
  //
  string mctmp_path = string(getenv("HOME")) + string(const_cast<char*>("/mctmp"));
  chdir(mctmp_path.c_str() );
  
  //*TAKE OUT*
  system("pwd");
  
  string exec3 = "jar xf ~/Library/Application\\ Support/minecraft/bin/minecraft.jar";
  system(exec3.c_str());
  
  string wait;
  cout << "Close WINDOW when done and press any letter to continue" << endl;
  cin >> wait;
  
  string exec4 = "rm META-INF/MOJANG_C.*";
  system(exec4.c_str());
  string exec5 = "jar uf ~/Library/Application\\ Support/minecraft/bin/minecraft.jar ./";
  system(exec5.c_str());
  chdir(getenv("HOME"));

  //*TAKE OUT*
  system("pwd");
  
  string exec6 = "rm -rf mctmp";
  system(exec6.c_str());
  cout << "Run Minecraft, enjoy!" << endl;
  // */
  return 0;
}
