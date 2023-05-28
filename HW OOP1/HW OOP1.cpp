// HW OOP1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>
#include <iterator>
#include <string>

class Drob {
private:
    int _a;
    int _b;
public:
    Drob(int a, int b) {
        _a = a;
        _b = b;
    }
    void Sum(int a, int b) {
        std::cout<<"Sum of two numbers is "<< a + b<<std::endl;
    }
    void  dev(int a, int b) {
        std::cout << "Devision of two numbers is " << a / b << std::endl;
    }
    void dif(int a, int b) {
        std::cout << "Difference of two numbers is " << a - b << std::endl;
    }
    void mult(int a, int b) {
        std::cout << "The result of multiply of two numbers is " << a*b << std::endl;
    }
};

class MobileBook {
private:
    std::string _FIO;
    long _number;
    long _WorkNumber;
    std::string _addinf;
public:
    MobileBook(std::string c, long x, long y, std::string g) {
        _FIO = new char[c.length()];
        for (int i = 0; i < c.length(); i++)
            _FIO[i] = c[i];
        _number = x;
        _WorkNumber = y;
        _addinf = g;
    }
    void ShowBook() {
        std::cout << "Name: " << _FIO << std::endl;
        std::cout << "Private phone number: " << _number << std::endl;
        std::cout << "Work phone number: " << _WorkNumber << std::endl;
        std::cout << "Additional information: " << _addinf << std::endl;
    }
};

class members {
private:
    std::vector<MobileBook*>_mobileBook;
public:
    void AddMember(MobileBook*member){
       
        _mobileBook.push_back(member);
    }
    void ShowMember() {
        std::vector<MobileBook*>::iterator it;
        for (it = _mobileBook.begin(); it != _mobileBook.end(); it++)
            (*it)->ShowBook();
    }
    void ChangeMember(int index) {
        if (index > _mobileBook.size())
            return;
        _mobileBook.at(index)->ShowBook();
    }

};


int main()
{
    //Задача 1.
    /*int a, b;
    std::cout << "Enter first number:\n";
    std::cin >> a;
    std::cout << "Enter second number:\n";
    std::cin >> b;
    Drob d1(a, b);
    d1.Sum(a, b);
    d1.dev(a, b);
    d1.dif(a, b);
    d1.mult(a, b);*/

    //Задача 2.

    members* member = new members();
    MobileBook* user1 = new MobileBook("Adalin Fias", 789456, 745236, "Friend");
    MobileBook* user2 = new MobileBook("Fred Asmanovski", 859623, 123456, "Collegue");
    MobileBook* user3 = new MobileBook("Lukas Fiero", 456789, 123896, "Buddy");
    MobileBook* user4 = new MobileBook("Gustav Poklevski", 741258, 568963, "Loader");

    member->AddMember(user1);
    member->AddMember(user2);
    member->AddMember(user3);
    member->AddMember(user4);

    member->ShowMember();
    member->ChangeMember(4);
   


    return 0;
}


