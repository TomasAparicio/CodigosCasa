#include <iostream>
#include <cmath>

long Fibonachi(long N);


int main (int argc, char **argv){
    long suma = 0;
    long N = std::stol(argv[1]);
    for (long j=1; j<=N; ++j){
        std::cout << j << " : " << Fibonachi(j) << "\n";
        if (Fibonachi(j)%2 == 1){
            suma += Fibonachi(j);
        }
    }
    std::cout << suma;
}

long Fibonachi(long N){
    long n_2 = 0;
    long n_1 = 1;
    long n = 2;
    if (N == 1) return 1;

    for (long ii=3; ii <= N; ++ii){
        n_2 = n_1;
        n_1 = n;
        n = n_1+n_2;
    }

    return n;
    
}
