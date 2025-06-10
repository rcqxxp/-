#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include "Phone.h"
#include "phone_data.h"

using namespace std;

int main() {
    vector<Phone> phones = PhoneData::loadPhones();

    int minPrice, maxPrice, minStorage, minRAM;
    string processor;

    cout << "請輸入最低價格: ";
    cin >> minPrice;
    cout << "請輸入最高價格: ";
    cin >> maxPrice;
    cout << "請輸入處理器關鍵字 (可留空): ";
    cin.ignore();
    getline(cin, processor);
    cout << "請輸入最小儲存空間(GB): ";
    cin >> minStorage;
    cout << "請輸入最小RAM(GB): ";
    cin >> minRAM;

    cout << "\n符合條件的手機如下:\n\n";
    vector<Phone> filteredPhones = Phone::filterPhones(phones, minPrice, maxPrice, processor, minStorage, minRAM);

    if (filteredPhones.size() < 2) {
        cout << "符合條件的手機不足兩台，無法進行對照。\n";
        return 0;
    }

    for (size_t i = 0; i < filteredPhones.size(); ++i) {
        cout << "[" << i << "] ";
        filteredPhones[i].display();
        cout << "---------------------------\n";
    }

    int index1, index2;
    cout << "請輸入第一台手機的編號: ";
    cin >> index1;
    cout << "請輸入第二台手機的編號: ";
    cin >> index2;

    if (index1 >= 0 && index1 < filteredPhones.size() && index2 >= 0 && index2 < filteredPhones.size()) {
        cout << "\n===== 手機對照 =====\n\n";
        Phone::comparePhones(filteredPhones[index1], filteredPhones[index2]);
    }
    else {
        cout << "輸入的編號無效。\n";
    }

    return 0;
}

