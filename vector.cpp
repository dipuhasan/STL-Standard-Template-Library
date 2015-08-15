#include <iostream>
#include <vector>
using namespace std;

int main ()
{
  std::vector<int> myVec;

  if (myVec.empty()){
      cout<<"My vector is empty"<<endl;
  }

  for (int i=1; i<=5; i++) {
    myVec.push_back(i);
  }

  cout<<"Size of my vector is "<<myVec.size()<<endl;

  for (int i=6; i<=10; i++)
    myVec.push_back(i);

  cout<<"Size of my vector is "<<myVec.size()<<endl;

  if (!myVec.empty()){
      cout<<"My vector is NOT empty"<<endl;
  }

  std::cout << "My Vector contains:";
  for (std::vector <int>::iterator it = myVec.begin() ; it != myVec.end(); ++it)
    std::cout << ' ' << *it;
  std::cout << '\n';

  //vector at
  for ( int i =0; i < 10; i++ ){
      cout<<"vector at position "<<i<<" is "<<myVec.at(i)<<endl;
  }
  std::cout << '\n';

   // erase the 6th element
  myVec.erase (myVec.begin()+5);

  // erase the first 3 elements:
  myVec.erase (myVec.begin(),myVec.begin()+3);

  for (std::vector <int>::iterator it = myVec.begin() ; it != myVec.end(); ++it)
    std::cout << ' ' << *it;

  myVec.clear();
  if (myVec.empty()){
      cout<<"My vector is empty"<<endl;
  }

  return 0;
}


// output
My vector is empty
Size of my vector is 5
Size of my vector is 10
My vector is NOT empty
My Vector contains: 1 2 3 4 5 6 7 8 9 10
vector at position 0 is 1
vector at position 1 is 2
vector at position 2 is 3
vector at position 3 is 4
vector at position 4 is 5
vector at position 5 is 6
vector at position 6 is 7
vector at position 7 is 8
vector at position 8 is 9
vector at position 9 is 10

 4 5 7 8 9 10My vector is empty
 
 
