
#ifndef PHONE_H
#define PHONE_H
#include <string>
#include <iostream>
#include <vector>

class Phone {
public:
    std::string brand;
    std::string model;
    std::string processor;
    int storageGB;
    int ramGB;
    int price;

    Phone(std::string b, std::string m, std::string p, int s, int r, int pr);
    void display() const;

    static std::vector<Phone> filterPhones(const std::vector<Phone>& phones, int minPrice, int maxPrice,
        const std::string& processor, int minStorage, int minRAM);

    static void comparePhones(const Phone& p1, const Phone& p2);
};

#endif // PHONE_H
