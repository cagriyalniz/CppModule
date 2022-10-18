/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAanimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 14:46:40 by cyalniz           #+#    #+#             */
/*   Updated: 2022/10/13 17:25:02 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGAanimal_HPP
# define WRONGAanimal_HPP

#include <iostream>

class WrongAanimal{
    protected:
        std::string _type;
    
    public:
        WrongAanimal();
        virtual ~WrongAanimal();
        WrongAanimal(WrongAanimal const &src);
    	WrongAanimal &operator=(WrongAanimal const &src);
        std::string getType() const;
        void makeSound() const;
    
};

#endif
