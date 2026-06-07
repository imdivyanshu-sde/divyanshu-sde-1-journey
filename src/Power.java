import java.util.Scanner;

public class Power {

    static int power(int x, int n) {
        int result = 1;
        for (int i = 1; i <= n; i++) {
            result = result * x;
        }
        return result;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter base (x): ");
        int x = sc.nextInt();

        System.out.print("Enter exponent (n): ");
        int n = sc.nextInt();

        System.out.println(x + " to the power " + n + " = " + power(x, n));
    }
}