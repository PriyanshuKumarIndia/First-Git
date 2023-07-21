import java.util.*;
public class array {
    public static void main(String args[]){
        Scanner scan = new Scanner(System.in);
        System.out.print("Enter the size of the array : ");
        int size=scan.nextInt();
        // scan.close();
        //array1.length for size of the array
        int array1[]=new int[size];
        System.out.println("Enter "+size+" elements :");
        for(int i=0;i<size;i++){
            array1[i]=scan.nextInt();
        }
        for(int i=0;i<size;i++){
            System.out.print(array1[i]+" ");
        }
        scan.close();
    }
}
