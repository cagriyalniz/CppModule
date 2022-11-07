/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone_book.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 19:51:19 by cyalniz           #+#    #+#             */
/*   Updated: 2022/10/04 22:05:03 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phoneBook.hpp"
#include <iomanip>
class My_Contact{
    public:
        std::string name;
        std::string last_name;
        std::string nick_name;
        std::string secret;
        int         number;
        int         id;

    public:
        std::string get_name()
        {
            if(this->name.length() > 10)
                return (this->name.substr(0, 9) + ".");
            return this->name;
        }

        void set_name(std::string name)
        {
            this->name = name;
        }

        std::string get_last_name()
        {
            if(this->last_name.length() > 10)
                return (this->last_name.substr(0, 9) + ".");
            return this->last_name;
        }

        void set_last_name(std::string last_name)
        {
            this->last_name = last_name;
        }

        std::string get_nick_name()
        {
            if(this->nick_name.length() > 10)
                return (this->nick_name.substr(0, 9) + ".");
            return this->nick_name;
        }

        void set_nick_name(std::string nick_name)
        {
            this->nick_name = nick_name;
        }

        int get_number()
        {
            return this->number;
        }

        void set_number(int number)
        {
            this->number = number;
        }

        int get_id()
        {
            return this->id;
        }

        void set_id(int id)
        {
            this->id = id;
        }

        std::string get_secret()
        {
            if(this->secret.length() > 10)
                return (this->secret.substr(0, 9) + ".");           
            return this->secret;
        }

        void set_secret(std::string secret)
        {
            this->secret = secret;
        }




};


class PhoneBook
{
    public:
        
        int  kisi_sayisi;
        My_Contact  mc[21474];

        int get_kisi_sayisi()
        {
            return this->kisi_sayisi;
        }

        void set_kisi_sayisi(int nmb)
        {
            this->kisi_sayisi = nmb;
        }


        void search(PhoneBook& pb)
        {
            int count;
            int i;
            int choosen;

            i = 0;
            if(pb.get_kisi_sayisi() < 8)
                count = pb.get_kisi_sayisi();
            else
                count = 8;
            std::string cname;

            
            while(i < count)
            {
                std::cout<<pb.mc[i].get_id() + 1 <<"-"<< 
                "|"<< std::setw(10) <<  pb.mc[i].get_name()<<
                "|"<< std::setw(10)<<pb.mc[i].get_last_name()<<
                "|"<< std::setw(10) << pb.mc[i].get_nick_name()<< 
                "|"<< std::setw(10) << pb.mc[i].get_number() <<std::endl;
                i++;
            }
            std::cout<<"choose a person: "<<std::endl;
            std::cin>>choosen;
            show_details(choosen, pb);

            
        }

        void show_details(int i, PhoneBook &pb){
            std::cout<<pb.mc[i - 1].get_id() + 1 <<"-"<< 
                     "|" << std::setw(10) <<  pb.mc[i - 1].get_name()<<
                     "|" << std::setw(10)<<pb.mc[i - 1].get_last_name()<< 
                     "|"<< std::setw(10) << pb.mc[i -1].get_nick_name()<< 
                     "|" << std::setw(10)<< pb.mc[i - 1].get_number() <<std::endl;
        }


        void add(PhoneBook& pb, My_Contact& mc, int id)
        {
            
            
            std::string name;
            std::string last_name;
            std::string nick_name;
            std::string secret;
            int nmbr;
            std::cout<<"name ?"<<std::endl;
            std::cin>>name;
            std::cout<<"last name ?"<<std::endl;
            std::cin>>last_name;
            std::cout<<"nick name ?"<<std::endl;
            std::cin>>nick_name;
            std::cout<<"secret ?"<<std::endl;
            std::cin>>secret;
            std::cout<<"number ?"<<std::endl;
            std::cin>>nmbr;
            
            
            if(pb.get_kisi_sayisi() > 7)
            {
                pb.mc[pb.get_kisi_sayisi()%8].set_name(name);
                pb.mc[pb.get_kisi_sayisi()%8].set_last_name(last_name);
                pb.mc[pb.get_kisi_sayisi()%8].set_nick_name(nick_name);
                pb.mc[pb.get_kisi_sayisi()%8].set_number(nmbr);
                pb.mc[pb.get_kisi_sayisi()%8].set_id(get_kisi_sayisi()%8);                
                pb.mc[pb.get_kisi_sayisi()%8].set_secret(secret);                
            }
            else
            {
                pb.mc[pb.get_kisi_sayisi()].set_name(name);
                pb.mc[pb.get_kisi_sayisi()].set_last_name(last_name);
                pb.mc[pb.get_kisi_sayisi()].set_nick_name(nick_name);
                pb.mc[pb.get_kisi_sayisi()].set_number(nmbr);
                pb.mc[pb.get_kisi_sayisi()].set_id(get_kisi_sayisi()%8);
                pb.mc[pb.get_kisi_sayisi()%8].set_secret(secret); 
            }


        }

};

int main()
{
    PhoneBook pb;
    int a = 1;
    
    std::string cmd;
    pb.set_kisi_sayisi(0);
    while(a)
    {
        std::cout<<"\n---ADD || SEARCH || EXIT---\n";
        std::cin>>cmd;
        if(cmd == "EXIT")
            a = 0;
        else if(cmd == "ADD")
        {
            pb.add(pb, pb.mc[pb.get_kisi_sayisi()%8], pb.get_kisi_sayisi()%8);
            pb.set_kisi_sayisi(pb.get_kisi_sayisi() + 1);
        }
        else if(cmd == "SEARCH")
        {
            
            pb.search(pb);
        }
        else
            std::cout<<"Wrong Command";
        
    }

}