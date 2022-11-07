/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 19:53:08 by cyalniz           #+#    #+#             */
/*   Updated: 2022/10/06 17:03:11 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <cstdlib>
#include <string.h>

static std :: string	replacing(std :: string str, std :: string s1, std :: string s2) {
	size_t i = 0;
	size_t j = 0;
	size_t len = s1.length();
	int flag = 0;
	int posend = 0;
	int posfirst = 0;
	while(i < str.length()){
		j = 0;
		if(str[i] == s1[j]){
			
			posfirst = i;
			while(str[i] == s1[j]){
				i++;
				j++;
			}
			if(j == len){
			std::cout<<"test"<<std::endl;
				
				flag = 1;
				posend = i - 1;
				break;
			}
		}
		i++;
	}
	if(flag = 1){
		str.erase(posfirst, posend- posfirst + 1);
		str.insert(posfirst, s2);
	}
	
	return (str);
}

static void	forFiles(std :: string	filename, std :: string	s1, std :: string	s2) {
	std :: ifstream infile;
	std :: ofstream outfile;
	std :: string	fileout, str;

	infile.open(filename);
	if (!infile.is_open()) {
		std :: cerr << "Unable to open infile" << std :: endl;
		return ;
	}
	fileout = filename + ".replace";
	outfile.open(fileout, std :: fstream :: trunc);
	if (!outfile.is_open()) {
		std :: cerr << "Unable to open outfile" << std :: endl;
		return ;
	}
	while (!infile.eof()){
		std :: getline(infile, str);
		outfile << replacing(str, s1, s2) << std :: endl;
	}
	infile.close();
	outfile.close();
}

int main(void) {
	std :: string	filename, s1, s2;

	std :: cout << "File: ";
	std :: getline(std :: cin, filename);
	std :: cout << "s1: ";
	std :: getline(std :: cin, s1);
	std :: cout << "s2: ";
	std :: getline(std :: cin, s2);
	

	
	if (filename == "" || s1 == "" || s2 == ""){
		std :: cerr << "Wrong input" << std :: endl; 
		return 1;
	}
	forFiles(filename, s1, s2);
	return 0;
}