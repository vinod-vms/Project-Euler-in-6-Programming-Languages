
/**
 *
 * @author Vinod Mathew Sebastian
 * 
 */
import java.util.Scanner;
public class Even_fibonacci_numbers
{
   public static void main (String[] args){
       
       int num;
       int sum = 0;
       int first_num = 0;
       int second_num = 1;
       int temp = first_num + second_num;
       
       Scanner input = new Scanner(System.in);
       num = input.nextInt();
       
       while(temp < num) {
           
        if (temp % 2 == 0) {
        sum += temp;
        }
        
        first_num = second_num;
        second_num = temp;
        temp = first_num + second_num;
        
        }
       System.out.println("The result is " + sum);
    }

}
