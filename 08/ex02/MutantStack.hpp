/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayassir <ayassir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 14:45:28 by ayassir           #+#    #+#             */
/*   Updated: 2023/02/16 14:55:00 by ayassir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _MutantStack_HPP_
#define _MutantStack_HPP_

#include <iostream>
#include <stack>
#include <deque>
#include <list>
#include <vector>

// ******************************************************** //
//                         CLASSES                         //
// ****************************************************** //

template <class T, class Container = std::deque<T> >
class	MutantStack : public std::stack<T, Container>
{
	public	:
		typedef typename MutantStack<T, Container>::stack::container_type::iterator	iterator;
		typedef typename MutantStack<T, Container>::stack::container_type::reverse_iterator	reverse_iterator;

		MutantStack ()
		{
		};

		MutantStack (MutantStack const &obj)
		{
			*this = obj;
		};
		
		~MutantStack ()
		{
		};

		MutantStack &operator= (const MutantStack &obj)
		{
			if (*this != obj)
				*this = obj;
			return (*this);
		};

		iterator	begin(void)
		{
			return (this->c.begin());
		}
		
		iterator	end(void)
		{
			return (this->c.end());
		}

		reverse_iterator	rbegin(void)
		{
			return (this->c.rbegin());
		}
		
		reverse_iterator	rend(void)
		{
			return (this->c.rend());
		}

};

// ******************************************************** //
//                        FUNCTIONS                        //
// ****************************************************** //

#endif
