int fun(int n) {
    int a, b = 0;
    while (n > 0) {
        a = n % 10;
        b += a * a;
        n = n / 10;
    }
    return b;
}

int isHappy(int n) {
    int slow = n, fast = fun(n);
    
    while (fast != 1 && slow != fast) {
        slow = fun(slow);
        fast = fun(fun(fast)); // move fast pointer twice
    }

    return fast == 1;
}