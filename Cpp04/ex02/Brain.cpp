/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minchoi <minchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 14:46:48 by minchoi           #+#    #+#             */
/*   Updated: 2021/12/06 16:20:51 by minchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	for (int i=0; i<B_SIZE; i++) {
		std::string idea;
		idea += "Idea " + std::to_string(i);
		this->ideas[i] = idea;
	}
	std::cout << "[ " << std::setw(W_SIZE) << B_NAME << " ] "
			<< "Default constructor." << std::endl;
}

Brain::~Brain() {
	std::cout << "[ " << std::setw(W_SIZE) << B_NAME << " ] "
			<< "Destructor." << std::endl;
}

Brain::Brain(const Brain& brain) {
	*this = brain;
	std::cout << "[ " << std::setw(W_SIZE) << B_NAME << " ] "
			<< "Copy constructor." << std::endl;
}

Brain&	Brain::operator=(const Brain& brain) {
	for (int i=0; i<B_SIZE; i++)
		this->ideas[i] = brain.getIdea(i);
	std::cout << "[ " << std::setw(W_SIZE) << B_NAME << " ] "
			<< "operator= assignment." << std::endl;
	return (*this);
}

std::string	Brain::getIdea(const int& i) const {
	return (this->ideas[i]);
}

void		Brain::setIdea(const int& i, const std::string& idea) {
	this->ideas[i] = idea;
}