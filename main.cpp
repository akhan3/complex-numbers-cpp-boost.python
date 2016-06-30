#include <iostream>
#include "Cmpx.h"
#include <cmath>

using std::cout;
using std::endl;


class Vec2d {
private:
    float x;
    float y;
public:
    Vec2d(float a, float b) {
        x = a;
        y = b;
    }
    float mag(){
        return sqrt(x*x + y*y);
    }
    float arg(){
        return atan(y/x);
    }
    float get_x(){
        return x;
    }
    float get_y(){
        return y;
    }
};


void test1(int val1, const int& val2) {
  cout << val1 << " , " << val2 << endl;
}

int main() {

    Vec2d v1(0,6);
    cout << "x=" << v1.get_x() << ", y=" << v1.get_y() << endl;
    cout << "mag=" << v1.mag() << ", arg=" << v1.arg() << endl;

    return 0;




  test1(1, 2);
  int me = 22;
  int& me_ref = me;

  cout << &me << &me_ref << endl;
  cout << me << me_ref << endl;
  me = 06;
  cout << me << me_ref << endl;
  me_ref = 85;
  cout << me << me_ref << endl;
  *&me = 1985;
  cout << me << me_ref << endl;

  Cmpx z1(3, 4);
  Cmpx z2(5, -2);
  Cmpx z3;
  z3 = Cmpx(0, -4);

  Cmpx* z3_p = &z3;
  int* me_p = &me;
  cout << "sizeof(z3) := " << sizeof(z3) << endl;
  cout << "sizeof(z3_p) := " << sizeof(z3_p) << endl;
  cout << "sizeof(me) := " << sizeof(me) << endl;
  cout << "sizeof(me_p) := " << sizeof(me_p) << endl;

  cout << "z1 := " << z1 << endl;
  cout << "z2 := " << z2 << endl;
  cout << "z3 := " << z3 << endl;
  cout << endl;

  double a;
  cout << "a = Cmpx(9,- 9).get_re() := " << (a = Cmpx(9,- 9).get_re()) << endl;
  cout << "a := " << a << endl;
  cout << endl;

  z1.set_im(87).set_re(-437).set_re(200.5);
  cout << "z1 := " << z1 << endl;
  cout << endl;

  cout << "z1 + z2 := " << z1 + z2 << endl;
  cout << "z1 - z2 := " << z1 - z2 << endl;
  cout << "z1 * z2 := " << z1 * z2 << endl;
  cout << "~z1 := " << ~z1 << endl;
  cout << "~z2 := " << ~z2 << endl;
  cout << "z3 := " << z3 << endl;
  cout << "z3 = z1 := " << (z3 = z1) << endl;
  cout << "z2 = z2 := " << (z2 = z2) << endl;
  cout << "z3 := " << z3 << endl;
  cout << "z3 = Cmpx(1, 1) := " << (z3 = Cmpx(1, 1)) << endl;
  cout << "z3 := " << z3 << endl;
  cout << "z1 := " << z1 << endl;
  cout << "z1 + 2 := " << z1 + 2 << endl;
  cout << "4 + z1 := " << 4 + z1 << endl;
  cout << "-10 * z1 := " << -10 * z1 << endl;

  return 0;
}
