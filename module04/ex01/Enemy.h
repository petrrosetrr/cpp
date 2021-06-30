//
// Created by Jimmie Alease on 6/29/21.
//

#ifndef MODULE04_ENEMY_H
#define MODULE04_ENEMY_H
#include <iostream>

class Enemy
{
protected:
	std::string type;
	int hitPoints;
public:
	Enemy(int hp, const std::string & type);
	Enemy(const Enemy & enemy);
	Enemy & operator=(const Enemy & enemy);
	virtual ~Enemy();
	const std::string & getType() const;
	int getHP() const;
	virtual void takeDamage(int damage);
};


#endif //MODULE04_ENEMY_H
