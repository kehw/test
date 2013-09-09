#include <iostream>

using namespace std;

class cbase
{
public:
  cbase() {};
  // virtual ~cbase();

  void move() { walk(); }
  virtual void walk() { cout << "cbase walk" << endl; }
};

class cderived : public cbase
{
public:
  cderived() {};
  // virtual ~cderived();

  void walk() { cout << "cderived walk" << endl; }
};

int main()
{
  cderived a;
  a.move();
  
  return 0;
}
