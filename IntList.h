#ifndef INTLIST_H
#define INTLIST_H

#include <iostream>
using namespace std;

struct IntNode {
	int value;
	IntNode *next;
	IntNode(int value) : value(value), next(nullptr) { }
};

class IntList {
 private:
	IntNode *head;
	IntNode *tail;
 public:
	IntList();
	~IntList();
	IntList(const IntList &);
	void clear();
	void push_front(int);
	void pop_front();
	bool empty() const;
	const int & front() const;
	const int & back() const;
	friend ostream & operator<<(ostream &, const IntList &);
	IntList & operator=(const IntList &);
	void push_back(int);
	void selection_sort();
	void insert_ordered(int);
	void remove_duplicates();
};

#endif
