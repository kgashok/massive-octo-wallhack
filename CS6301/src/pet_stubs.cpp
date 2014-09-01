/***********************************************************************
 * AUTHOR: KITE <KITE>
 *   FILE: pet_stubs.cpp
 *   DATE: Sat Aug 30 17:31:13 2014
 *  DESCR: 
 ***********************************************************************/
#include "pet.h"
#include <iostream>


/***********************************************************************
 *  Method: Pet::Pet
 *  Params:
 * Effects:
 ***********************************************************************/
Pet::Pet()
{
    cerr << "Pet::Pet()" << endl;
}

/***********************************************************************
 *  Method: Pet::Pet
 *  Params: string n
 * Effects: 
 ***********************************************************************/
Pet::Pet(string n)
{
    cerr << "Pet::Pet()" << endl;

}


/***********************************************************************
 *  Method: Pet::MakeSound
 *  Params: 
 * Returns: void
 * Effects: 
 ***********************************************************************/
void
Pet::MakeSound()
{
    cerr << "Pet::MakeSound()" << endl;
}


/***********************************************************************
 *  Method: Pet::MakeSound1
 *  Params: 
 * Returns: int
 * Effects: 
 ***********************************************************************/
int
Pet::MakeSound1()
{
    int dummy =0;

    cerr << "Pet::MakeSound1()" << endl;
    return dummy;
}


/***********************************************************************
 *  Method: Pet::MakeSound2
 *  Params: 
 * Returns: string
 * Effects: 
 ***********************************************************************/

string
Pet::MakeSound2()
{
    cerr << "Pet::MakeSound2()" << endl;

    string dummy;

    return dummy;
}


/***********************************************************************
 *  Method: Pet::WakeUp
 *  Params: 
 * Returns: void
 * Effects: 
 ***********************************************************************/
void
Pet::WakeUp()
{
    cerr << "Pet::WakeUp()" << endl;
}


/***********************************************************************
 *  Method: Pet::~Pet
 *  Params: 
 * Effects: 
 ***********************************************************************/
Pet::~Pet()
{
    cerr << "Pet::~Pet()" << endl;
}


/***********************************************************************
 *  Method: Cat::Cat
 *  Params: string n
 * Effects: 
 ***********************************************************************/
Cat::Cat(string n) : Pet (n)
{
    cerr << "Cat::Cat()" << endl;
}


/***********************************************************************
 *  Method: Cat::MakeSound
 *  Params: 
 * Returns: void
 * Effects: 
 ***********************************************************************/
void
Cat::MakeSound()
{
    cerr << "Cat::MakeSound()" << endl;
}


/***********************************************************************
 *  Method: Dog::Dog
 *  Params: 
 * Effects: 
 ***********************************************************************/
Dog::Dog() : Pet ("NoName")
{
    cerr << "Dog::Dog()" << endl;
}


/***********************************************************************
 *  Method: Dog::Dog
 *  Params: string n
 * Effects: 
 ***********************************************************************/
Dog::Dog(string n) : Pet (n)
{
    cerr << "Dog::Dog()" << endl;
}


/***********************************************************************
 *  Method: Dog::Dog
 *  Params: const char *n
 * Effects: 
 ***********************************************************************/
Dog::Dog(const char *n) : Pet (n)
{
    cerr << "Dog::Dog()" << endl;
}


/***********************************************************************
 *  Method: Dog::Dog
 *  Params: const Dog &dg
 * Effects: 
 ***********************************************************************/
Dog::Dog(const Dog &dg) : Pet (dg.Name)
{
    cerr << "Dog::Dog()" << endl;
}


/***********************************************************************
 *  Method: Dog::operator=
 *  Params: Dog rhs
 * Returns: Dog &
 * Effects: 
 ***********************************************************************/
Dog &
Dog::operator=(Dog rhs)
{
    cerr << "Dog::operator=()" << endl;

}


/***********************************************************************
 *  Method: Dog::MakeSound
 *  Params: 
 * Returns: void
 * Effects: 
 ***********************************************************************/
void
Dog::MakeSound()
{
    cerr << "Dog::MakeSound()" << endl;
}


/***********************************************************************
 *  Method: Dog::MakeSound2
 *  Params: 
 * Returns: string
 * Effects: 
 ***********************************************************************/


string
Dog::MakeSound2()
{
    string dummy;

    cerr << "Dog::MakeSound2()" << endl;

    return dummy;
}


inline Cat::Cat() :
		Pet() {
}

inline Cat::Cat(const char* n) :
		Pet(n) {
}

inline string Cat::MakeSound2(void) {
	string dummy;

	return dummy;

}
