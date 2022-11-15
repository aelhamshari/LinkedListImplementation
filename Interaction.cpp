/* -------------------------------------------------
 *
 * File Name: Interaction.cpp
 * Author: Afnan Elhamshari
 * Assignment: EECS-269 Lab02
 * Description: Declaration of the Interaction class (handels user interaction -i)
 * Date: 02/08/2018
 *
 ------------------------------------------------ */
#include "Interaction.h"
#include "LinkedList.h"
#include <iostream>
#include <limits>
#include <stdexcept>
using namespace std;

void Interaction::menu(int &choice)
{
  cout << "\nMake a selection:\n1) Insert value at position\n";
  cout << "2) Remove at position\n3) Replace value at position\n";
  cout << "4) Print length\n5) Print list\n6) Exit\n";
  cin.clear();
  cout << "Choice: ";
  cin >> choice;
  while (cin.fail() || choice > 6 ||choice < 1)
  {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    cout << "Please enter a valid choice.\n";
    cout << "Choice: ";
    cin >> choice;
  }
}

void Interaction::Insert(LinkedList <int>* l)
{
  int Entry = 0;
  int pos = 0;
  try
  {
    cout << "What is the value you want to enter? ";
    cin >> Entry;
    while (cin.fail())
    {
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(),'\n');
      cout << "Please enter a valid Entry.\n";
      cout << "Entry: ";
      cin >> Entry;
    }
    cout << "Where do you want to insert your value? ";
    cin >> pos;
    while (cin.fail())
    {
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(),'\n');
      cout << "Please enter a valid Position.\n";
      cout << "Position: ";
      cin >> pos;
    }
    l -> insert(pos,Entry);
  }
  catch(std::runtime_error& e)
  {
    cout << e.what();
  }
}

void Interaction::Remove(LinkedList <int>* l)
{
  int pos = 0;
  if (l->isEmpty())
  {
    cout << "The list is empty.\n";
  }
  else
  {
    try
    {
      cout << "Where do you want to remove your value? ";
      cin >> pos;
      while (cin.fail())
      {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        cout << "Please enter a valid Position.\n";
        cout << "Position: ";
        cin >> pos;
      }
      l-> remove(pos);
    }
    catch(std::runtime_error& a)
    {
      cout << a.what();
    }
  }
}



void Interaction::Replace(LinkedList <int>* l)
{
int NEntry = 0;
int pos = 0;
  if (l->isEmpty())
  {
    cout << "The list is empty.\n";
  }
  else
  {
    cout << "What is the value of your new Entry? ";
    cin >> NEntry;
    while (cin.fail())
    {
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(),'\n');
      cout << "Please enter a valid Entry.\n";
      cout << "Entry: ";
      cin >> NEntry;
    }
    cout << "Where do you want to replace your value? ";
    cin >> pos;
    while (cin.fail())
    {
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(),'\n');
      cout << "Please enter a valid Position.\n";
      cout << "Position: ";
      cin >> pos;
    }
  }
  try
  {
    l-> replace(pos,NEntry);
  }
  catch(std::runtime_error& x)
  {
    cout << x.what();
  }
}


void Interaction::PrintList(LinkedList <int>* l)
{
  if (l->isEmpty())
  {
    cout << "The list is empty.\n";
  }
  else
  {
    try
    {
      cout << "Here are the enteries in your list so far:\n";
      for (int i = 1; i <= (l-> getLength()); i++)
      {
        cout << "Entry " << i << ": ";
        cout << l-> getEntry(i) << endl;
      }
    }
    catch(std::runtime_error& e)
    {
      cout << e.what();
    }
  }
}

void Interaction::menuinteraction()
{
  bool again = true;
  int Choice = 0;
  LinkedList <int>* list = new LinkedList <int> ();
  do
  {
    menu(Choice);
    switch(Choice)
    {
      case 1:
      {
        Insert(list);
        break;
      }
      case 2:
      {
        Remove(list);
        break;
      }
      case 3:
      {
        Replace(list);
        break;
      }
      case 4:
      {
        cout << "The length of your list is: " << list -> getLength() << endl;
        break;
      }
      case 5:
      {
        PrintList(list);
        break;
      }
      case 6:
      {
        list->clear();
        delete list;
        cout << "Exiting Program. Have a good day!\n";
        again = false;
      }
    }
  }while(again); 
}
