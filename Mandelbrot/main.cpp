#include <array>
#include <random>
#include <iostream>
#include <fstream>
#include <chrono>
#include "arrays.h"
using namespace std;
/*******************************************************************************
Emma Montgomery					A02321679
function main
summary this program creates a mandelbrot bmp file
input:none
output:bmp file
psuedocode
********************************************************************************
begin
	random number genrator
	if num == 1
		open mandelbront 1
	else if num == 2
		open mandelbront 2
	else
		open mandelbront 3
	if !open
		print can't open file
	for loop for bmp header
	for loop for DIB header
	for loop for height
		for loop for width
			val = value(i,j)
			if num =1 
				if val ==1000
					val = 0
				val = val /4
				cout val
			else if num =2
				if val ==1000
					different rgb values
					cout those rgb values
				else if val <500
					different rgb values
					cout those rgb values
				else
					val = val / 2
					different rgb values
					cout those rgb values
			else if num =3 
				if val ==1000
					different rgb values
					cout those rgb values
				else if (val < 500)
					different rgb values
					cout those rgb values
				else
					val = val /2
					different rgb values
					cout those rgb values
			cout the line
	close file
	cout the file name
end
**********************************************************************************/
int value(int Px, int Py);
int main ()  {
int width =8000;
int height =4571;
int val;
unsigned char r;
unsigned char b;
unsigned char g;

	ofstream my_Image;
	// random number generator
	unsigned seed1 = std::chrono::system_clock::now().time_since_epoch().count();
	default_random_engine generator(seed1);
	uniform_int_distribution<int> distribution(1,3);
	int num = distribution(generator);
	if(num == 1){//if num == 1
		//open mandelbront 1
		my_Image.open("mandelbrot_1.bmp", ios::out | ios::binary);
	 }
	 else if(num == 2){ //else if num ==2
		//open mandelbront 2
		my_Image.open("mandelbrot_2.bmp", ios::out | ios::binary);
	 }
	 else {//else
		//open mandelbront 3
		my_Image.open("mandelbrot_3.bmp", ios::out | ios::binary);
	 }
    if (!my_Image.is_open ()) { //if !open
		cout << "Could not open the file"; //print can't open file
		return 0;
	}
	for(int i =0; i <14; i++){ //for loop for bmp header
		my_Image<<bmp_header[i];
	}
	for(int i =0; i <40; i++){ //for loop for DIB header
		my_Image<<DIB_header [i];
	}
	for (int i = 0; i < height; i++) {//for loop for height
		for (int j = 0; j < width; j++) { //for loop for width
			val = value(j, i); //val = value(i,j)
			if (num == 1) { //if num == 1
				if (val == 1000) {//if val ==1000
					val = 0; //val = 0
				}
				val = val / 4; //val = val /4
				//cout val
				my_Image << (unsigned char)val << (unsigned char)val
					<< (unsigned char)val;
			}
			else if (num == 2) { //else if num =2
				if (val == 1000) {//if val ==1000
					//different rgb values
					r = 15;
					b = 25;
					g = 0;
					my_Image << r << g << b;//cout those rgb values
				}
				else if (val < 500) { //else if (val < 500)
					//different rgb values
					r = val + 5;
					b = 155;
					g = val+ 5;
					my_Image << b << g << r;//cout those rgb values
				}
				else { //else
					val = val / 2; //val = val / 2
					//different rgb values
					r = val -5;
					b = 20;
					g = val +5;
					my_Image << b << g << r;//cout those rgb values
				}
			}
			else if (num == 3) {//else if num =3 
				if (val == 1000) {//if val ==1000
					//different rgb values
					r = 00;
					b = 250;
					g = 15;
					my_Image << b << g << r;//cout those rgb values
				}
				else if (val < 500) { //else if (val < 500)
					//different rgb values
					r = 0;
					b = 0;
					g = val + 5;
					my_Image << b << g << r;//cout those rgb values
				}
				else { //else
					val = val / 2;//val = val / 2
					//different rgb values
					r = val + 5;
					b = val + 5;
					g = 255;
					my_Image << b << g << r;//cout those rgb values
				}
			}
		}
		cout << i << "/4571 "<<endl; //cout the line
	}
    my_Image.close();//close file
	cout << "mandelbrot_" << num << ".bmp" << endl;//cout the file name
	return 0;
}
/*******************************************************************************
Function value
input: x and y
output:iteration
psuedocode
/*******************************************************************************
Begin
    x0 = scaled x coordinate of pixel (-2.5, 1)
    y0 = scaled y coordinate of pixel (-1, 1)
    x = 0.0
    y = 0.0
    iteration = 0
     do
        xtemp = x*x - y*y + x0
        y = 2*x*y + y0
        x = xtemp
        iteration++
	while (x*x + y*y ≤ 2*2 AND iteration < 1000)
	return iteration
End
*******************************************************************************/
int value (int Px, int Py){
	double x,y, x0,y0, xtemp;
	int iteration;
	// x0 := scaled x coordinate of pixel (-2.5,1)
	x0 = (3.5*(Px/7999.0))-2.5;
	//y0 := scaled y coordinate of pixel (-1, 1)
	y0 = (2.0*(Py/4570.0))-1.0;
	x =0.0; //x = 0.0
	y =0.0;// y = 0.0
	iteration = 0; //iteration = 0
	do{ //do
		xtemp = x*x - y*y + x0;//xtemp = x*x - y*y + x0
		y = 2.0*x*y + y0; //y = 2*x*y + y0
		x = xtemp; //x = xtemp
		iteration++; //iteration++
		//while (x*x + y*y ≤ 2*2 AND iteration < 1000)
	} while (((x * x + y * y) <= 4.0) && iteration < 1000);
	return iteration; //return iteration
}