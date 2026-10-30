#include <iostream>
using namespace std;
class Cricketer {
private:
    int runs;
    string name;
    float average;
public:
    Cricketer(string name, int runs, float average) {
        (*this).name = name; // this->name = name;
        this->runs = runs;
        this->average = average;
    }
    void print() { // getter function
        cout << name << endl;
        cout << runs << endl;
        cout << average << endl;
    }
    int getRuns() { // getter
        return runs;
    }
    void setRuns(int runs) { // setter
        this->runs = runs;
    }
};
int main() {
    // private --> can only be accessed within the class

    // Cricketer* c = new Cricketer("Virat Kohli", 14000, 58.1);
    Cricketer c("Virat Kohli", 14000, 58.1);
    // c.name = "King Kohli";
    // cout << c.average << endl;
    // c.runs = 15000; // ERROR --> private
    // c.print();

    // cout << c.runs << endl; // ERROR
    cout << c.getRuns() << endl;
    c.setRuns(15000);
    cout << c.getRuns() << endl;
}