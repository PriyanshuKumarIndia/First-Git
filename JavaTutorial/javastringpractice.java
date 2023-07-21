import java.util.*;
public class javastringpractice{
    public static void main(String[] args){
        String name=new String();
        Scanner scan=new Scanner(System.in);
        name=scan.nextLine();
        name=name.toLowerCase();
        System.out.println(name);
        scan.close();
    }
}