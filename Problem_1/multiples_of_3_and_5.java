import java.util.Scanner;

public class Multiples_of_3_and_5
{
    /*
     * @author Vinod Mathew Sebastian
     */
    public int sum;
    public int number;
    
    public Multiples_of_3_and_5(int number)
    {
      sum = 0;  
      this.number = number;
    }

  
    public int result()
    {
        if (number < 1){
            System.out.println("Please enter a positive number.");
            
    }
    else {
        for (int i=0; i<number; i++){
            
            if ((i%3 == 0) || (i%5 == 0)){
                sum += i;
            }
            
        }
       
    }
    return sum; 
}

public static void main(String [] args){
    Scanner input = new Scanner(System.in);
    int num = input.nextInt();
    Multiples_of_3_and_5 an_object = new Multiples_of_3_and_5(num);
    System.out.println("The result is: " + an_object.result());
}

}
