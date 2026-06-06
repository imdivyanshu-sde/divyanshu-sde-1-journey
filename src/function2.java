import java.util.*;
public class function2 {
public static void gopi(int a,int b) {
    for (int i = a; i >= 1; i--) {
        b *= i;
    }
    System.out.println(b);
}
public static void main(String[] args){
    Scanner sc=new Scanner(System.in);
    int a=sc.nextInt();
    int b=1;
    gopi(a,b);

    }
}
