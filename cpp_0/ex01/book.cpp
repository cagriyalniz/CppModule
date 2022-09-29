/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   book.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 19:51:09 by cyalniz           #+#    #+#             */
/*   Updated: 2022/09/29 19:51:10 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class My_Contact{
    public:
        std::string name;
        std::string last_name;
        std::string nick_name;
        int         number;
        int         id = 0;
        My_Contact(std::string name, std::string last_name, std::string nick_name, int number){
            this->name = name;
            this->last_name = last_name;
            this->nick_name = nick_name;
            this->number = number;
            this->id++;
            if(this->id == 8)
                this->id = 0;
        }
        My_Contact(){

        }

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



};

class PhoneBook : public My_Contact
{
    public:
        My_Contact  cntct[8];
        int         kisi_sayisi = 0;
        PhoneBook(My_Contact cntct){
            *this->cntct = cntct;
        }
        PhoneBook(std::string name, std::string last_name, std::string nick_name, int number): My_Contact(name, last_name, nick_name, number)
        {
            this->name = name;
            this->last_name = last_name;
            this->nick_name = nick_name;
            this->number = number;
            this->kisi_sayisi++;
            
        }

        void search(PhoneBook pb)
        {
            
        }

        void add(PhoneBook pb)
        {
            
        }

        int get_kisi_sayisi()
        {
            return this->kisi_sayisi;
        }

        void set_kisi_sayisi(int nmb)
        {
            this->kisi_sayisi = nmb;
        }



};

int main()
{
    
    PhoneBook pb("cagriy", "yalniz", "cyalniz", 123);


    pb.cntct[0].set_name("0");
    pb.cntct[1].set_name("1");
    pb.cntct[2].set_name("2");
    pb.cntct[3].set_name("3");
    pb.cntct[4].set_name("4");
    pb.cntct[5].set_name("5");
    pb.cntct[6].set_name("6");
    pb.cntct[7].set_name("7");

    std::cout<<pb.cntct[0].get_name();
    std::cout<<pb.cntct[1].get_name();
    std::cout<<pb.cntct[2].get_name();
    std::cout<<pb.cntct[3].get_name();
    std::cout<<pb.cntct[4].get_name();
    std::cout<<pb.cntct[5].get_name();
    std::cout<<pb.cntct[6].get_name();
    std::cout<<pb.cntct[7].get_name();
//  std::cout<<pb.cntct[8].get_name();
    std::cout<<"\n"<<pb.get_kisi_sayisi();



   /*  PhoneBook pb2("cagriy", "yalniz", "cyalniz", 123);
    pb2.cntct->set_name("\n22 ");
    std::cout<<pb2.cntct->get_name();
    std::cout<< "id: "<<pb2.cntct->get_id() << "\n";

    PhoneBook pb3("cagriy", "yalniz", "cyalniz", 123);
    pb3.cntct->set_name("\n33 ");
    std::cout<<pb3.cntct->get_name();
    
    PhoneBook pb4("cagriy", "yalniz", "cyalniz", 123);
    pb4.cntct->set_name("\n44");
    std::cout<<pb4.cntct->get_name();

    PhoneBook pb5("cagriy", "yalniz", "cyalniz", 123);
    pb5.cntct->set_name("\n55");
    std::cout<<pb5.cntct->get_name();

    PhoneBook pb6("cagriy", "yalniz", "cyalniz", 123);
    pb6.cntct->set_name("\n66");
    std::cout<<pb6.cntct->get_name();

    PhoneBook pb7("cagriy", "yalniz", "cyalniz", 123);
    pb7.cntct->set_name("\n77");
    std::cout<<pb7.cntct->get_name();

    PhoneBook pb8("cagriy", "yalniz", "cyalniz", 123);
    pb8.cntct->set_name("\n88");
    std::cout<<pb8.cntct->get_name();

    PhoneBook pb9("cagriy", "yalniz", "cyalniz", 123);
    pb9.cntct->set_name("\n99");
    std::cout<<pb9.cntct->get_name();

    PhoneBook pb10("cagriy", "yalniz", "cyalniz", 123);
    pb10.cntct->set_name("\n1010");
    std::cout<<pb10.cntct->get_name();

    std::cout<<"\n"<<pb10.get_kisi_sayisi();
 */

/*     My_Contact cn(NULL, NULL, NULL), cn2(NULL, NULL, NULL);
    cn.name = "cagri";
    cn.last_name = "yalniz";
    cn.number = 1;

    cn2.name = "c2";
    cn2.last_name = "y2";
    cn2.number = 2;

    std::cout<< cn.name;
    std::cout<<cn2.name; */
}