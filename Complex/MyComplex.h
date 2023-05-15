#ifndef MYCOMPLEX_H
#define MYCOMPLEX_H

class MyComplex {
private:
	float real;
	float imagine;
public:
    MyComplex();
    MyComplex(float rp, float ip);
    void printMyComplex();
    MyComplex operator+ (const MyComplex &param);
    MyComplex operator- (const MyComplex &param);
    MyComplex operator* (const MyComplex &param);
};
#endif
