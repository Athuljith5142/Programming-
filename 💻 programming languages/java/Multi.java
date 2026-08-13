
import java.util.Scanner;
class Multi{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a,limit;
        System.out.println("Enter the number : ");
        a = sc.nextInt();
        System.out.println("Enter the limit : ");
        limit = sc.nextInt();
        int i =1;
        while(i<=limit){
            System.out.println(a+"*"+i+"="+a*i);
            i++;
        }
        sc.close();
    }
}