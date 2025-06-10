#include "Phone.h"
#include <iomanip>
using namespace std;

Phone::Phone(string b, string m, string p, int s, int r, int pr)
    : brand(b), model(m), processor(p), storageGB(s), ramGB(r), price(pr) {
}

void Phone::display() const {
    cout << brand << " " << model << "\n"
        << "  處理器: " << processor << "\n"
        << "  儲存空間: " << storageGB << "GB\n"
        << "  RAM: " << ramGB << "GB\n"
        << "  價格: $" << price << "\n";
}

vector<Phone> Phone::filterPhones(const vector<Phone>& phones, int minPrice, int maxPrice,
    const string& processor, int minStorage, int minRAM) {
    vector<Phone> result;
    for (const auto& phone : phones) {
        if (phone.price >= minPrice && phone.price <= maxPrice &&
            (processor.empty() || phone.processor.find(processor) != string::npos) &&
            phone.storageGB >= minStorage && phone.ramGB >= minRAM) {
            result.push_back(phone);
        }
    }
    return result;
}

void Phone::comparePhones(const Phone& p1, const Phone& p2) {
    cout << setw(20) << "項目" << " | "
        << setw(25) << (p1.brand + " " + p1.model) << " | "
        << setw(25) << (p2.brand + " " + p2.model) << "\n";
    cout << string(80, '-') << "\n";

    cout << setw(20) << "處理器" << " | "
        << setw(25) << p1.processor << " | "
        << setw(25) << p2.processor << "\n";

    cout << setw(20) << "儲存空間(GB)" << " | "
        << setw(25) << p1.storageGB << " | "
        << setw(25) << p2.storageGB << "\n";

    cout << setw(20) << "RAM(GB)" << " | "
        << setw(25) << p1.ramGB << " | "
        << setw(25) << p2.ramGB << "\n";

    cout << setw(20) << "價格" << " | "
        << setw(25) << "$" + to_string(p1.price) << " | "
        << setw(25) << "$" + to_string(p2.price) << "\n";
}


