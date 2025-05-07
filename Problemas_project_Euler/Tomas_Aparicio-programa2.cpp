#include <iostream>
#include <cmath>


bool isprime(long long n);

int main (int argc, char **argv){
    long long N = std::stoll(argv[1]);
    if (N<=1){
        std::cout << "Numero no valido";
        return 0;
    }
/*Lo que hce el bucle es mirar si para un j divisor pequeño del numero N/j que es entero es primo y
 como j arranca en 1 sabemos que el primero que encontremos es el mas grande*/
    for (long long j=1 ; j<N ; ++j){
        if(N % j == 0 and isprime(N/j)){
            std::cout << N/j;
            return 0;
        }
    }
}





bool isprime(long long n) {
    // precondition checks
    // do something if n <= 1
    if (n <= 1) {
        std::cerr << "Out of range number: " << n << "\n";
        return false;
    }

    // suppose it is prime
    bool flag = true; 

    if (n == 2) {
        return true;
    }

    // find divisors
    for (long long ii = 2; ii <= std::sqrt(n) + 1; ii++) {
        if (n%ii == 0) { // ii is divisor
            flag = false;
            break; // end, at least one divisor
        }
    }

    return flag;
}