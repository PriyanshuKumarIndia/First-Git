import java.util.*;
public class oddevenFunctions {
    public static int oddEven (int a){
        if(a%2==0)
        System.out.println(a+" is even");
        else
        System.out.println(a+" is odd");
        return 0;
    }
    
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number to check : ");
        int a = sc.nextInt();
        oddEven(a);
        sc.close();
    }
    
}
