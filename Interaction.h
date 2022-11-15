/* -------------------------------------------------
 *
 * File Name: Interaction.h
 * Author: Afnan Elhamshari
 * Assignment: EECS-269 Lab02
 * Description: Declaration of the Interaction class (handels -i option)
 * Date: 02/08/2018
 *
 ------------------------------------------------ */
 #ifndef INTERACTION_H
#define INTERACTION_H
#include "LinkedList.h"

class Interaction
{
  public:
    /*
     * @pre none
     * @post runs the -i Interaction option
    */
    void menuinteraction();
    //Prints the menu options to the user
    void menu(int &choice);
    //calls the options to insert at a position in the list
    void Insert(LinkedList <int>* l);
    //calls the option to remove from a position in the list
    void Remove(LinkedList <int>* l);
    //calls the option to replace at a position in the list
    void Replace(LinkedList <int>* l);
    //calls the option to print the whole list
    void PrintList(LinkedList <int>* l);
};
#endif
