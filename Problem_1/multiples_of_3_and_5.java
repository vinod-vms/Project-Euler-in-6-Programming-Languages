
public class Multiples_of_3_and_5
{
    /*
     * @author Vinod Mathew Sebastian
     */
    public int sum;
    public int number;
    /*
    * @author: Vinod Mathew Sebastian
    */
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



}
