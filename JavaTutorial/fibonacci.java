import java.util.*;
public class fibonacci {
    public static void main(String args[]){
        int i,temp=0,first=0,second=1,sum=0;
        System.out.println("Enter the number : ");
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
        sc.close();
        System.out.println("Here is the sequence");
        for(i=0;i<num;i++){
            sum+=first;
            System.out.print(first+" ");
            temp=first+second;
            second=first;
            first=temp;
        }
        System.out.println("\nSum is \n"+sum);
    }
}
