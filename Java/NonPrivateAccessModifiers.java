abstract class Govt{
  public abstract void govtfun();

};


public class NonPrivateAccessModifiers extends Govt{
    @Override
   public void govtfun()
     {  
        System.out.println("govt working");
 
         }
     static void Greeting()
     {
        System.out.println("Happy new year late");
     }
    public static void main(String []args)
    {
        NonPrivateAccessModifiers obj = new NonPrivateAccessModifiers();
        obj.govtfun();
        System.out.println("Working...");
        Sample.disp();
        Greeting();
        
        NonPrivateAccessModifiers.Greeting();
    }
}
 //static example

class Sample{
   static void disp()
   {
    System.out.println("Hello i am static function");
   }     

}