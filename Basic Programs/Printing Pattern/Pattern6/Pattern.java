Pattern6:   1
            21
            321
            4321
            54321
  
Code:

import java.util.*;
public class Main
{
	public static void main(String[] args) {
		System.out.print("Enter n: ");
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		for(int rows=1; rows<=n; rows++)
		{
		    for(int col=rows; col>=1; col--)
		    {
		        System.out.print(col);
		    }
		    System.out.println("");
		}
	}
}
