package program;

import java.util.Arrays;
import java.util.Scanner;

public class StringRotation {
	static String leftrotate(String str, int d)
	{
		String ans = str.substring(d)+str.substring(0, d);
		return ans;
	}
	static String rightrotate(String str,int d,int len)
	{
		String ans = str.substring(len-d)+str.substring(0,len-d);
		return ans;
	}
	static boolean areAnagram(char[] str1, char[] str2)
	{
		int n1 = str1.length;
		int n2 = str2.length;
		if(n1 != n2)
				return false;
	   Arrays.sort(str1);
	   Arrays.sort(str2);
	   for(int i=0;i<n1;i++)
	   {
		   if(str1[i] != str2[i])
		   {
			   return false;
		   }
	   }
	   return true;
	}

	public static void main(String args[])
	{
		Scanner sc = new Scanner(System.in);
		String a = sc.nextLine();
		int n = sc.nextInt();
		int len=a.length();
		String temp = new String(a);
		System.out.println(temp);
		char d[] = new char[n];
		int r[] = new int[n];
		String str = "";
		for(int i=0;i<n;i++)
		{
			d[i] = sc.next().charAt(0);
			r[i] = sc.nextInt();
		}
//		for(int i=0;i<n;i++)
//		{
//			System.out.print(d[i]+" "+r[i]+" ");
//		}
		
		for(int i=0;i<n;i++)
		{
			if(d[i] == 'L')
			{
				a = leftrotate(a,r[i]);
				System.out.println(a);
				str = str+a.charAt(0);
				System.out.println(str);
			}
			if(d[i] == 'R')
			{
				a = rightrotate(a,r[i],len);
				System.out.println(a);
				str = str+a.charAt(0);
				System.out.println(str);
			}
			
		}
		a = temp;
		System.out.println("a = "+a+" "+" temp= "+temp);
		boolean is_true = false;
		char str1[] = str.toCharArray();
		for(int i=0;i<=a.length()-str.length();i++)
		{
			String s = a.substring(i,str.length()+i);
			System.out.println("s = "+s);
			System.out.println("STR ="+str);
			char str2[] = s.toCharArray();
			if(areAnagram(str1,str2))
			{
				is_true = true;
				break;
			}
		}
		if(is_true)
				System.out.println("YES");
		else
			System.out.println("NO");
		
		
	}
}
