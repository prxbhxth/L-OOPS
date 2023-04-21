#include "iostream"
using namespace std;

class room {
    public:
        int length;
        int breadth;
        int height;

};

int main(){
    room r1;
    r1.length = 10;
    r1.breadth = 20;
    r1.height = 30;

    cout << "Length : " << r1.length << endl;
    cout << "Breadth : " << r1.breadth << endl;
    cout << "Height : " << r1.height << endl;

    return 0;
}