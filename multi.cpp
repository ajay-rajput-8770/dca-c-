#include <iostream>
#include <thread>
using namespace std;

void task1() {
    for(int i=1; i<=5; i++) {
        cout << "Task 1 running: " << i << endl;
    }
}

void task2() {
    for(int i=1; i<=5; i++) {
        cout << "Task 2 running: " << i << endl;
    }
}

int main() {
    thread t1(task1); // thread 1 start
    thread t2(task2); // thread 2 start

    t1.join(); // wait for t1
    t2.join(); // wait for t2

    cout << "Main thread finished" << endl;
    return 0;
}
