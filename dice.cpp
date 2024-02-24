#include <iostream>
#include <time.h>
using namespace std;
int main ()
{
  int i,q;
  cout<<"How many sides?"<<endl;
  cin>>q;
  srand (time(NULL));

  i = rand() % q + 1;

  cout<<"You got "<<i<<endl;

  return 0;
}
