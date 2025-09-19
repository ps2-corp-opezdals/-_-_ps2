#include <iostream>
using namespace std;

// Fib = (fib-1)+(fib-2)
unsigned long long Fib(unsigned n){
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
        
        return Fib(n-1) + Fib(n-2);    

}


int main(){
    setlocale(LC_ALL,"");
    unsigned long long N;
    cout << "Введи длину ряда: ";
    cin >> N;
    int res = Fib(N);
    cout << res << endl;
    return 0;


}