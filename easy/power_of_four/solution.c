int power(int n)
{
    if(n==1)
      return n;
    else if(n%4==0)
      return power(n/4);
    else return -1;
}
bool isPowerOfFour(int n) {
    if(n==0)
      return false;
    else if(n==1 || power(n)==1)
      return true;
    return false;
}