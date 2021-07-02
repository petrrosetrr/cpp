//
// Created by Jimmie Alease on 7/2/21.
//
#ifndef MODULE04_ICHARACTER_H
#define MODULE04_ICHARACTER_H
class AMateria;
class ICharacter
{
public:
	virtual ~ICharacter() {}
	virtual std::string const & getName() const = 0;
	virtual void equip(AMateria* m) = 0;
	virtual void unequip(int idx) = 0;
	virtual void use(int idx, ICharacter& target) = 0;
};

#endif //MODULE04_ICHARACTER_H
