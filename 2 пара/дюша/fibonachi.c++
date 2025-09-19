#include <iostream>
using namespace std;

void recursiveFunction(int vod, int nexnt = 1, int past = 0, int counter = 0) {
    if(vod == counter){
        cout << nexnt << endl;
        return;
    }
    cout << nexnt;
    int _per = nexnt;
    nexnt = nexnt + past;
    past = _per;
    recursiveFunction(vod, nexnt, past, counter + 1);
}

int main() {
    recursiveFunction(5);
    return 0;
}        