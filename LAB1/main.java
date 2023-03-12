import java.io.*;
import java.util.Scanner;

public class hw1 {
    public static void main(String[] args) {
        double a, b, c, s, area;
        Scanner scanner = new Scanner(System.in);
        while(true) {
        	System.out.println("Please enter 3 triangle sides:");
        	a = scanner.nextDouble();
        	b = scanner.nextDouble();
        	c = scanner.nextDouble();
		if (a==-1 && b==-1 && c==-1)
			break;
		if (a<=0 || b<=0 || c<=0) {
			System.out.println("The input is not legal");
			continue;
		}
		else if ((a+b)<c || (a+c)<b || (b+c)<a){
			System.out.println("The input is not legal");
			continue;
		}
		s = (a + b + c)/2;
		area = Math.sqrt(s * (s-a) * (s-b) * (s-c));
		System.out.println("The area of this triangle is:" + area);
	}
    }
}
