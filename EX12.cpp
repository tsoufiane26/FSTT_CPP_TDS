#include <iostream>
using namespace std;
class call_counter {
public:
    static int call_fois; //conteur des appels
    void call() {
        call_fois = call_fois + 1;
    }
};
int call_counter::call_fois = 0;
int main() {
    call_counter c1, c2, c3, c4;
    c1.call();
    c2.call();
    c3.call();
    c4.call();
    cout <<"La fonction a ete appele :  "<< call_counter::call_fois << " fois." << endl;
    return 0;
}
