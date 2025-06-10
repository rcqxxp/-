#ifndef PHONE_DATA_H
#define PHONE_DATA_H
#include <vector>
#include "Phone.h"
class PhoneData {
public:
    static std::vector<Phone> loadPhones() {
        return {
            Phone("Apple", "iPhone 13", "A15 Bionic", 128, 4, 22000),
            Phone("Apple", "iPhone 14", "A15 Bionic", 128, 6, 25000),
            Phone("Apple", "iPhone 14 Pro", "A16 Bionic", 256, 6, 30000),
            Phone("Apple", "iPhone 15", "A16 Bionic", 128, 6, 27000),
            Phone("Apple", "iPhone 15 Pro", "A17 Pro", 256, 8, 36000),
            Phone("Samsung", "Galaxy S22", "Snapdragon 8 Gen 1", 128, 8, 21000),
            Phone("Samsung", "Galaxy S22 Ultra", "Snapdragon 8 Gen 1", 256, 12, 27000),
            Phone("Samsung", "Galaxy S23", "Snapdragon 8 Gen 2", 256, 8, 25000),
            Phone("Samsung", "Galaxy S23 Ultra", "Snapdragon 8 Gen 2", 512, 12, 33000),
            Phone("Samsung", "Galaxy S24", "Snapdragon 8 Gen 3", 256, 8, 27000),
            Phone("Samsung", "Galaxy S24 Ultra", "Snapdragon 8 Gen 3", 512, 12, 37000),
            Phone("Xiaomi", "Mi 12", "Snapdragon 8 Gen 1", 128, 8, 17000),
            Phone("Xiaomi", "Mi 12 Pro", "Snapdragon 8 Gen 1", 256, 12, 21000),
            Phone("Xiaomi", "Mi 13", "Snapdragon 8 Gen 2", 128, 12, 21000),
            Phone("Xiaomi", "Mi 13 Pro", "Snapdragon 8 Gen 2", 256, 12, 25000),
            Phone("Xiaomi", "Mi 14", "Snapdragon 8 Gen 3", 256, 12, 28000),
            Phone("Xiaomi", "Mi 14 Ultra", "Snapdragon 8 Gen 3", 512, 16, 34000),
            Phone("Apple", "iPhone 16", "A18 Bionic", 128, 8, 29000),
            Phone("Apple", "iPhone 16 Plus", "A18 Bionic", 256, 8, 31000),
            Phone("Apple", "iPhone 16 Pro", "A18 Pro", 256, 8, 37000),
            Phone("Apple", "iPhone 16 Pro Max", "A18 Pro", 512, 8, 40000),
            Phone("Apple", "iPhone 16e", "A18 Pro", 128, 6, 26000),
            Phone("Samsung", "Galaxy Z Fold6", "Snapdragon 8 Gen 3", 512, 12, 54000),
            Phone("Samsung", "Galaxy Z Flip6", "Snapdragon 8 Gen 3", 256, 8, 46000),
            Phone("Samsung", "Galaxy S25", "Snapdragon 8 Gen 4", 256, 8, 31000),
            Phone("Samsung", "Galaxy S25 Ultra", "Snapdragon 8 Gen 4", 512, 12, 39000),
            Phone("Xiaomi", "Xiaomi 15", "Snapdragon 8 Elite", 256, 12, 26000),
            Phone("Xiaomi", "Xiaomi 15 Pro", "Snapdragon 8 Elite", 512, 16, 29000),

        };
    }
};

#endif 

