import java.util.*;
public class function3 {
   public static void question(double a,double b) {
       double circle=2*b*a;
       System.out.println(circle);
   }

public static void main(String[] args){
       Scanner sc=new Scanner(System.in);
       System.out.print("enter radius:  ");
       double a=sc.nextDouble();
       double b = 3.14;
    question(a,b);

}
}

