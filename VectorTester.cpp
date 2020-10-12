#include <iostream>
#include "CharacterVector.h"
#include "DoubleVector.h"
#include "IntegerVector.h"

int main()
{
   CharacterVector cv;
   DoubleVector    dv;
   IntegerVector   iv;

   //-------------------------------------------------------------------------

   // test CharacterVector: put, get, size, out_of_range

   std::cout << std::endl;
   std::cout << "----------------" << std::endl;
   std::cout << "CharacterVector:" << std::endl;
   std::cout << "----------------" << std::endl;

   //-------------------------------------------------------------------------

   // test DoubleVector: put, get, size, out_of_range

   std::cout << std::endl;
   std::cout << "-------------" << std::endl;
   std::cout << "DoubleVector:" << std::endl;
   std::cout << "-------------" << std::endl;

   //-------------------------------------------------------------------------

   // test IntegerVector: put, get, size, out_of_range

   std::cout << "--------------" << std::endl;
   std::cout << "IntegerVector:" << std::endl;
   std::cout << "--------------" << std::endl;
   
   std::cout << "Testing put(int value) Method:" << std::endl;
   std::cout << "---------" << std::endl;
   IntegerVector PutTest;
   std::cout << "IntegerVector before put() method: " << std::endl;
   std::cout << PutTest << std::endl;
   PutTest.put(1);
   PutTest.put(2);
   PutTest.put(3);
   std::cout << "IntegerVector after put() method: " << std::endl;
   std::cout << PutTest << std::endl;
   std::cout << "Expected : [1,2,3]" << std::endl;

   std::cout << "Testing put(int value, int index) Method:" <<std::endl;
   std::cout << "---------" << std::endl;
   PutTest.put(1,1);
   std::cout << PutTest << std::endl;
   std::cout << "Expected : [1,1,3]" << std::endl;
   
   std::cout << "Testing get() Method:" << std::endl;
   std::cout << "---------" << std::endl;
   int getOne = PutTest.get(0);
   std::cout << getOne << std::endl;
   std::cout << "Expected: [1]" << std::endl;

   std::cout << "Testing size() Method:" << std::endl;
   std::cout << "---------" << std::endl;
   std::cout << "Test on empty IntegerVector:" << std::endl;
   IntegerVector empty;
   int EmptySize = empty.size();
   std::cout << EmptySize << std::endl;
   std::cout << "Expected : [0]" << std::endl;
   std::cout << "Test on IntegerVector with 3 elements:" << std::endl;
   int ThreeSize = PutTest.size();
   std::cout << ThreeSize << std::endl;
   std::cout << "Expected : [3]" << std::endl;

   std::cout << "Testing out_of_range: " << std::endl;
   std::cout << "----------" << std::endl;
   std::cout << "Testing put(int value, int index) at invalid index" << std::endl
   PutTest.put(5,10);
   std::cout << PutTest << std::endl;
   std::cout << "Expected : [1,1,3,5]" << std::endl;
   std::cout << "---------" << std::endl;
   std::cout << "Testing get() method at invalid index:" << std::endl;
   int getInvalid = PutTest.get(10);
   std::cout << getInvalid << std::endl;
   std::cout << "Expected : out_of_range error" << std::endl;
   
 
   //-------------------------------------------------------------------------

   // using empty CharacterVector, test appending iv & dv from above
   CharacterVector cv2;

   std::cout << std::endl;
   std::cout << "----------------------------" << std::endl;
   std::cout << "appended-to CharacterVector:" << std::endl;
   std::cout << "----------------------------" << std::endl;

   //-------------------------------------------------------------------------

   // using empty DoubleVector, test appending iv & cv from above
   DoubleVector dv2;

   std::cout << std::endl;
   std::cout << "-------------------------" << std::endl;
   std::cout << "appended-to DoubleVector:" << std::endl;
   std::cout << "-------------------------" << std::endl;

   //-------------------------------------------------------------------------

   // using empty IntegerVector, test appending cv & dv from above 
   IntegerVector iv2;

   std::cout << std::endl;
   std::cout << "--------------------------" << std::endl;
   std::cout << "appended-to IntegerVector:" << std::endl;
   std::cout << "--------------------------" << std::endl;

   //-------------------------------------------------------------------------

   return 0;
}
