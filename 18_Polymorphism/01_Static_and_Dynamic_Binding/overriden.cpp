#include <iostream>
using namespace std;

class B {
public:
  void f() { cout << "from B" << endl; }
};

class D : public B {
public:
  void f() { cout << "from D" << endl; }
};

int main() {
  B b;
  D d;
  b.f(); // B::f()
  d.f(); // D::f() ----- Overridden
  // masks the base class function
  d.B::f();
}
