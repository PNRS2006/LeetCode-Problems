char* triangleType(int* num, int s) {
   if((num[0]+num[1])<=num[2] || (num[1]+num[2])<=num[0] || (num[2]+num[0])<=num[1])
   {
    return "none";
   }
   else 
   {
        if(num[0]==num[1]&&num[1]==num[2]&&num[2]==num[0])
    {
        return "equilateral";
    }    
    else if((num[0]==num[1]&&num[0]!=num[2]) ||(num[1]==num[2] && num[1]!=num[0]) || num[0]==num[2] && num[0]!=num[1] )
    {
        return "isosceles";
    }
    else 
    {
        return "scalene";
    }
   }
}