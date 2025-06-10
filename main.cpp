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

    cout << "�п�J�̧C����: ";
    cin >> minPrice;
    cout << "�п�J�̰�����: ";
    cin >> maxPrice;
    cout << "�п�J�B�z������r (�i�d��): ";
    cin.ignore();
    getline(cin, processor);
    cout << "�п�J�̤p�x�s�Ŷ�(GB): ";
    cin >> minStorage;
    cout << "�п�J�̤pRAM(GB): ";
    cin >> minRAM;

    cout << "\n�ŦX���󪺤���p�U:\n\n";
    vector<Phone> filteredPhones = Phone::filterPhones(phones, minPrice, maxPrice, processor, minStorage, minRAM);

    if (filteredPhones.size() < 2) {
        cout << "�ŦX���󪺤��������x�A�L�k�i���ӡC\n";
        return 0;
    }

    for (size_t i = 0; i < filteredPhones.size(); ++i) {
        cout << "[" << i << "] ";
        filteredPhones[i].display();
        cout << "---------------------------\n";
    }

    int index1, index2;
    cout << "�п�J�Ĥ@�x������s��: ";
    cin >> index1;
    cout << "�п�J�ĤG�x������s��: ";
    cin >> index2;

    if (index1 >= 0 && index1 < filteredPhones.size() && index2 >= 0 && index2 < filteredPhones.size()) {
        cout << "\n===== ������ =====\n\n";
        Phone::comparePhones(filteredPhones[index1], filteredPhones[index2]);
    }
    else {
        cout << "��J���s���L�ġC\n";
    }

    return 0;
}

