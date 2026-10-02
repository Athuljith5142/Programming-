// Define a class named CalcDemo with a method division() which takes two integer parameters and return the result. The method should handle the ArithmeticException using try...catch...finally blocks. Try block should return the result, catch block should return 0 and finally block should print "Finally block always execute...!". Invoke this method from main function which also defined in the same class.

import java.util.*;
class CalcDemo{
  int a ,b;

  void division(int a , int b){
    int res =0;
    this.a=a;
    this.b=b;
    

    try {
      res=this.a/this.b;
      
    } catch(ArithmeticException e) {
      System.out.println("Error");
    }
    finally{
      System.out.println("Done !");
    }

    System.out.println(res);
  }
  

}
public class try_catch{
    public static void main(String[] args) {
      CalcDemo d1 = new CalcDemo();
      d1.division(10,0);
      
    }
}