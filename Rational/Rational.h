#ifndef RATIONAL_H
#define RATIONAL_H

class Rational {
	private:
		int num, demon;
	public:
		int GCD(int n, int d);
		Rational(int n, int d);
		void add(int n, int d);
		void sub(int n, int d);
		void mul(int n, int d);
		void div(int n, int d);
		int getNum();
		int getDemon();
};

#endif