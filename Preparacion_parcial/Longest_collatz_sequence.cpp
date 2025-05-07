#include <iostream>
#include <cmath>

int collatz_long (int n);

int main (int argc, char **argv){
    int N = std::stoi(argv[1]);
    int N_sug = 0;
    int Max_step = 0;

    if (N < 1) std::cout << "No tiene sentido preguntar por la longitud de Collatz para numeros menores a 1";
    
    for (int i = 1; i <=N; ++i){
        if (collatz_long (i) > Max_step){
            Max_step = collatz_long(i);
            N_sug = i;
        }
    }
    std::cout << N_sug << std::endl;
    return 0;
}

int collatz_long (int n){
    int step = 1;
    while (n != 1){
        if (n%2 == 0){
            n = n/2;
            ++step;
        }else {
            n = 3 * n + 1;
            ++step;
        }
    }
    return step;
}