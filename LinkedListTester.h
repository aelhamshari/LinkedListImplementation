/* -------------------------------------------------
 *
 * File Name: LinkedListTester.h
 * Author: Afnan Elhamshari
 * Assignment: EECS-269 Lab02
 * Description: Declaration of the LinkedListTester class (handels -t option)
 * Date: 02/08/2018
 *
 ------------------------------------------------ */
#ifndef LINKED_LIST_TESTER_H
#define LINKED_LIST_TESTER_H
#include "LinkedList.h"
#include "Node.h"

class LinkedListTester
{
  private:
    LinkedList <int> link;
    /*
    * @pre two LinkedList objects
    * @post checks if the two objects' entries are the same
    * @Param a,b: pointers to LinkedList objects
    * @return returns if the two objects are the same
    */
    bool isSame(LinkedList<int>* a, LinkedList<int>* b);
    /*
    * @brief verifies isEmpty() returns true on an empty list
    */
    void test01();
    /*
    * @brief varivies the size after inserting a value at front
    */
    void test02();
    /*
    * @brief varivies the size after inserting a value at the end
    */
    void test03();
    /*
    * @brief varivies the size after inserting a value at the middle
    */
    void test04();
    /*
    * @brief varivies the size after deleting a value at front
    */
    void test05();
    /*
    * @brief varivies the size after deleting a value at the end
    */
    void test06();
    /*
    * @brief varivies the size after deleting a value at the middle
    */
    void test07();
    /*
    * @brief varivies insert() exception handling
    */
    void test08();
    /*
    * @brief varivies remove() exception handling if out of range position
    */
    void test09();
    /*
    * @brief varivies remove() exception handling for bad input
    */
    void test10();
    /*
    * @brief varivies getEntry() exception handling if out of range position
    */
    void test11();
    /*
    * @brief varivies getEntry() exception handling for bad input
    */
    void test12();
    /*
    * @brief varivies that getEntry() returns the correct value at front
    */
    void test13();
    /*
    * @brief varivies that getEntry() returns the correct value in the middle
    */
    void test14();
    /*
    * @brief varivies that getEntry() returns the correct value at end
    */
    void test15();
    /*
    * @brief varivies that replace() replaces with the correct value at front
    */
    void test16();
    /*
    * @brief varivies that replace() replaces with the correct value at the end
    */
    void test17();
    /*
    * @brief varivies that replace() replaces with the correct value at in the middle
    */
    void test18();
    /*
    * @brief varivies replace() exception handling if bad input
    */
    void test19();
    /*
    * @brief varivies replace() exception handling if out of range position
    */
    void test20();
    /*
    * @brief verifies isEmpty() returns false on a non-empty list
    */
    void test21();
    /*
    * @brief verifies copy constructed list returns correct entries for front
    */
    void test22();
    /*
    * @brief verifies copy constructed list returns correct entries for end
    */
    void test23();
    /*
    * @brief verifies copy constructed list returns correct entries in the middle
    */
    void test24();
    /*
    * @brief verifies insert() inserts the correct value at the front
    */
    void test25();
    /*
    * @brief verifies insert() inserts the correct value at the end
    */
    void test26();
    /*
    * @brief verifies insert() inserts the correct value at the middle
    */
    void test27();
    /*
    * @brief verifies remove() removes the correct value at the front
    */
    void test28();
    /*
    * @brief verifies remove() removes the correct value at the end
    */
    void test29();
    /*
    * @brief verifies remove() removes the correct value at the middle
    */
    void test30();
    /*
    * @brief verifies that Entries in list created by assignment operator are correct in the begining of the list
    */
    void test31();
    /*
    * @brief verifies that Entries in list created by assignment operator are correct in the end of the list
    */
    void test32();
    /*
    * @brief verifies that Entries in list created by assignment operator are correct in the middle of the list
    */
    void test33();
    /*
    * @brief verifies clear() deletes all nodes on a non-empty list
    */
    void test34();
    /*
    * @brief verifies clear() will confirm a size zero if called on an empty list
    */
    void test35();

  public:
    /*
    * @pre none
    * @post creates a LinkedListTester object
    */
    LinkedListTester();
    /*
    * @pre an existing LinkedListTester object
    * @post calls the function clear and deletes the LinkedListTester object
    */
    ~LinkedListTester();
    /*
    * @pre a constructor is created
    * @post runs all the tests
    */
    void runTests();
};
#endif
