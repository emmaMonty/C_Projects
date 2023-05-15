#ifndef LIST_H
#define LIST_H
#include <string>
#include "skater.h"
using namespace std;
class List {
	public:
		List();
		void addNode(string country, float score);
		void printList();
		~List();
	private:
		Skater *head;
};
#endif