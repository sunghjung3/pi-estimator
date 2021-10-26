#include <iostream>
#include <random>
#include <time.h>
using namespace std;

// this is a just a test (remote)

int main() {
        int attempts=1;
        int tries=0;
        int inside=0;
        double ratio=0;
        srand(time(NULL));

        while (tries < attempts) {
                tries++;
                if (pow(rand()/double(RAND_MAX),2) +
                    pow(rand()/double(RAND_MAX),2) < 1){
                        inside++;
                }
        }

        ratio=4*(double(inside)/double(tries));
        cout << "Final pi estimate from " << attempts
             << " attempts is " << ratio << endl;
}

// this is just a test
