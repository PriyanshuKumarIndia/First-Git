import java.util.*;

public class averageFunction {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int first, second, third;
        float avg;
        System.out.println("Enter three numbers : ");
        first = sc.nextInt();
        second = sc.nextInt();
        third = sc.nextInt();
        avg = (float) average(first, second, third);
        System.out.println("Average= " + avg);
        sc.close();
    }

    public static float average(int first, int second, int third) {
        return (float) (first + second + third) / 3;
    }
}
