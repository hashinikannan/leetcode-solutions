bool isPalindrome(int x)
 {
    if (x<0)
    {
        return false;
    }
    double rev=0,rem,o;
    o=x;
    
    while(x>0)
    {
        rem=x%10;
        rev=rev*10+rem;
        x=x/10;
    }
    if(o==rev)
        return true;

    else{
        return false;
    }
return 0;
}
