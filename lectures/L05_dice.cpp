#include <bits/stdc++.h>
using namespace std;
class dice {
private:
    int value;
public:
    void roll() {
        value = rand() % 6 + 1;
        cout << "Dice shows: " << value << endl;
    }
};
int main() {
    srand(time(0));
    dice d;
    d.roll();

    return 0;
}
