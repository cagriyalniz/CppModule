/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 19:53:16 by cyalniz           #+#    #+#             */
/*   Updated: 2022/10/06 20:48:51 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
    Harl hrl;
    hrl.complain("info");
    hrl.complain("error");
    hrl.complain("debug");
    hrl.complain("warning");
    hrl.complain("test");
}