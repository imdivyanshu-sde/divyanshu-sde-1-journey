import java.util.*;
public class loops {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int j=0;
        for(int i=1;i<=10;i++){
            j=n*i;
          System.out.println(n + " * "+ i+" = "+j);
        }
    }
}
