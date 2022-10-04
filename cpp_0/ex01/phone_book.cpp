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



        void check_str(std::string* data, std::string type){
            
                std::cout<<type<<" ?"<<std::endl;
                //std::getline(std::cin, *data);
                std::cin>>*data;
   /*              if(data->length() == 0){
                    std::cout<<"empty data!"<<std::endl;
                    return 0;
                }
                return 1; */
            
        }

        int ft_nmbr_len(int nmbr){
            int len;
            len = 0;
            if(nmbr == 0)
                return 1;
            while(nmbr > 0){
                len++;
                nmbr /= 10;
            }
            return (len);
        }

        int check_nmbr(int data, std::string type){
            
                std::cout<<type<<" ?"<<std::endl;
                std::cin>>data;
                if(ft_nmbr_len(data) == 0){
                    std::cout<<"empty data!"<<std::endl;
                    return (0);
                }
                return (1);
        }

        void add(PhoneBook& pb, My_Contact& mc, int id)
        {
            
            
            std::string name = "test";
            std::string last_name;
            std::string nick_name;
            std::string secret;
            int nmbr = 0;
            check_str(&name, "name");
     
            check_str(&last_name, "last name");
            check_str(&nick_name, "nick name");
            check_nmbr(nmbr, "number");
            check_str(&secret, "secret");
                
            
            
            
            
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