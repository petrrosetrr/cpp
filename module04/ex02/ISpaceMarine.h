//
// Created by Jimmie Alease on 6/30/21.
//

#ifndef MODULE04_ISPACEMARINE_H
#define MODULE04_ISPACEMARINE_H


class ISpaceMarine {
public:
	virtual ~ISpaceMarine() {};
	virtual ISpaceMarine* clone() const = 0;
	virtual void battleCry() const = 0;
	virtual void rangedAttack() const = 0;
	virtual void meleeAttack() const = 0;
};

#endif //MODULE04_ISPACEMARINE_H
