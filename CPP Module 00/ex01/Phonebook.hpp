/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrettsc <mbrettsc@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 12:34:47 by mbrettsc          #+#    #+#             */
/*   Updated: 2023/07/23 21:51:33 by mbrettsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PHONEBOOK_HPP

# define PHONEBOOK_HPP

# include "Contact.hpp"

class Phonebook {
	private:
		Contact	_contact[8];
		int		index;
		int		flag;
	public:
		Phonebook();
		~Phonebook();
		void	add();
		void	search();
};

void	printHood();
void    printContacts(Contact _contact[8], int j);
void	printDetail(Contact _contact[8], int row);

#endif
