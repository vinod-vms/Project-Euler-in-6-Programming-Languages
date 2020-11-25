
function multiples_of_3_and_5(num){
    /*
    * @author: Vinod Mathew Sebastian
    */
    sum = 0;
    
	
	if(num < 1){
		console.log("Please enter a positive number.");
	}
else
	{
		for(let i=0;i<num; i++){
			if((i%3 === 0)|| (i%5 === 0)){
				sum +=i;
			}
		}
	}
	console.log(sum);
}

multiples_of_3_and_5(10);

