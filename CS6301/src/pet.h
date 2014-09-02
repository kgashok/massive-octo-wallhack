// pet.h
//

#ifndef LZZ_pet_h
#define LZZ_pet_h
#define LZZ_INLINE inline

#include <iostream>
#include <string>
using namespace std;

class Pet {
protected:
	string Name;
public:
	Pet();
	Pet(string n);
	virtual void MakeSound();
	virtual int MakeSound1();
	virtual string MakeSound2();
	void WakeUp();
	virtual ~Pet() = 0;
};
class Cat: public Pet {
public:
	Cat();
	Cat(string n);
	Cat(const char *n);
	void MakeSound();
	virtual string MakeSound2();
};
class Dog: public Pet {
public:
	Dog();
	Dog(string n);
	Dog(char const * n);
	Dog(Dog const & dg);
	Dog & operator =(Dog rhs);
	void MakeSound();
	virtual string MakeSound2();
};
#undef LZZ_INLINE
#endif
