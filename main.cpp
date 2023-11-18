#include <iostream>
using namespace std;

#include "IntList.h"

int main() {

  //tests constructor, destructor, push_front, pop_front, display

   {
      cout << "\nlist1 constructor called" << endl;
      IntList list1;
      cout << "pushfront 10" << endl;
      list1.push_front(10);
      cout << "pushfront 20" << endl;
      list1.push_front(20);
      cout << "pushfront 30" << endl;
      list1.push_front(30);
      cout << "list1: " << list1 << endl;
      cout << "pop" << endl;
      list1.pop_front();
      cout << "list1: " << list1 << endl;
      cout << "pop" << endl;
      list1.pop_front();
      cout << "list1: " << list1 << endl;
      cout << "pop" << endl;
      list1.pop_front();
      cout << "list1: " << list1 << endl;
      cout << "pushfront 100" << endl;
      list1.push_front(100);
      cout << "pushfront 200" << endl;
      list1.push_front(200);
      cout << "pushfront 300" << endl;
      list1.push_front(300);
      cout << "list1: " << list1 << endl;
      cout << endl;
      cout << "Calling list1 destructor..." << endl;
      list1.~IntList();
   }
   cout << "list1 destructor returned" << endl << endl;

   // Additional tests
   {
      IntList listA;
      cout << "pushfront 244" << endl;
      listA.push_front(244);
      cout << "pushfront 65" << endl;
      listA.push_front(65);
      cout << "pushfront 310" << endl;
      listA.push_front(310);
      cout << "pushfront 8" << endl;
      listA.push_front(8);
      cout << "listA: " << listA << endl;
      cout << "listB copies listA" << endl;
      IntList listB(listA);
      cout << "listB: " << listB << endl;
      IntList listC;
      cout << "pushfront 216" << endl;
      listC.push_front(216);
      cout << "pushfront 0" << endl;
      listC.push_front(0);
      cout << "pushfront 42" << endl;
      listC.push_front(42);
      cout << "listC: " << listC << endl;
      cout << "listC copies listA" << endl;
      listC = listA;
      cout << "listC: " << listB << endl;
      cout << "pushback 456" << endl;
      listB.push_back(456);
      cout << "pushback 76" << endl;
      listB.push_back(76);
      cout << "pushback 90" << endl;
      listB.push_back(90);
      cout << "listB: " << listB << endl;
      cout << "listB selection sort" << endl;
      listB.selection_sort();
      cout << "listB: " << listB << endl;
      cout << "listB insert 97 in order" << endl;
      listB.insert_ordered(97);
      cout << "listB: " << listB << endl;
      IntList listD;
      cout << "listD insert ordered (empty)" << endl;
      listD.insert_ordered(6);
      cout << "listD: " << listD << endl;
      //cout << "listD (tail): " << listD.back() << endl;
      cout << "listD insert ordered (front)" << endl;
      listD.insert_ordered(2);
      cout << "listD: " << listD << endl;
      cout << "listD insert ordered (end)" << endl;
      listD.insert_ordered(10);
      cout << "listD: " << listD << endl;
      cout << "push_back 78" << endl;
      listD.push_back(78);
      cout << "push_back 14" << endl;
      listD.push_back(14);
      cout << "push_back 9" << endl;
      listD.push_back(9);
      cout << "push_back 78" << endl;
      listD.push_back(78);
      cout << "push_back 7" << endl;
      listD.push_back(7);
      cout << "push_back 9" << endl;
      listD.push_back(9);
      cout << "push_back 78" << endl;
      listD.push_back(78);
      cout << "push_back 78" << endl;
      listD.push_back(78);
      cout << "push_back 14" << endl;
      listD.push_back(14);
      cout << "listD: " << listD << endl;
      cout << "listD removing duplicates" << endl;
      listD.remove_duplicates();
      cout << "listD: " << listD << endl;
      cout << "checking back of listD: " << listD.back() << endl;
      cout << endl;
      cout << "Calling listA destructor..." << endl;
      listA.~IntList();
      cout << "listA destructor returned" << endl;
      cout << "Calling listB destructor..." << endl;
      listB.~IntList();
      cout << "listB destructor returned" << endl;
      cout << "Calling listC destructor..." << endl;
      listC.~IntList();
      cout << "listC destructor returned" << endl;
      cout << "Calling listD destructor..." << endl;
      listD.~IntList();
      cout << "listD destructor returned" << endl;
   }
   
   // Test destructor on empty IntList
   {
      IntList list2;
      cout << "Calling list2 destructor..." << endl;
      list2.~IntList();
   }
   cout << "list2 destructor returned" << endl;
   
   return 0;
}
