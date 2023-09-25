#include <Windows.h>
#include <iostream>
 
struct address {
    std::string City;
    std::string Street;
    int HouseNumber;
    int ApartmentNumber;
    int Index;
};
void print(std::string City, std::string Street, int HouseNumber, int ApartmentNumber, int Index) 
{
    std::cout << "Ваш адрес: Город " << City << ", " << "улица " << Street << ", " << "номер дома " << HouseNumber << ", "
        << "номер квартиры " << ApartmentNumber << ", " << "почтовый индекс " << Index;
    }

int main()  
{    
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);    
     
    std::cout << "Введите ваш адрес\n";
    std::cout << "Город: ";
    std::string City;
    std::cin >> City;
    std::cout << "Улица: ";
    std::string Street;
    std::cin >> Street;
    std::cout << "Номер дома: ";
    int HouseNumber;
    std::cin >> HouseNumber;
    std::cout << "Номер квартиры: ";
    int ApartmentNumber;
    std::cin >> ApartmentNumber;
    std::cout << "Почтовый индекс: ";
    int Index;
    std::cin >> Index;

    address address1 = { City, Street, HouseNumber, ApartmentNumber, Index };

    print(City, Street, HouseNumber, ApartmentNumber, Index);
}
