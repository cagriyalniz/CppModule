/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone_book.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 19:51:19 by cyalniz           #+#    #+#             */
/*   Updated: 2022/09/29 19:51:19 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

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
            return this->name;
        }

        void set_name(std::string name)
        {
            this->name = name;
        }

        std::string get_last_name()
        {
            return this->last_name;
        }

        void set_last_name(std::string last_name)
        {
            this->last_name = last_name;
        }

        std::string get_nick_name()
        {
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

            i = 0;
            if(pb.get_kisi_sayisi() < 8)
                count = pb.get_kisi_sayisi();
            else
                count = 8;
            std::string cname;

            
            while(i < count)
            {
                std::cout<<pb.mc[i].get_id() + 1 <<"-"<< " | " <<  pb.mc[i].get_name()<<
                     " | "<<pb.mc[i].get_last_name()<< " | " << pb.mc[i].get_nick_name()<< 
                     " | " << pb.mc[i].get_number() <<std::endl;
                i++;
            }

            
        }

        void add(PhoneBook& pb, My_Contact& mc, int id)
        {
            
            std::string name;
            std::string last_name;
            std::string nick_name;
            int nmbr;
            std::cout<<"name? ";
            std::cin>>name;
            if(name.empty() == 1)
                std::cout<<"boş bırakma ";
            std::cout<<"last name? ";
            std::cin>>last_name;
            std::cout<<"nick name? ";
            std::cin>>nick_name;
            std::cout<<"number? ";
            std::cin>>nmbr;
            if(pb.get_kisi_sayisi() > 7)
            {
                pb.mc[pb.get_kisi_sayisi()%8].set_name(name);
                pb.mc[pb.get_kisi_sayisi()%8].set_last_name(last_name);
                pb.mc[pb.get_kisi_sayisi()%8].set_nick_name(nick_name);
                pb.mc[pb.get_kisi_sayisi()%8].set_number(nmbr);
                pb.mc[pb.get_kisi_sayisi()%8].set_id(get_kisi_sayisi()%8);                
            }
            else
            {
                pb.mc[pb.get_kisi_sayisi()].set_name(name);
                pb.mc[pb.get_kisi_sayisi()].set_last_name(last_name);
                pb.mc[pb.get_kisi_sayisi()].set_nick_name(nick_name);
                pb.mc[pb.get_kisi_sayisi()].set_number(nmbr);
                pb.mc[pb.get_kisi_sayisi()].set_id(get_kisi_sayisi()%8);
            }


        }

};

int main()
{
    std::cout<<"deneme";

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