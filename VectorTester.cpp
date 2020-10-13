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

   std::cout << "Testing put(double value) method" << std::endl;
   std::cout << "-------------" << std::endl;
   DoubleVector PutTestDV;
   std::cout << "DoubleVector before put() method: " << std::endl;
   for(int i = 0; i < PutTestDV.size(); i ++){
	std::cout << PutTestDV.get(i) << std::endl;
   }
   PutTestDV.put(1.0);
   PutTestDV.put(2.0);
   PutTestDV.put(3.0);
   std::cout << "DoubleVector after put() method: " << std::endl;
   for(int i = 0; i < PutTestDV.size(); i++){
   	std::cout << PutTestDV.get(i) << std::endl;
   }
   std::cout << "Expected: [1.0, 2.0, 3.0]" << std::endl;
   
   std::cout <<"Testing put(double value, int index) method: " << std::endl;
   std::cout << "-------------" << std::endl;
   PutTestDV.put(1.0, 1);
   for (int i = 0; i < PutTestDV.size(); i++){
  	std::cout << PutTestDV.get(i) << std::endl;
   } 
   std::cout << "Expected: [1.0, 1.0, 3.0]" << std::endl;
   
   std::cout << "Testing get() method: " << std::endl;
   std::cout << "-------------" << std::endl;
   std::cout << PutTestDV.get(0) << std::endl;
   std::cout << "Expected: [1.0]" << std::endl;

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
   std::cout << "Expected: [1.0, 1.0, 3.0, 4.0]" << std::endl;
   
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
