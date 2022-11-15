/* -------------------------------------------------
 *
 * File Name: LinkedListTester.cpp
 * Author: Afnan Elhamshari
 * Assignment: EECS-269 Lab02
 * Description: Implementation of the LinkedListTester class (handels -t option)
 * Date: 02/08/2018
 *
 ------------------------------------------------ */
#include "LinkedListTester.h"
#include "LinkedList.h"
#include "Node.h"
#include <string>
#include <iostream>
#include <stdexcept>
#include <time.h>
#include <cstdlib>
using namespace std;

LinkedListTester::LinkedListTester()
{
  srand(time(NULL));
}

LinkedListTester::~LinkedListTester()
{
  link.clear();
}

void LinkedListTester::runTests()
{
  cout << "Running Tests...\n";
  test01();
  test02();
  test03();
  test04();
  test05();
  test06();
  test07();
  test08();
  test09();
  test10();
  test11();
  test12();
  test13();
  test14();
  test15();
  test16();
  test17();
  test18();
  test19();
  test20();
  test21();
  test22();
  test23();
  test24();
  test25();
  test26();
  test27();
  test28();
  test29();
  test30();
  test31();
  test32();
  test33();
  test34();
  test35();
  cout << "End of Test Mode.\n";
}

void LinkedListTester::test01()
{

  cout << "Test #1: size of empty list is zero ";
  if (link.isEmpty())
  {
    cout << "PASSED\n";
  }
  else
  {
    cout << "FAILED\n";
  }
}

void LinkedListTester::test02()
{
  int length = link.getLength();
  link.insert(1,4);
  cout << "Test #2: size returns correct value after inserting at front of list ";
  if(link.getLength()== length+1)
  {
    cout <<"PASSED\n";
  }
  else
  {
    cout << "FAILED\n";
  }
}

void LinkedListTester::test03()
{
  int length = link.getLength();
  link.insert(link.getLength()+1,4);
  cout << "Test #3: size returns correct value after inserting at the back of the list ";
  if(link.getLength()== length+1)
  {
    cout <<"PASSED\n";
  }
  else
  {
    cout << "FAILED\n";
  }
}

void LinkedListTester::test04()
{
  int length = link.getLength();
  link.insert(2,4);
  cout << "Test #4: size returns correct value after inserting at the middle of the list ";
  if(link.getLength()== length+1)
  {
    cout <<"PASSED\n";
  }
  else
  {
    cout << "FAILED\n";
  }
}

void LinkedListTester::test05()
{
  int length = link.getLength();
  link.remove(1);
  cout << "Test #5: size returns correct value after removing at the beginning of the list ";
  if(link.getLength()== length-1)
  {
    cout <<"PASSED\n";
  }
  else
  {
    cout << "FAILED\n";
  }
}

void LinkedListTester::test06()
{
  int length = link.getLength();
  link.remove(length);
  cout << "Test #6: size returns correct value after removing at the back of the list ";
  if(link.getLength()== length-1)
  {
    cout <<"PASSED\n";
  }
  else
  {
    cout << "FAILED\n";
  }
}

void LinkedListTester::test07()
{
  link.insert(1,4);
  link.insert(2,5);
  int length = link.getLength();
  link.remove(2);
  cout << "Test #7: size returns correct value after removing at the middle of the list ";
  if(link.getLength()== length-1)
  {
    cout <<"PASSED\n";
  }
  else
  {
    cout << "FAILED\n";
  }
}

void LinkedListTester::test08()
{
  bool pass = false;
  cout << "Test #8: insert() throws an exception if position is not valid ";
  try
  {
      link.insert(-1,4);
  }
  catch (std::runtime_error& e)
  {
    pass = true;
  }
  if(pass)
  {
    cout <<"PASSED\n";
  }
  else
  {
    cout << "FAILED\n";
  }
}

void LinkedListTester::test09()
{
  bool pass = false;
  cout << "Test #9: remove() throws an exception if position is bigger than the list length ";
  try
  {
      link.remove(link.getLength()+3);
  }
  catch (std::runtime_error& e)
  {
    pass = true;
  }
  if(pass)
  {
    cout <<"PASSED\n";
  }
  else
  {
    cout << "FAILED\n";
  }
}

void LinkedListTester::test10()
{
  bool pass = false;
  cout << "Test #10: remove() throws an exception if position is not valid ";
  try
  {
      link.remove(-34);
  }
  catch (std::runtime_error& e)
  {
    pass = true;
  }
  if(pass)
  {
    cout <<"PASSED\n";
  }
  else
  {
    cout << "FAILED\n";
  }
}

void LinkedListTester::test11()
{
  bool pass = false;
  cout << "Test #11: getEntry() throws an exception if position is bigger than the list length ";
  try
  {
      link.getEntry(link.getLength()+5);
  }
  catch (std::runtime_error& e)
  {
    pass = true;
  }
  if(pass)
  {
    cout <<"PASSED\n";
  }
  else
  {
    cout << "FAILED\n";
  }
}

void LinkedListTester::test12()
{
  bool pass = false;
  cout << "Test #12: getEntry() throws an exception if position is invalid ";
  try
  {
      link.getEntry(0);
  }
  catch (std::runtime_error& e)
  {
    pass = true;
  }
  if(pass)
  {
    cout <<"PASSED\n";
  }
  else
  {
    cout << "FAILED\n";
  }
}

void LinkedListTester::test13()
{
  cout << "Test #13: getEntry() returns the correct value at the beginning of the list ";
  int entered = rand();
  link.insert(1,entered);
  int returned = link.getEntry(1);
  if(entered == returned)
  {
    cout <<"PASSED\n";
  }
  else
  {
    cout << "FAILED\n";
  }
}

void LinkedListTester::test14()
{
  cout << "Test #14: getEntry() returns the correct value at the middle of the list ";
  int entered = rand();
  int position = (link.getLength())/2;
  link.insert(position,entered);
  int returned = link.getEntry(position);
  if(entered == returned)
  {
    cout <<"PASSED\n";
  }
  else
  {
    cout << "FAILED\n";
  }
}

void LinkedListTester::test15()
{
  cout << "Test #15: getEntry() returns the correct value at the end of the list ";
  int entered = rand();
  link.insert(link.getLength()+1,entered);
  int returned = link.getEntry(link.getLength());
  if(entered == returned)
  {
    cout <<"PASSED\n";
  }
  else
  {
    cout << "FAILED\n";
  }
}

void LinkedListTester::test16()
{
  cout << "Test #16: replace() changes the value at the beginning of the list ";
  int entered = rand();
  link.replace(1,entered);
  int returned = link.getEntry(1);
  if(entered == returned)
  {
    cout <<"PASSED\n";
  }
  else
  {
    cout << "FAILED\n";
  }
}

void LinkedListTester::test17()
{
  cout << "Test #17: replace() changes the value at the end of the list ";
  int entered = rand();
  link.replace(link.getLength(),entered);
  int returned = link.getEntry(link.getLength());
  if(entered == returned)
  {
    cout <<"PASSED\n";
  }
  else
  {
    cout << "FAILED\n";
  }
}

void LinkedListTester::test18()
{
  cout << "Test #18: replace() changes the value at the middle of the list  ";
  int entered = rand();
  int position = rand() % (link.getLength()-3) + 2;
  link.replace(position,entered);
  int returned = link.getEntry(position);
  if(entered == returned)
  {
    cout <<"PASSED\n";
  }
  else
  {
    cout << "FAILED\n";
  }
}

void LinkedListTester::test19()
{
  bool pass = false;
  cout << "Test #19: replace() throws an exception if position is invalid ";
  try
  {
      link . replace(-10,234);
  }
  catch (std::runtime_error& e)
  {
    pass = true;
  }
  if(pass)
  {
    cout <<"PASSED\n";
  }
  else
  {
    cout << "FAILED\n";
  }
}

void LinkedListTester::test20()
{
  bool pass = false;
  cout << "Test #20: replace() throws an exception if position is not on the list ";
  try
  {
      link.replace(link.getLength()+1,234);
  }
  catch (std::runtime_error& e)
  {
    pass = true;
  }
  if(pass)
  {
    cout <<"PASSED\n";
  }
  else
  {
    cout << "FAILED\n";
  }
}

void LinkedListTester::test21()
{
  cout << "Test #21: size of non-empty list is non-zero ";
  if (link.isEmpty())
  {
    cout << "FAILED\n";
  }
  else
  {
    cout << "PASSED\n";
  }
}

void LinkedListTester::test22()
{
  cout <<"Test #22: copy constructed list returns correct entries for front ";
  LinkedList<int> listcopy(link);
  if (listcopy.getEntry(1)==link.getEntry(1))
  {
    cout <<"PASSED\n";
  }
  else
  {
    cout <<"FAILED\n";
  }
  listcopy.clear();
}

void LinkedListTester::test23()
{
  cout <<"Test #23: copy constructed list returns correct entries for back ";
  LinkedList<int> listcopy(link);
  if (listcopy.getEntry(listcopy.getLength())==link.getEntry(link.getLength()))
  {
    cout <<"PASSED\n";
  }
  else
  {
    cout <<"FAILED\n";
  }
  listcopy.clear();
}

void LinkedListTester::test24()
{
  cout <<"Test #24: copy constructed list returns correct entries for the middle ";
  LinkedList<int> listcopy(link);
  int position = rand() % link.getLength() + 1;
  if (listcopy.getEntry(position)==link.getEntry(position))
  {
    cout <<"PASSED\n";
  }
  else
  {
    cout <<"FAILED\n";
  }
  listcopy.clear();
}

void LinkedListTester::test25()
{
  int entry = rand()% 100 + 1;
  link.insert(1,entry);
  cout << "Test #25: insert() inserts the correct value at the front of the list ";
  if(link.getEntry(1)== entry)
  {
    cout <<"PASSED\n";
  }
  else
  {
    cout << "FAILED\n";
  }
}

void LinkedListTester::test26()
{
  int entry = rand()% 100 + 1;
  link.insert(link.getLength()+1,entry);
  cout << "Test #26: insert() inserts the correct value at the end of the list ";
  if(link.getEntry(link.getLength())== entry)
  {
    cout <<"PASSED\n";
  }
  else
  {
    cout << "FAILED\n";
  }
}

void LinkedListTester::test27()
{
  int entry = rand()% 100 + 1;
  int position = rand()% link.getLength() + 1;
  link . insert(position,entry);
  cout << "Test #27: insert() inserts the correct value at the middle of the list ";
  if(link.getEntry(position)== entry)
  {
    cout <<"PASSED\n";
  }
  else
  {
    cout << "FAILED\n";
  }
}

bool LinkedListTester::isSame(LinkedList<int>* a, LinkedList<int>* b)
{
  for (int i =1; i<=a->getLength();i++)
  {
    if (a->getEntry(i)!=b->getEntry(i+1))
    return(false);
  }
  return(true);
}

void LinkedListTester::test28()
{
  LinkedList<int> listcopy(link);
  listcopy.remove(1);
  cout << "Test #28: remove() removes the correct value at the begining of the list ";
  if(isSame(&listcopy,&link))
  {
    cout <<"PASSED\n";
  }
  else
  {
    cout << "FAILED\n";
  }
  listcopy.clear();
}

void LinkedListTester::test29()
{
  bool pass = true;
  LinkedList<int> listcopy(link);
  listcopy.remove(listcopy.getLength());
  cout << "Test #29: remove() removes the correct value at the end of the list ";
  for (int i =1; i<= listcopy.getLength();i++)
  {
    if (listcopy.getEntry(i)!=link.getEntry(i))
    {
      pass = false;
      break;
    }
  }
  if(pass)
  {
    cout <<"PASSED\n";
  }
  else
  {
    cout << "FAILED\n";
  }
  listcopy.clear();
}

void LinkedListTester::test30()
{
  bool pass = true;
  LinkedList<int> listcopy(link);
  int position = rand()% listcopy.getLength()+1;
  listcopy.remove(position);
  cout << "Test #30: remove() removes the correct value at the middle of the list ";
  for (int i =1; i<position;i++)
  {
    if (listcopy.getEntry(i)!=link.getEntry(i))
    {
      pass = false;
      break;
    }
  }
  for (int i = position; i<listcopy.getLength();i++)
  {
    if (listcopy.getEntry(i)!=link.getEntry(i+1))
    {
      pass = false;
      break;
    }
  }
  if(pass)
  {
    cout <<"PASSED\n";
  }
  else
  {
    cout << "FAILED\n";
  }
  listcopy.clear();
}

void LinkedListTester::test31()
{
  cout <<"Test #31: Entries in list created by assignment operator are correct in the begining of the list ";
  LinkedList<int> listcopy;
  listcopy = link;
  
  if (listcopy.getEntry(1)==link.getEntry(1))
  {
    cout <<"PASSED\n";
  }
  else
  {
    cout <<"FAILED\n";
  }
  listcopy.clear();
}

void LinkedListTester::test32()
{
  cout <<"Test #32: Entries in list created by assignment operator are correct in the end of the list ";
  LinkedList<int> listcopy;
  listcopy = link;

  if (listcopy.getEntry(listcopy.getLength())==link.getEntry(link.getLength()))
  {
    cout <<"PASSED\n";
  }
  else
  {
    cout <<"FAILED\n";
  }
  listcopy.clear();
}

void LinkedListTester::test33()
{
  cout <<"Test #33: Entries in list created by assignment operator are correct in the middle of the list ";
  LinkedList<int> listcopy;
  listcopy = link;

  int position = rand()% (listcopy.getLength()-3) + 2;
  if (listcopy.getEntry(position)==link.getEntry(position))
  {
    cout <<"PASSED\n";
  }
  else
  {
    cout <<"FAILED\n";
  }
  listcopy.clear();
}

void LinkedListTester::test34()
{
  cout << "Test #34: clear() deletes all the nodes in the list and size is zero ";
  link.clear();
  if(link.getLength()==0)
  {
    cout << "PASSED\n";
  }
  else
  {
    cout <<"FAILED\n";
  }
}

void LinkedListTester::test35()
{
  cout << "Test #35: clear() called on an empty list will return size zero ";
  link.clear();
  if(link.isEmpty())
  {
    cout << "PASSED\n";
  }
  else
  {
    cout <<"FAILED\n";
  }
}
