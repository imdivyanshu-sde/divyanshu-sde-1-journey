import java.util.*;
public class Arraypractice {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int rows= sc.nextInt();
        int columns=sc.nextInt();
        int[][]matrix=new int[rows][columns];
        for(int i=0;i<rows;i++){
            for(int j=0;j<columns;j++){
                matrix[i][j]=sc.nextInt();
            }
        }
        int x=sc.nextInt();
        for(int i=0;i<rows;i++) {
            for (int j = 0; j < columns; j++) {
                if(matrix[i][j]==x){
                    System.out.println("the value "+ x +" is in index "+i+","+j);
                }
            }
        }
    }
}
