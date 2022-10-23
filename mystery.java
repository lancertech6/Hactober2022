import java.util.*;
class mystery
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int n,m,n1,d,sum=0,sum1=0;
        System.out.println("Enter a number");
        n=sc.nextInt();
        m=n;
        while(m>0)
        {
            d=m%10;
            sum=sum*10+d;
            sum1=sum1+d;
            m/=10;
        }
        if((sum1*11)==(sum+n))
        System.out.println("Mystery number");
        else
        System.out.println("Not a mystery number");
    }
}
            