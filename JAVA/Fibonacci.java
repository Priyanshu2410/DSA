import java.util.*;
public class Fibonacci {
     static public void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n1 = 0;
        int n2 = 1;
        System.out.println("enter the number of terms");
        int n=sc.nextInt();
        System.out.println(n1);
        while (n2 < n) {
            System.out.println(n2);
            n2 = n1 + n2;
            n1 = n2 - n1;
        }
        sc.close();
    }
}
