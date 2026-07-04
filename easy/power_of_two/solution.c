int power(int n)
{
    if(n==1)
      return n;
    else if(n%2==0)
      return power(n/2);
    else return -1;
}
bool isPowerOfTwo(int n) {
    if(n==0)
      return false;
    else if(n==1 || power(n)==1)
      return true;
    return false;
}