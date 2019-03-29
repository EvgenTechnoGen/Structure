#include <iostream>

using namespace std;

struct Date {
    int year;
};


struct Auto {
    int wheels;
    float speed;
    char color;
    
    Date sozdanie;
};

int main(int argc, const char * argv[]) {
    
    Auto shkoda;
    shkoda.color = 'r';
    shkoda.speed = 315.23;
    shkoda.wheels = 4;
    shkoda.sozdanie.year = 1999;
    
    Auto audi = {4, 300.23, 'b'};
    
    cout << "Audi speed = " << audi.speed << "\n" << "Shcoda year = " << shkoda.sozdanie.year << endl;
    
    cin.get();
    return 0;
}