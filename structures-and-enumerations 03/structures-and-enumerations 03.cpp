﻿#include <Windows.h>
#include <iostream>
 
struct address {
    std::string City;
    std::string Street;
    int HouseNumber;
    int ApartmentNumber;
    int Index;
};
void print(address ad) 
{
        std::cout << "Ваш адрес: Город " << ad.City << ", " << "улица " << ad.Street << ", " << "номер дома " << ad.HouseNumber << ", "
        << "номер квартиры " << ad.ApartmentNumber << ", " << "почтовый индекс " << ad.Index;
    }

int main()  
{    
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);   

    address address1;
     
    std::cout << "Введите ваш адрес\n";
    std::cout << "Город: ";
    std::cin >> address1.City;

    std::cout << "Улица: ";
    std::cin >> address1.Street;

    std::cout << "Номер дома: ";
    std::cin >> address1.HouseNumber;

    std::cout << "Номер квартиры: ";
    std::cin >> address1.ApartmentNumber;

    std::cout << "Почтовый индекс: ";
    std::cin >> address1.Index;

    //print(address1.City, address1.Street, address1.HouseNumber, address1.ApartmentNumber, address1.Index);
    print(address1);

}
