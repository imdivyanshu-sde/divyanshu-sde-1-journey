import java.util.Scanner;

public class CountNumbers {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int positive = 0, negative = 0, zero = 0;
        char choice;

        do {
            System.out.print("Enter a number: ");
            int num = sc.nextInt();

            if (num > 0) {
                positive++;
            } else if (num < 0) {
                negative++;
            } else {
                zero++;
            }

            System.out.print("Do you want to enter more? (y/n): ");
            choice = sc.next().charAt(0);

        } while (choice == 'y' || choice == 'Y');

        System.out.println("\nPositive count: " + positive);
        System.out.println("Negative count: " + negative);
        System.out.println("Zero count: " + zero);
    }
}
