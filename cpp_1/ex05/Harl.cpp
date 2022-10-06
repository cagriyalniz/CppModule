/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 19:53:21 by cyalniz           #+#    #+#             */
/*   Updated: 2022/10/06 20:48:44 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"


Harl::Harl(){

	this->func[0].name = "debug";
	this->func[1].name = "info";
	this->func[2].name = "warning";
	this->func[3].name = "error";
	this->func[0].f = &Harl::debug;
	this->func[1].f = &Harl::info;
	this->func[2].f = &Harl::warning;
	this->func[3].f = &Harl::error;

}
Harl::~Harl(){}

void Harl::complain(std::string level){
    
    int i;
    i = 0;
    
    while(i < 4){
        if(level.compare(this->func[i].name) == 0){
            (this->*func[i].f)();
            return ;
        }
        i++;
    }
    std::cout<<"your message is invalid!"<<std::endl;
/*     t_func func[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string levels[4] = {"debug", "info", "warning", "error"};
    while(i < 4){
        if(!levels[i].compare(level)){
            (this->*func[i])();
        }
        i++;
    } */
}

void Harl::debug(void){
    std::string msg = "7XL-çift peynirli-üçlü turşu-özel-ketçaplı burgerime fazladan domuz pastırması yemeyi seviyorum. Gerçekten seviyorum!";
    std::cout<<msg<<std::endl;

}

void Harl::info(void){
    std::string msg = "Ekstra domuz pastırması eklemenin daha fazla paraya mal olduğuna inanamıyorum. Burgerime yeterince pastırma koymadınız! Yapsaydınız, daha fazlasını istemezdim!";
    std::cout<<msg<<std::endl;
}

void Harl::warning(void){
    std::string msg = "Bence bedavaya fazladan pastırma yemeyi hak ediyorum. Ben yıllardır geliyorum, sen geçen aydan beri burada çalışmaya başladın.";
    std::cout<<msg<<std::endl;
}

void Harl::error(void){
    std::string msg =  "Bu kabul edilemez! Şimdi müdürle konuşmak istiyorum.";
    std::cout<<msg<<std::endl;
}