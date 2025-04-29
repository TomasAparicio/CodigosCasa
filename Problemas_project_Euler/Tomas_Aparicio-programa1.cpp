#include <iostream>
#include <cmath>


//Declaracion
bool isprime(long n);

int main (int argc, char **argv){
    long suma = 0;
    long N = std::stol(argv[1]);//Asignamos el numero hasta el cual sumamos


    for(long ii=2 ; ii<=N ; ++ii){
        if (isprime(ii)==true){
            //Miramos si el numero es primo, si lo sumamos al acumulado
            suma += ii;
            if (suma < 0){ //El programa detecta cuando el valor de la suma se vuelve negativo para su trabajo
                std::cout << "Error: Overflow, la suma de los numeros es un numero mayor al formato long";
                return 0;
            }
        }
    }

    std::cout << suma;

    return 0;
}


bool isprime(long n) {
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
    for (long ii = 2; ii <= std::sqrt(n) + 1; ii++) {
        if (n%ii == 0) { // ii is divisor
            flag = false;
            break; // end, at least one divisor
        }
    }

    return flag;
}