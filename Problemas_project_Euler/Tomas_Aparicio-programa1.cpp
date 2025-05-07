#include <iostream>
#include <cmath>


//Declaracion
bool isprime(long long n);

int main (int argc, char **argv){
    long long suma = 0;
    long long N = std::stoll(argv[1]);//Asignamos el numero hasta el cual sumamos

    if (N >= 2) suma += 2; // Aseguramos incluir 2 si esta en el rango

    for(long ii=3 ; ii<=N ; ii += 2){
        if (isprime(ii)){
            //Miramos si el numero es primo, si lo sumamos al acumulado
            suma += ii;
        }
    }

    std::cout << suma;

    return 0;
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