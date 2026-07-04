int numberOfSteps(int num) {
    int b=0;
    while(num>0)
    {
        if(num%2!=0)
        {
            num=num-1;
            b++;
        }
        else
        {
            num=num/2;
            b++;
        }
    }
    return b;
}