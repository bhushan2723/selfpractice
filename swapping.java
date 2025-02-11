import java.util.*;

public class swapping {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the first number :");
        int a = sc.nextInt();

        System.out.println("enter the second number :");
        int b = sc.nextInt();

        int temp = a;
        a = b;
        b = temp;

        System.out.println("after swapping : a = " + a + ", b = " + b);

    }
}
