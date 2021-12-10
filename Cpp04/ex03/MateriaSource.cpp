/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minchoi <minchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 17:21:54 by minchoi           #+#    #+#             */
/*   Updated: 2021/12/10 14:08:45 by minchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	for (int i=0; i<AM_SIZE; i++)
		this->am[i] = NULL;
	for (int i=0; i<1024; i++)
		this->all_created[i] = NULL;
	std::cout << "[" << std::setw(W_SIZE) << "Default Constructor on MateriaSource." << "] " << std::endl;
}

MateriaSource::~MateriaSource() {
	for (int i=0; i<AM_SIZE; i++) {
		if (this->am[i]) {
			delete this->am[i];
			this->am[i] = NULL;
		}
	}
	for (int i=0; i<1024; i++) {
		if (this->all_created[i]) {
			delete this->all_created[i];
			this->all_created[i] = NULL;
		}
	}
	std::cout << "[" << std::setw(W_SIZE) << "Destructor on MateriaSource." << "] " << std::endl;
}

MateriaSource::MateriaSource(MateriaSource const& ms) {
	const AMateria*	tmp;

	for (int i = 0 ; i < AM_SIZE ; ++i) {
		if (this->am[i]) {
			delete this->am[i];
			this->am[i] = NULL;
		}
		tmp = ms.getMateria(i);
		if (tmp)
			this->am[i] = tmp->clone();
	}
	std::cout << "[" << std::setw(W_SIZE) << "Copy Constructor on MateriaSource." << "] " << std::endl;
}

MateriaSource	MateriaSource::operator=(MateriaSource const& ms) {
	const AMateria*	tmp;

	if (this != &ms) {
		for (int i = 0 ; i < AM_SIZE ; ++i) {
			if (this->am[i]) {
				delete this->am[i];
				this->am[i] = NULL;
			}
			tmp = ms.getMateria(i);
			if (tmp)
				this->am[i] = tmp->clone();
		}
	}
	std::cout << "[" << std::setw(W_SIZE) << "Assignation on MateriaSource." << "] " << std::endl;
	return (*this);
}

AMateria const*	MateriaSource::getMateria(int idx) const {
	return (this->am[idx]);
}

void 			MateriaSource::learnMateria(AMateria* am) {
	if (!am)
		return ;
	for (int i = 0 ; i < AM_SIZE ; ++i) {
		if (!this->am[i]) {
			this->am[i] = am;
			std::cout << "[" << std::setw(W_SIZE) << "learnMateria Function on MateriaSource." << "] "
					<< am->getType() << std::endl;
			return ;
		}
	}
	std::cout << "[" << std::setw(W_SIZE) << "learnMateria Function on MateriaSource." << "] "
			<< am->getType() << " Failed (FULL)" << std::endl;
}

AMateria*		MateriaSource::createMateria(std::string const & type) {
	for (int i=0 ; i<AM_SIZE; i++) {
		if (this->am[i] && this->am[i]->getType() == type) {
			std::cout << "[" << std::setw(W_SIZE) << "createMateria Function on MateriaSource." << "] "
					<< type << std::endl;
			for (int j=0; j<1024; j++) {
				if (all_created[j] == NULL) {
					all_created[j] = this->am[i]->clone();
					return (all_created[j]);
				}
			}
		}
	}
	std::cout << "[" << std::setw(W_SIZE) << "createMateria Function on MateriaSource." << "] "
				<< type << " Failed (Not Found)" << std::endl;
	return (NULL);
}