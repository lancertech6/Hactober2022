public class MaximumValueAfterInsertion {

    public String maxValue(String n, int x) 
    {
        boolean isNegative=false;
        if(n.charAt(0)=='-')
        {
            isNegative=true;
            n=n.substring(1);
        }
        int l=n.length();
        for(int i=0;i<l;i++)
        {
            int ch=n.charAt(i)-'0';
            if(!isNegative && ch<x || isNegative && ch>x) 
			return (isNegative? "-": "") + n.substring(0, i) + x + n.substring(i);
        }
        return (isNegative? "-": "") + n + x;
    }
}
