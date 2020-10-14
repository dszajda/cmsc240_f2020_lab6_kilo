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
    
   std::cout << "Testing put(char value) Method:" << std::endl;
   std::cout << "---------" << std::endl;
   CharacterVector CharTest;
   std::cout << "CharacterVector before put() method: " << std::endl;
   for (int i = 0; i < CharTest.size(); i++){
      std::cout << CharTest.get(i) << " ";
   } std::cout << std::endl;
   std::cout << "Expected : []" << std::endl;
   CharTest.put('a');
   CharTest.put('b');
   CharTest.put('c');
   std::cout << "CharacterVector after put() method: " << std::endl;
   for (int i = 0; i < CharTest.size(); i++){
      std::cout << CharTest.get(i) << " ";
   } std::cout << std::endl;
   std::cout << "Expected : [a,b,c]" << std::endl;

   std::cout << "Testing put(char value, int index) Method: " << std::endl;
   std::cout << "---------" << std::endl;
   CharTest.put('a',1);
   for (int i = 0; i < CharTest.size(); i++){
      std::cout << CharTest.get(i) << " ";
   } std::cout << std::endl;
   std::cout << "Expected : [a,a,c]" << std::endl;
   
   std::cout << "Testing get() Method:" << std::endl;
   std::cout << "---------" << std::endl;
   std::cout << CharTest.get(2) << std::endl;
   std::cout << "Expected: [c]" << std::endl;

   std::cout << "Testing size() Method:" << std::endl;
   std::cout << "---------" << std::endl;
   std::cout << "Test on empty CharacterVector:" << std::endl;
   CharacterVector CharEmpty;
   std::cout << CharEmpty.size() << std::endl;
   std::cout << "Expected : [0]" << std::endl;
   std::cout << "Test on CharacterVector with 3 elements:" << std::endl;
   std::cout << CharTest.size() << std::endl;
   std::cout << "Expected : [3]" << std::endl;

   std::cout << "Testing out_of_range: " << std::endl;
   std::cout << "----------" << std::endl;
   std::cout << "Testing put(char value, int index) at invalid index (10)" << std::endl;
   CharTest.put('d',10);
   for (int i = 0; i < CharTest.size(); i++){
      std::cout << CharTest.get(i);
   } std::cout << std::endl;
   std::cout << "Expected : [a,a,c,d]" << std::endl;
   std::cout << "---------" << std::endl;
   std::cout << "Testing get() method at invalid index (10):" << std::endl;
   try{
       std::cout << CharTest.get(10) << std::endl;
   }catch(std::exception& e){
      std::cerr << "out_of_range error caught:";
      std::cerr << e.what() << std::endl;
   }
   std::cout << "Expected : some out of range error" << std::endl;

   //-------------------------------------------------------------------------

   // test DoubleVector: put, get, size, out_of_range

   std::cout << std::endl;
   std::cout << "-------------" << std::endl;
   std::cout << "DoubleVector:" << std::endl;
   std::cout << "-------------" << std::endl;

   std::cout << "Testing put(double value) method" << std::endl;
   std::cout << "-------------" << std::endl;
   DoubleVector PutTestDV;
   std::cout << "DoubleVector before put() method: " << std::endl;
   for(int i = 0; i < PutTestDV.size(); i ++){
	std::cout << PutTestDV.get(i) << std::endl;
   }
   PutTestDV.put(1.5);
   PutTestDV.put(2.5);
   PutTestDV.put(3.5);
   std::cout << "DoubleVector after put() method: " << std::endl;
   for(int i = 0; i < PutTestDV.size(); i++){
   	std::cout << PutTestDV.get(i) << std::endl;
   }
   std::cout << "Expected: [1.5, 2.5, 3.5]" << std::endl;
   
   std::cout <<"Testing put(double value, int index) method: " << std::endl;
   std::cout << "-------------" << std::endl;
   PutTestDV.put(1.0, 1);
   for (int i = 0; i < PutTestDV.size(); i++){
  	std::cout << PutTestDV.get(i) << std::endl;
   } 
   std::cout << "Expected: [1.5, 1.0, 3.5]" << std::endl;
   
   std::cout << "Testing get() method: " << std::endl;
   std::cout << "-------------" << std::endl;
   std::cout << PutTestDV.get(0) << std::endl;
   std::cout << "Expected: [1.5]" << std::endl;

   std::cout << "Testing size() method: " << std::endl;
   std::cout << "-------------" << std::endl;
   std::cout << "Test on an empty DoubleVector: " << std::endl;
   DoubleVector emptyDV;
   std::cout << emptyDV.size() << std::endl;
   std::cout << "Expected : [0]" << std::endl;
   std::cout << "Test on DoubleVector with 3 elements: " << std::endl;
   std::cout << PutTestDV.size() << std::endl;
   std::cout << "Expected : [3] " << std::endl;

   std::cout << "Testing if out of range: " << std::endl;
   std::cout << "-------------" << std::endl;
   std::cout << "Testing put(double value, int index) invalid index" << std::endl;
   PutTestDV.put(4.0, 10);
   for(int i = 0; i < PutTestDV.size(); i++){
   	std::cout << PutTestDV.get(i) << std::endl;
   }
   std::cout << "Expected: [1.5, 1.0, 3.5, 4.0]" << std::endl;
   
   std::cout << "Testing get() method with invalid index" << std::endl;
   try{
	std::cout << PutTestDV.get(10) << std::endl;
   }catch(std::exception& e){
   	std::cerr << "out_of_range error caught:" << std::endl;
        std::cerr << e.what() << std::endl;
   }

  

  


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
   CharacterVector cv3;

   std::cout << std::endl;
   std::cout << "----------------------------" << std::endl;
   std::cout << "appended-to CharacterVector:" << std::endl;
   std::cout << "----------------------------" << std::endl;
   IntegerVector IntAppend1;
   IntAppend1.put(97);
   IntAppend1.put(98);
   IntAppend1.put(99);
   cv2.appendIntegerVector(IntAppend1);
   std::cout << "IntegerVector after appendCharacterVector()" << std::endl;
   for (int i = 0; i < cv2.size(); i++){
      std::cout << cv2.get(i);
   } std::cout << std::endl;
   std::cout << "Expected : [a,b,c]" << std::endl;
   std::cout << std::endl;

   DoubleVector DblAppend1;
   DblAppend1.put(100.0);
   DblAppend1.put(101.0);
   DblAppend1.put(103.0);
   cv3.appendDoubleVector(DblAppend1);
   for (int i = 0; i < cv3.size(); i++){
      std::cout << cv3.get(i);
   }  std::cout << std::endl;
   std::cout << "IntegerVector after appendDoubleVector()" << std::endl;
   std::cout << "Expected : [d,e,g]" << std::endl;

   //-------------------------------------------------------------------------

   // using empty DoubleVector, test appending iv & cv from above
   DoubleVector dv2;
   DoubleVector dv3;

   std::cout << std::endl;
   std::cout << "-------------------------" << std::endl;
   std::cout << "appended-to DoubleVector:" << std::endl;
   std::cout << "-------------------------" << std::endl;
   
   CharacterVector char1Append;
   char1Append.put(1);
   char1Append.put(2);
   char1Append.put(3);
   dv2.appendCharacterVector(char1Append);
   std::cout << "Double Vector after appendCharacterVector()" << std::endl;
   for(int i = 0; i < dv2.size(); i++){
   	std::cout << dv2.get(i) << std::endl;
   }
   std::cout << "Expected: [1.0, 2.0, 3.0]" << std::endl;
   std::cout << std::endl;
   
   IntegerVector intAppend;
   intAppend.put(1);
   intAppend.put(2);
   intAppend.put(3);
   dv3.appendIntegerVector(intAppend);
   for(int i = 0; i < dv3.size(); i++){
   	std::cout << dv3.get(i) << std::endl;	
   }
   std::cout << "Double vector after appendIntegerVector()" << std::endl;
   std::cout << "Expected: [1.0, 2.0, 3.0]" << std::endl;
   

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
