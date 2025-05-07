#include <iostream>
#include <cmath>

int sum_squares (int n);
int square_sum (int n);

int main (int argc, char **argv){
    int N = std::stoi(argv[1]);
    std::cout << square_sum(N) - sum_squares(N) << std::endl; 
}

int sum_squares (int n){
    int sum = 0;
    for (int i = 1; i <= n; ++i){
        sum += i*i;
    }
    return sum;
}

int square_sum (int n){
    int sum = 0;
    for (int i = 1; i <= n; ++i){
        sum += i;
    }
    return sum * sum;
}
