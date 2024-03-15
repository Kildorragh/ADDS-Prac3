#include "Truckloads.h"
#include <iostream>
#include <cmath>

int Truckloads::numTrucks(int items, int capacity){
    //base case - if number of items <= capacity, return 1
    if (items <= capacity){
        return 1; //return capacity of 1
    } else {
        int pile1 = items/2; //halve the pile
            int pile1index = numTrucks(pile1, capacity);
        int pile2 = items-pile1; //make pile2 the remainder after pile1 is removed
            int pile2index = numTrucks(pile2, capacity);
        return pile1index + pile2index;
    };
};


/*

Take 20 crates, and 5 load cap

Halving index = 1

Is 5 cap/20 crates less than 1? No, so halve it

Now halving index = 0.5

Is 5/10 less than 1? No, so halve it

Now halving index = 0.25

Is 5/5 less than 1? Yes

1/halving index = 4 = trucks needed

*/

/* what if odd eg 14 4

is 4/14 less than 1? yes, so halve it

0.5

is 4/7 less than 1? Yes

Is it odd? Yes

Halve it, then create two subindexes and continue recursion. one is minus half, one is plus half



*/