// 5. Write a java program to create a single dimensional array and input the 
// values into the array by the user. Print the values stored in the array along 
// with the sum of Odd and Even numbers 

import java.util.*;
public class p1 {
    public static void main(String[] args) {
      int a;
      Scanner sc = new Scanner(System.in);
      System.out.println("Enter The no : ");
      a = sc.nextInt();
      int arr[] = new int[a];
      for(int i=0;i<a;i++){
        arr[i]=sc.nextInt();
      }
      int even=0,odd=0;
      System.out.println("Elements are : ");
      for(int i=0;i<a;i++){
         if(arr[i]%2==0){
          even+=arr[i];
        }else{
          odd+=arr[i];
        }
        System.out.println(arr[i]);
      }
      System.out.println("Sum of Even no : " + even);
      System.out.println("Sum of Odd no : " + odd);
    }
}