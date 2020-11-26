function even_fibonacci_numbers(num){
    // Written by
//Vinod Mathew Sebastian
    let first_num = 1;
    let second_num = 2;
    let temp = first_num + second_num;
    let arr = [1,2];
    let i = 2;
    let sum = 0;
    
    while(i < num) {
        arr[i] = temp;
        first_num = second_num;
        second_num = temp;
        temp = first_num + second_num;
        i++;
        if(temp>num)break;
        
    
    }
       for (let i = 0; i < arr.length; i++){
           if (arr[i]% 2 === 0){
               sum += arr[i]
           }
       }
       return sum;
    }
    
