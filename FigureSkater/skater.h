#ifndef SKATER_H
#define SKATER_H
#include <string>
using namespace std;
class Skater {
	public:
		Skater(string c, float s);
		string getCountry();
		float getScore();
		Skater *getNext();
		void setNext(Skater *p);
	private:
		string country;
		float score;
		Skater *next;
	};
#endif
