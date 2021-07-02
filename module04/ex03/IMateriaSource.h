//
// Created by Jimmie Alease on 7/2/21.
//

#ifndef MODULE04_IMATERIASOURCE_H
#define MODULE04_IMATERIASOURCE_H
class AMateria;

class IMateriaSource{
public:
	virtual ~IMateriaSource() {};
	virtual void learnMateria(AMateria*) = 0;
	virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif //MODULE04_IMATERIASOURCE_H
