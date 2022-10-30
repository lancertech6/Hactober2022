public class palindrome {
    public boolean isPalindrome(int x) {
        int y=0;
        int c=x;
        if(x<0)
            return false;
        while(c!=0)
        {
            int d=c%10;
            y=y*10+d;
            c=c/10;
        }
        if(y==x)
           return true;
        else
            return(false);
    }
}
