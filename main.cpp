#include <iostream>
#include <string>

using namespace std;

class SomeData {
public:
SomeData() {
        num = 10;
}
SomeData(int a) {
        num = a;
}
void printSomeData() {
        cout << num << endl;
}
int returnData() {
        return num;
}

private:
int num;
int numTwo;
};

int main() {

        SomeData data(5);
        data.printSomeData();
        int aData = data.returnData() + data.returnData();
        cout << aData << endl;
        return 0;
}
