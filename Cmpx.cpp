#include <iostream>
#include <cmath>
#include "Cmpx.h"
using std::ostream;

Cmpx::Cmpx() {
    re = 0;
    im = 0;
}
// Cmpx::Cmpx()                    : re(0), im(0) {}
Cmpx::Cmpx(double x)            : re(x), im(0) {}
Cmpx::Cmpx(double x, double y)  : re(x), im(y) {}

double Cmpx::get_re() {return re;}
double Cmpx::get_im() {return im;}
Cmpx& Cmpx::set_re(double x) {
  re = x;
  return *this;
}

Cmpx& Cmpx::set_im(double y) {
  im = y;
  return *this;
}

// Cmpx Cmpx::operator=(const Cmpx z) {
//   re = z.re;
//   im = z.im;
//   return *this;
// }

// Cmpx Cmpx::operator+(Cmpx z) const {
//   return Cmpx(re + z.re, im + z.im);
// }

Cmpx Cmpx::operator+(double x) const {
  return Cmpx(re + x, im);
}

Cmpx operator+(const double x, const Cmpx z) {
  return Cmpx(z.re + x, z.im);
}

Cmpx Cmpx::operator-(Cmpx z) const {
  return Cmpx(re - z.re, im - z.im);
}

Cmpx Cmpx::operator-(double x) const {
  return Cmpx(re - x, im);
}

Cmpx operator-(const double x, const Cmpx z) {
  return Cmpx(z.re - x, z.im);
}

Cmpx Cmpx::operator*(Cmpx z) const {
  return Cmpx(re*z.re - im*z.im, re*z.im + im*z.re);
}

Cmpx Cmpx::operator*(double k) const {
  return Cmpx(k * re , k * im);
}

Cmpx operator*(double k, const Cmpx z) {
  return Cmpx(k * z.re , k * z.im);
}

Cmpx Cmpx::operator~() const {
  return Cmpx(re, -im);
}

// void Cmpx::operator+=(Cmpx z) {
//   re += z.re, im += z.im;
// }


ostream& operator<<(ostream& s, const Cmpx& z) {
  s << "abc";
  return s;
}

// ostream& operator<<(ostream& s, const Cmpx& z) {
//   if (z.im == 0)
//     s << "[" << z.re << "]";
//   else if (z.re == 0 && z.im != fabs(z.im))
//     s << "[-j" << -z.im << "]";
//   else if (z.re == 0 && z.im == fabs(z.im))
//     s << "[j" << z.im << "]";
//   else if (z.im != fabs(z.im))
//     s << "[" << z.re << " - j" << -z.im << "]";
//   else if (z.im == fabs(z.im))
//     s << "[" << z.re << " + j" << z.im << "]";
//   else
//     s << "[INVALID]";
//   return s;
// }
