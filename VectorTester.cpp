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
   for (int i = 0; i<PutTest.size(); i++){
      std::cout << PutTest.get(i) << std::endl;
   }
   PutTest.put(1);
   PutTest.put(2);
   PutTest.put(3);
   std::cout << "IntegerVector after put() method: " << std::endl;
   for (int i = 0; i<PutTest.size(); i++){
      std::cout << PutTest.get(i) << std::endl;
   }
   std::cout << "Expected : [1,2,3]" << std::endl;

   std::cout << "Testing put(int value, int index) Method:" <<std::endl;
   std::cout << "---------" << std::endl;
   PutTest.put(1,1);
   for (int i = 0; i<PutTest.size(); i++){
     std::cout << PutTest.get(i) << std::endl;
   }
   std::cout << "Expected : [1,1,3]" << std::endl;
   
   std::cout << "Testing get() Method:" << std::endl;
   std::cout << "---------" << std::endl;
   std::cout << PutTest.get(0) << std::endl;
   std::cout << "Expected: [1]" << std::endl;

   std::cout << "Testing size() Method:" << std::endl;
   std::cout << "---------" << std::endl;
   std::cout << "Test on empty IntegerVector:" << std::endl;
   IntegerVector empty;
   std::cout << empty.size() << std::endl;
   std::cout << "Expected : [0]" << std::endl;
   std::cout << "Test on IntegerVector with 3 elements:" << std::endl;
   std::cout << PutTest.size() << std::endl;
   std::cout << "Expected : [3]" << std::endl;

   std::cout << "Testing out_of_range: " << std::endl;
   std::cout << "----------" << std::endl;
   std::cout << "Testing put(int value, int index) at invalid index" << std::endl;
   PutTest.put(5,10);
   for (int i = 0; i<PutTest.size(); i++){
      std::cout << PutTest.get(i) << std::endl;
   }
   std::cout << "Expected : [1,1,3,5]" << std::endl;
   std::cout << "---------" << std::endl;
   std::cout << "Testing get() method at invalid index:" << std::endl;
   try{
      std::cout << PutTest.get(10) << std::endl;
   }catch(std::exception& e){
      std::cerr << "out_of_range error caught:" << std::endl;
      std::cerr << e.what() << std::endl;
   }
   
 
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
   IntegerVector iv3;

   std::cout << std::endl;
   std::cout << "--------------------------" << std::endl;
   std::cout << "appended-to IntegerVector:" << std::endl;
   std::cout << "--------------------------" << std::endl;
   CharacterVector charAppend;
   charAppend.put(1);
   charAppend.put(2);
   charAppend.put(3);
   iv2.appendCharacterVector(charAppend);
   std::cout << "IntegerVector after appendCharacterVector()" << std::endl; 
   for (int i = 0; i < iv2.size(); i++){
      std::cout << iv2.get(i) << std::endl;
   }
   std::cout << "Expected : [1,2,3]" << std::endl;
   std::cout << std::endl;
   
   DoubleVector doubleAppend;
   doubleAppend.put(1.0);
   doubleAppend.put(2.0);
   doubleAppend.put(3.0);
   iv3.appendDoubleVector(doubleAppend); 
   for (int i = 0; i < iv3.size(); i++){
      std::cout << iv3.get(i) << std::endl;
   }
   std::cout << "IntegerVector after appendDoubleVector()" << std::endl;
   std::cout << "Expected : [1,2,3]" << std::endl;

   //-------------------------------------------------------------------------

   return 0;
}
