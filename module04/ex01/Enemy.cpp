//
// Created by Jimmie Alease on 6/29/21.
//

#include "Enemy.h"

Enemy::Enemy(int hp, const std::string &type) : type(type), hitPoints(hp) {}

Enemy::~Enemy() {}

const std::string &Enemy::getType() const {
	return this->type;
}

int Enemy::getHP() const {
	return this->hitPoints;
}

void Enemy::takeDamage(int damage) {
	if (damage > 0) {
		this->hitPoints -= damage;
		if (this->hitPoints < 0) {
			this->hitPoints = 0;
		}
	}
}

Enemy::Enemy(const Enemy &enemy) {
	*this = enemy;
}

Enemy &Enemy::operator=(const Enemy &enemy) {
	if(this != &enemy) {
		this->type = enemy.type;
		this->hitPoints = enemy.hitPoints;
	}
	return *this;
}
