int numWaterBottles(int numBottles, int numExchange) {
    int total_drunk = numBottles; 
    int emptyBottles = numBottles; 
    while (emptyBottles >= numExchange) {
        int new_full_bottles = emptyBottles / numExchange;
        total_drunk += new_full_bottles;
        emptyBottles = emptyBottles % numExchange + new_full_bottles;
    }

    return total_drunk;
}