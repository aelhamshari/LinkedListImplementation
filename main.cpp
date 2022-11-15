/* -------------------------------------------------
 *
 * File Name: main.cpp
 * Author: Afnan Elhamshari
 * Assignment: EECS-269 Lab02
 * Description: Runs the program
 * Date: 02/08/2018
 *
 ------------------------------------------------ */
 #include "LinkedList.h"
#include "LinkedListTester.h"
#include "Interaction.h"
#include "Node.h"
#include <iostream>
#include <cstring>
using namespace std;

int main(int argc,char** argv)
{
  if(argc < 2)
  {
    cout << "Incorrect number of parameters! Please provide the name of the file.\n";
  }
  else if (strcmp(argv[1], "-t") == 0)
  {
    // LinkedListTester* test = new LinkedListTester();
    // test->runTests();
    // delete test;

    LinkedListTester test = LinkedListTester();
    test.runTests();
  }
  else if (strcmp(argv[1], "-i") == 0)
  {
    // Interaction* interact = new Interaction();
    // interact -> menuinteraction();
    // delete interact;

    Interaction interact = Interaction();
    interact.menuinteraction();
    
  }
  else
  {
    cout << "Please enter a good argument. Terminating Program." << endl;
  }

  return(0);
}
