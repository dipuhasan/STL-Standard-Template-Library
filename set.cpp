#include <iostream>
#include <set>

using namespace std;

int main ()
{
  std::set<int> mySet;
  std::set<int>::iterator it;
  std::pair<std::set<int>::iterator,bool> ret;

  // set some initial values:
  for (int i=1; i<=10; ++i) 
      mySet.insert(i*20);

  ret = mySet.insert(60);

  if (ret.second==false) it=ret.first;

  mySet.insert (it,25);
  mySet.insert (it,40);
  mySet.insert (it,50);

  int myints[]= {15,100,115,205,185};
  mySet.insert (myints,myints+5);

  std::cout << "mySet contains:";
  for (it=mySet.begin(); it!=mySet.end(); ++it)
    std::cout << ' ' << *it;
  std::cout << '\n';

  //find and erase example

  it=mySet.find(120);
  mySet.erase (it);
  mySet.erase (mySet.find(40));

  std::cout << "mySet contains:";
  for (it=mySet.begin(); it!=mySet.end(); ++it)
    std::cout << ' ' << *it;
  std::cout << '\n';


  return 0;
}


//
Output:
mySet contains: 15 20 25 40 50 60 80 100 115 120 140 160 180 185 200 205
mySet contains: 15 20 25 50 60 80 100 115 140 160 180 185 200 205

