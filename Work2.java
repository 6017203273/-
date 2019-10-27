package work;

import java.util.Scanner;
public class Work2 {
	public static void main(String [] args)
	{
		int []a=new int[1010];
		int []b=new int[1010];
		int count=0;
		int i=0;
		Scanner sc=new Scanner(System.in);
		do
		{
			a[i]=sc.nextInt();
			b[i]=sc.nextInt();
			count++;
			i++;
		}while(b[i-1]!=0);
		//
		if(count==1&&b[i]==0)
		{
			System.out.println("0 0");
		}
		else
		{
			for(int j=0;j<i;j++)
			{
				int h=a[j]*b[j];
				if(a[j]==0)
				{
					System.out.print("0 0");
					if((i-1)>j)
						System.out.print(" ");
					continue;
				}
				if((b[j]-1)<0) 
					break;
				System.out.print(h+" "+(b[j]-1));
				if((i-1)>j)
				{
					System.out.print(" ");
				}
				
			}
		}
	}
}
