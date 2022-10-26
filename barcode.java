import java.util.*;
class barCode
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        long p,q,i=1,sum=0,s;
        System.out.println("Enter a real number");
        p=sc.nextLong();
        q=p;
        while(q>0)
        {
            d=q%10;
            sum=sum+s*i;
            i++;
            q/=10;
        }
        System.out.println(sum);
        if(sum%11==0)
        System.out.println("yes, it's a bar code number");
        else
        System.out.println("Not a bar code number");
    }
}
