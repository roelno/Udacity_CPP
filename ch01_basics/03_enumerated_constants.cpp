#include "iostream"

using namespace std;

int main() {
    enum MONTH {Jan, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec};
    MONTH bestMonth = Sep;
    if (bestMonth == Sep) {
        cout << "I am not so sure September is the best month.\n";
    }
    return 0;
}