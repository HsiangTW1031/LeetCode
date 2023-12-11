bool isPalindrome(long int x)
{
    long int rem=0, sum=0, num=x;
    if(x < 0)
    return false;
    while(x!= 0)
    {
        rem = x%10;
        sum = sum*10 + rem;
        x /= 10;
    }
    if(sum != num)
    return false;
    else
    return true;
}