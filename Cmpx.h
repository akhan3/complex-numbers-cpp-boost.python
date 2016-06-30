#ifndef CMPX_H
#define CMPX_H

#include <iostream>
using std::ostream;

class Cmpx {
  public:
    Cmpx();
    Cmpx(double re);
    Cmpx(double re, double im);

    double get_re();
    double get_im();
    Cmpx& set_re(double x);
    Cmpx& set_im(double y);

//     void operator+=(Cmpx z);

//     Cmpx operator=(const Cmpx z);

//     Cmpx operator+(const Cmpx z) const;
    inline Cmpx operator+(const Cmpx z) const {
      return Cmpx(re + z.re, im + z.im);
    }

    Cmpx operator+(const double x) const;
    friend Cmpx operator+(const double x, const Cmpx z);

    Cmpx operator-(const Cmpx z) const;
    Cmpx operator-(const double x) const;
    friend Cmpx operator-(const double x, const Cmpx z);

    Cmpx operator*(const Cmpx z) const;
    Cmpx operator*(const double k) const;
    friend Cmpx operator*(const double k, const Cmpx z);

    Cmpx operator~() const;

//     friend ostream& operator<<(ostream& s, const Cmpx& z);

  private:
    double re;
    double im;
};

ostream& operator<<(ostream& s, const Cmpx& z);

#endif
